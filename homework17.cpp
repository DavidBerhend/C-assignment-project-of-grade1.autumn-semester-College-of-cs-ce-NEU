/*统计整数个数
【问题描述】

输入一行字符串,不要超过80个字符，含有数字和非数字字符以及空格等，如：
df23adfd56 2343？23dgjop535
如果将其中所有连续出现的数字视为一个整数，要求统计在该字符串中共有多少个整数，并将这些数依次输出。
【输入说明】

只有一行，含有数字和其它任意字符。该行最长含80个字符。
【输出说明】

第一行为字符串包含的整数个数，第二行依次为各个整数，各整数之间用一个空格分隔。在第二行末也要输出一个回车符。
【输入样例】

 df23adfd56 2343？23dgjop535
【输出样例】

5
23 56 2343 23 535
【样例说明】

在字符串df23adfd56 2343？23dgjop535中有5个整数分别是
23 56 2343 23 535
*/
#include <iostream>
#include <string>
using namespace std;
 
int main() {
    char str[81];
    cin.getline(str, 81);
    int len = strlen(str);
    int count = 0;
    int num[80];  
    int index = 0;
    for (int i = 0; i < len; ++i) {
        if (isdigit(str[i])) {
            int temp = 0;
            while (i < len && isdigit(str[i])) {
                temp = temp * 10 + (str[i] - '0');
                ++i;
            }
            num[count++] = temp;
        }
    }
    cout << count << endl;
    for (int i = 0; i < count; ++i) {
        cout << num[i];
        if (i < count - 1) {
            cout << " ";
        }
    }
    cout << endl;
    return 0;
}


#include <iostream>
using namespace std;


int trans (char *s, int a[])
{
	int n = 0, d;
	while (*s != '\0')
	{
		while ((*s > '9' || *s < '0')&& (*s != '\0'))
			s++;
		if (*s == '\0')
			break;

		d = 0;
		while (*s >= '0' && *s <= '9')
		{
			d = 10 * d + (*s - '0');
			s++;
		}
		a[n] = d;
		n++;
	}
	return n;
}

int main()
{
	char s[100];
	cin>>s;
	int a[100], i, n;
	n = trans (s, a);
	cout<<n<<endl;
	for (i = 0; i < n; i++)
		 cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}

















#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    // 读取一行输入
    getline(cin, input);
    
    int num_count = 0;          // 记录数字的个数
    string current_num;         // 存储当前正在读取的数字
    string all_nums[100];       // 存储所有找到的数字
    
    // 遍历输入的每个字符
    for (int i = 0; i < input.length(); i++) {
        char c = input[i];
        
        // 如果是数字，就加到当前数字中
        if (c >= '0' && c <= '9') {
            current_num = current_num + c;
        }
        // 如果不是数字，且当前正在记录数字
        else if (current_num.length() > 0) {
            all_nums[num_count] = current_num;  // 保存当前数字
            num_count++;                        // 数字个数加1
            current_num = "";                   // 清空当前数字，准备下一个
        }
    }
    
    // 处理最后可能剩下的数字
    if (current_num.length() > 0) {
        all_nums[num_count] = current_num;
        num_count++;
    }
    
    // 输出结果
    cout << num_count << endl;                  // 先输出数字的个数
    for (int i = 0; i < num_count; i++) {       // 再输出每个数字
        if (i > 0) {
            cout << " ";                        // 数字之间加空格
        }
        cout << all_nums[i];
    }
    cout << endl;
    system("pause");
    return 0;
}
