/*素数判断 - 副本
【问题描述】

编写一个函数isprime(n).判断整数n是否为素数.编写程序使用此函数,当输入一个整数时,对它进行判断,当为素数时,输出1.否则,输出0.
【输入形式】

控制台输入一个整数.
【输出形式】

控制台输出判断结果0或者1.
【样例输入】

45
【样例输出】

0
【样例说明】

45非素数,故输出为0
*/

#include <iostream>
#include <cmath>
using namespace std;

int isprime(int n)
{
	int i;
	for ( i = 2; i <= sqrt(n); i++ ){
		if ( n % i == 0 )
			return 0;
	}
	return 1;
}


main()
{
	int n;
	cin>>n;
	cout<<isprime(n);
}


#include <iostream>
using namespace std;
int isprime(int n)
// 判断整数n是否为素数的函数
{
    if (n <= 1) // 素数定义：大于1的自然数，且只能被1和自身整除
        return 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;// 能被其他数整除，不是素数
    }
    return 1;//是素数
}
int main() {
    int num;
    cin >> num;
    cout << isprime(num) << endl;
    return 0;
}