/*温度转换
【问题描述】

输入一个华氏温度f（整数）,要求根据公式c=5(f-32)/9计算并输出摄氏温度，其中f由键盘输入，结果保留1位小数。

【输入形式】

输入在一行中给出1个绝对值不超过1000的整数f，表示华氏温度。

【输出形式】

在一行中输出摄氏温度，结果保留1位小数。

【样例输入】

100

【样例输出】

37.8

【样例说明】
【评分标准】*/

#include <iostream>
#include <iomanip>
using namespace std;
int main()

{
int f;
cin>>f;
double c=5.0*(f-32)/9;
cout<<fixed<<setprecision(1)<<c<<endl;//这个明显简洁一些，用这个。
return 0;
}

#include <iostream> 
#include <iomanip>
using namespace std;
int main()
{
	long f;
	cin>>f;
	cout<<setiosflags(ios::fixed)<<setprecision(1)<<5.0*(f-32)/9<<endl; 
	return 0;
}