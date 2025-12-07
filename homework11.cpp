


/*阶乘和数（正序）
【问题描述】

一个正整数如果等于组成它的各位数字的阶乘之和，则该正整数称为阶乘和数。例如正整数145，1!+4!+5!等于145，因此145就是一个阶乘和数。输入一个正整数，计算它的各位数字的阶乘之和，并判断它是否是一个阶乘和数。注意：输入的正整数，以及组成它的各位数字的阶乘之和都不会超过int类型的表示范围，并且输入的正整数的最高位不为0。

【输入形式】

从控制台输入一个正整数。

【输出形式】

先输出输入的正整数和一个逗号","，并从最高位开始输出组成该正整数的各位数字的阶乘相加形式，然后输出等号"="和各位数字阶乘之和，最后在下一行输出字符串"Yes"表示该正整数是阶乘和数，否则输出字符串"No"表示该正整数不是阶乘和数，输出Yes或No后输出回车换行符。所有输出字符之间都没有空格分隔。

【输入样例1】

145
【输出样例1】

145,1!+4!+5!=145
Yes
【输入样例2】

1400
【输出样例2】

1400,1!+4!+0!+0!=27
No
【输入样例3】

4
【输出样例3】

4,4!=24
No
【样例说明】

样例1中输入的正整数为145，组成它的各位数字的阶乘之和为145，所以145为阶乘和数。样例2中输入的正整数为1400，组成它的各位数字的阶乘之和为27，所以1400不是阶乘和数。样例3中输入的正整数为4，组成它的只有一位数字，其阶乘为24，也不是阶乘和数。
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n,sum=0,t,jc,m,p;
	cin>>n;
	cout<<n<<",";
	
	m=n;	
	
	int digits=0;
	while(n!=0)
	{
		n/=10;
		digits++;
	}
	
	n=m;
	

	while(digits>0)
	{
		p=(int)pow(10.0,digits-1);
		t=n/p;
		n%=p;
		jc=1;
		for(int i=1;i<=t;i++)
			jc*=i;
		cout<<t<<"!";
		cout<<(digits>1?"+":"=");
		sum+=jc;
		digits--;
	}
	cout<<sum<<endl;
	if(sum==m) 
		cout<<"Yes"<<endl;
	else 
		cout<<"No"<<endl;
}




#include <iostream>
#include <string>
using namespace std;

// 计算数字n的阶乘
int factorial(int n) {
    int res = 1;
    for (int i = 1; i <= n; ++i) {
        res *= i;
    }
    return res;
}

int main() {
    string numStr;
    cin >> numStr; // 读取输入的正整数（以字符串形式，方便处理每一位）
    
    int sum = 0;
    string expr;
    expr += numStr + ","; // 先拼接输入的数和逗号
    
    int len = numStr.length();
    for (int i = 0; i < len; ++i) {
        int digit = numStr[i] - '0'; // 将字符转换为数字
        sum += factorial(digit);     // 累加各位数字的阶乘
        expr += to_string(digit) + "!"; // 拼接阶乘表达式部分
        if (i < len - 1) {
            expr += "+"; // 除了最后一位，后面加加号
        }
    }
    expr += "=" + to_string(sum); // 拼接等号和阶乘和
    
    // 输出表达式和结果
    cout << expr << endl;
    if (stoi(numStr) == sum) { // 判断原数是否等于阶乘和
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}