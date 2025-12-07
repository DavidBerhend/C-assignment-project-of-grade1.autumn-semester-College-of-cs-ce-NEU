/*输入输出和整数运算
【问题描述】编写一个程序，读入两个整数，计算并输出他们的和、积、商和余数。

【输入形式】

 程序运行到输入时，不要显示输入提示信息。

 输入为两个整数（在问题描述中记作A和B，程序中请自定变量名）,A和B使用1个空格分隔。

【输出形式】

 分别输出A、B的和A+B、积A*B、商A\B和余数A%B

【样例输入】

 -20 -6
【样例输出】

-20+(-6)=-26
 -20*(-6)=120
 -20/(-6)=3
 -20%(-6)=-2
【样例说明】

 输出时注意去除多余的空格，避免输出判定错误。*/

#include <iostream>
using namespace std;
void dispB(int b)//这个是用来判断b的正负然后输出的函数，以符合他的格式。
{
	if(b>0)
		cout<<b;
	else
		cout<<'('<<b<<')';
}

int main()
{
	int a,b,A,B,C,D;
    cin>>a>>b;
    A=a+b;
    B=a*b;
    C=a/b;
    D=a%b; 
    
    cout<<a<<"+"; dispB(b); cout<<"="<<A<<endl;
    cout<<a<<"*"; dispB(b); cout<<"="<<B<<endl;
    cout<<a<<"/"; dispB(b); cout<<"="<<C<<endl;
    cout<<a<<"%"; dispB(b); cout<<"="<<D<<endl;
    return 0;
}

//自己写的
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(b<0)
    {
    cout<<a<<"+("<<b<<")="<<a+b<<endl;
    cout<<" "<<a<<"*("<<b<<")="<<a*b<<endl;  
    cout<<" "<<a<<"/("<<b<<")="<<a/b<<endl;
    cout<<" "<<a<<"%("<<b<<")="<<a%b<<endl;
    }

    else
    {
cout<<a<<"+"<<b<<"="<<a+b<<endl;
cout<<a<<"*"<<b<<"="<<a*b<<endl;
cout<<a<<"/"<<b<<"="<<a/b<<endl;
cout<<a<<"%"<<b<<"="<<a%b<<endl;

    }
return 0;
}