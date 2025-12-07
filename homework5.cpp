/*求某年某月的天数
【问题描述】

输入年月，输出该年月的天数。

【输入形式】

输入的年月是合理的（0≤年份≤10000,1≤月份≤12）, 如不合理输出"Error!", 注意格式:Error!后不包含换行符、回车符。

【输出形式】

输出为相应的数字表示，结尾处不包含换行符、回车符。

【样例输入1】

2017 9
【样例输出1】

30
【样例输入2】

2100 2
【样例输出2】

28
【样例输入3】

2000 2
【样例输出3】

29
【样例输入4】

12000 15
【样例输出4】

Error!
*/


#include <iostream>
using namespace std;

int main()
{
    int year,month;

    cin>>year>>month;//整体逻辑是。如果输入是对的，继续判断，否则到error。
	if (year>=0&&year<=10000&&month>=0&&month<=12)
  	{
		switch (month)
 		{     
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12: cout<<"31";	break;
			case 4:
			case 6:
			case 9:
			case 11: cout<<"30";	break;
 		}
   		if (month==2)
      	{
			if(year%4==0&&year%100!=0||year%400==0)
				cout<<"29";
          	else cout<<"28";
      	}
  	}
	else 
		cout<<"Error!";
    return 0;
}



#include<iostream>
using namespace std;
int main()
{
int year,month;
cin>>year>>month;
if(year<0 || year>10000||month<1 || month>12)
{
    cout<<"Error!"<<endl;
    return 0;

}
int days;
switch(month)
{
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        days=31;
        break;
    case 4: case 6: case 9: case 11:
        days=30;
        break;
    case 2:
        if((year%4==0 && year%100!=0) || (year%400==0))
        {
            days=29;
        }
        else
        {
            days=28;
        }
        break;
}
cout<<days<<endl;
return 0;



}