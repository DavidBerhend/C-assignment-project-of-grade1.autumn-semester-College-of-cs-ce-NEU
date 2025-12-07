/*十进制转八进制
【问题描述】

请编写程序，输入十进制数，输出对应的八进制数。

【输入形式】

十进制非负整数

【输出形式】

对应的八进制非负整数

【样例输入】

5050

【样例输出】

11672

【样例说明】
【评分标准】*/

#include <iostream> 
using namespace std;
int main()
{
	long a;
	cin>>a;
	cout<<oct<<a<<endl;//记住，在输出的数前面加上oct，就可以把十进制数转换成八进制数输出
    system("pause");
	return 0;
}




