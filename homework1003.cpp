/*计算平均值-2022
【问题描述】
从键盘输入三个整数，分别存入x,y,z三个整型变量中，计算并输出三个数的和以及平均值。
【输入形式】
从键盘输入三个整数，整数之间以空格隔开。
【输出形式】
在屏幕上分两行显示结果：
第一行为三个数的和，整数形式输出；
第二行为三个数的平均值，浮点数形式输出，小数点后保留两位小数。
【输入样例】

3 2 3
【输出样例】

8
2.67
【样例说明】
3、2、3的和为8，所以第一行输出8；
第二行输出3、2、3的平均值2.67（保留两位小数）。*/


#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
	int x, y, z;
	int sum;
	double average;
    cin>>x>>y>>z;	
	sum = x + y + z;
	average = (double)sum / 3;//强制转换类型
    cout<<sum<<endl;
    cout<<fixed<<setprecision(2)<<average<<endl;
    //cout<<setiosflags(ios::fixed)<<setprecision(2)<<average<<endl;
    //两种方法均可。
    system("pause");
	return 0;
}
