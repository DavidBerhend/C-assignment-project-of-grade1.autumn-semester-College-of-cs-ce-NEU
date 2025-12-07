/*指针与字符串
【问题描述】使用字符型指针数组，存储周一到周日的英文（首字母大写）。输入数字1-7任意一个数字，输出英文Monday-Sunday的对应英文。
【输入形式】

数字1-7的任一数字。
【输出形式】

英文Monday-Sunday的对应英文。

【样例输入】

1
【样例输出】

Monday
【样例说明】

1对应星期一的英文表示Monday
【评分标准】*/

#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	n=n-1;
	const char *str[]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};   
	cout<<str[n]<<endl;
	return 0;
}


#include <iostream>
using namespace std;
int main()
{
    char *week[7]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    int n;
    cin>>n;
    cout<<week[n-1]<<endl;    
    return 0;
}