/*整数各位数字求和 - 2022
【问题描述】
编写函数int sum(int x)，求整数x的各位数字之和。
在main函数中测试该函数：从键盘输入一非负整数，然后调用sum函数计算各位数字之和并输出结果。
【输入形式】
输入一个正整数。
【输出形式】

输出该整数各位数字之和。
【样例输入】

58
【样例输出】

13
【样例说明】

输入整数58，其各位数字之和为：5+8 = 13。*/

#include <iostream>
using namespace std;

int sums(int num)
{
	int sum;
	sum = 0;
	while (num != 0)
	{
		sum += num % 10;
		num /= 10;
	}
	return sum;
}

int main()
{
	int number;
	cin>>number;
	cout<<sums(number);
	return 0;
}



#include<iostream>
using namespace std;
int sum(int x)
{int s=0;
while(x>0)
{s+=x%10;
x/=10;
}
return s;
}
int main()
{int n;
cin>>n;
cout<<sum(n)<<endl;
system("pause");
return 0;
}