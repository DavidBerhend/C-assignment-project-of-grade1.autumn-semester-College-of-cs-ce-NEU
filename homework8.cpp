/*输出三角形-2022
【问题描述】编写一个程序，输入一奇数n（2≤n≤80），表示最长一行的*号个数，
要求程序中最多用三条printf语句，打印如下三角形：
       *

      ***

     *****

    *******

   *********

  ***********

 *************

***************
该三角形为对称三角形，其底边上"*"号个数为n。上图为输入15时的输出。
【输入形式】

从标准输入读取一个奇数，表示要打印的最长行的*号数。
【输出形式】

向标准输出打印一个三角形，如上图所示。并且在最后一行末也输出一个回车。
【样例输入】

3
【样例输出】

 *
***
【样例说明】

输入最长行的*号数，输出打印一个三角形。*/

#include <iostream>
using namespace std;

int main()
{
	int i, j, pos;
	int number;
	cin>>number;
	pos = number / 2 + 1;//计算行数
	for (i = 0; i < pos; i++)
	{
		for (j = 0; j < pos - 1 - i; j++)//打印空格
			cout<<" ";
		for (j = 0; j < 2*i+1; j++)//打印*
			cout<<"*";
		cout<<endl;
	}

	return 0;
}



#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    // 计算行数，行数为 (n + 1) / 2
    int rows = (n + 1) / 2;
    for (int i = 1; i <= rows; i++) 
    {
        // 打印前导空格
        for (int j = 1; j <= rows - i; j++) 
        {
            cout << " ";
        }
        // 打印 *
        for (int k = 1; k <= 2 * i - 1; k++) 
        {
            cout << "*";
        }
        // 换行
        cout << endl;
    }
    return 0;
}