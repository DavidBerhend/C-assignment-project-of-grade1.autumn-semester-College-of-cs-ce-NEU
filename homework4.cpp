/*求序列平方和
【问题描述】

请编写程序，输入正整数 n，计算平方和 s=12+22+32+⋯+n2

【输入形式】

n

【输出形式】

s

【样例输入】

9

【样例输出】

285

【样例说明】
【评分标准】*/

#include<iostream>
using namespace std;
int main()
{
    int i=1,n,sum=0;//i=1是初始值，sum是初始的和，n是输入的数，也就是执行到第几个数。
    cin>>n;
    while(i<=n)//这个第一思路就是循环。到i=n为止。
    {
        sum=sum+i*i;
        i++;
    }
    cout<<sum;
    return 0;
}


//下面这个是用for循环写的
#include <iostream>
using namespace std;
int main()
{
int n,s=0;
cin>>n;
for(int i=1;i<=n;i++)
{
    s +=i*i;
}

cout<<s<<endl;
return 0;
}