/*回文数A
【问题描述】

所谓"回文数"是指具有如下性质的整数：一个整数，当它的各位数字逆序排列，形成的整数与原整数相同，这样的数称为回文数。例如，素数11，373，其各位数字对换位置后仍然为11，373，因此这两个整数均为回文数。编写函数int loop(int x)，判断一个整数是否为回文数，如果x是回文数则返回1，否则返回0。编写程序loop.c，接收控制台输入的两个整数a，b。调用loop函数输出a到b之间（包括a和b）的所有为偶数的回文数。
【输入形式】

控制台输入两个整数a和b（必有a<b），以空格分隔。
【输出形式】

输出有若干行，每行有一个a和b之间的回文数。输出各行上的数字不重复，且从小至大依次按序输出。
【样例输入】

3 120
【样例输出】

4
6
8
22
44
66
88
【样例说明】

输入整数a=3，b=120，要求输出所有[3, 120]之间的为偶数的回文数。按升序分行输出所有符合题意的整数。
*/

#include <iostream> 
using namespace std;

bool loop(int x)
{
	int r;
	int s = 0;
	int n = x;

	do {
		r = x % 10;
		s = s * 10 + r;
	} while((x = x / 10)!=0);

	return (n == s);
}

bool even(int x)
{
	return(x%2==0);
}


int main()
{
	int a, b;
	int i;
	cin>>a>>b; 	
	for (i = a; i <= b; i++)
		if (loop(i) && even(i))
			cout<<i<<endl;
	return 0;
}




#include <iostream>
#include <string>
using namespace std;

// 判断一个整数是否为回文数，是则返回1，否则返回0
int loop(int x) {
    string s = to_string(x);
    int len = s.length();
    for (int i = 0; i < len / 2; ++i) {
        if (s[i] != s[len - 1 - i]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; ++i) {
        // 判断是否为偶数且是回文数
        if (i % 2 == 0 && loop(i) == 1) {
            cout << i << endl;
        }
    }
    return 0;
}