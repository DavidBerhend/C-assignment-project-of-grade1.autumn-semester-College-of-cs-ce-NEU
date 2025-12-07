/*求水仙花数 - 2021
【问题描述】

编写一个程序，输入一个正整数N(N大于等于100小于等于999)，求出100~N之间的所有水仙花数。
所谓的水仙花数是：如果一个三位数的个位数、十位数、百位数的立方和等于该数自身，就称这个数为水仙花数。
【输入形式】

输入一个正整数N。
【输出形式】

输出从100到N之间的所有水仙花数，每个数以回车结束。
【样例输入】

 400
【样例输出】

 153
 370
 371
【样例说明】

输入一个的正整数400，输出为100~400之间的水仙花数153，370，371 */



#include <iostream>
using namespace std;

int main()
{
	int N;
	cin>>N;
	
	for(int i=100;i <= N;i++)
	{
		int gt = i % 10;//提取个位数字
		int st = i / 10 % 10;//提取十位数字
		int bt = i / 100;//提取百位数字
		if(gt*gt*gt + st*st*st + bt*bt*bt == i)//判断是否为水仙花数
		{
			cout<<i<<endl; 
		}
	}
	return 0;
}



//两个例子都看一下。

#include<iostream>
using namespace std;
int main()
{
int N;
cin>>N;
if(N<100 || N>999)
{
return 1;//输入不合法直接退出
}

for(int num=100;num<=N;num++)
{
 int hun=num/100;
 int ten=(num/10)%10;
 int one=num%10;
if(hun*hun*hun+ten*ten*ten+one*one*one==num)
{
    cout<<num<<endl;
}
}
return 0;
}