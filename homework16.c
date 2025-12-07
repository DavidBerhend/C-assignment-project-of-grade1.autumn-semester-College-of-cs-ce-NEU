/*整数合并 - 副本
【问题描述】
编写一函数int comb(int a,int b)，将两个两位数的正整数a、b合并形成一个整数并返回。合并的方式是：将a的十位和个位数依次放在结果的十位和千位上， b的十位和个位数依次放在结果的个位和百位上。例如，当a＝45，b=12。调用该函数后，返回5241。要求在main函数中调用该函数进行验证：从键盘输入两个整数，然后调用该函数进行合并，并输出合并后的结果。
【输入形式】
输入两个两位数的正整数，以空格隔开。

【输出形式】

输出合并后的正整数。
【输入样例】

45 12
【输出样例】

5241
*/
#include <iostream>
using namespace std;

int getGe(int number) {
	return number%10;
}
int getBai(int number) {
	return number/10;
}
int main() {
	int number1,number2;
	int a1,a2,b1,b2;
	int result;
	cin>>number1>>number2;
	a1=getGe(number1);
	a2=getBai(number1);
	b1=getGe(number2);
	b2=getBai(number2);
	result=1000*a1+100*b1+10*a2+b2;
	cout<<result;
	return 0;
}



#include <stdio.h>

int main()
{
   int a,b,c,d;
   scanf("%1d %1d %1d %1d", &a, &b, &c, &d);
   printf("%d", b * 1000 + d * 100 + a * 10 + c);
    return 0;
}