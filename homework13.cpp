/*求sinh(x)的值 - 副本
【问题描述】

 写一函数求sinh(x)的值，求sinh(x)的近似公式为：sinh(x)=(ex - e-x)/2，其中用一个函数求ex



【输入形式】

输入x值


【输出形式】

输出sinh(x)的值



【样例输入】

1


【样例输出】

1.1752


【样例输入】

2


【样例输出】

3.62686   */

#include <iostream>
#include <cmath>

using namespace std;

double e(double x)
{
    return exp(x);
}

double sinh(double x)
{
	return (e(x)-e(-x))/2;
} 

int main()
{

	double x, res;
	cin>>x;
	res=sinh(x);
	cout<<res<<endl;
	return 0;
}



#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// 计算e的x次方的函数
double expFunc(double x) {
    return exp(x);
}

// 计算sinh(x)的函数
double sinhFunc(double x) {
    double ex = expFunc(x);
    double eNegX = expFunc(-x);
    return (ex - eNegX) / 2;
}

int main() {
    double x;
    cin >> x;
    cout << fixed << setprecision(5) << sinhFunc(x) << endl;
    return 0;
}