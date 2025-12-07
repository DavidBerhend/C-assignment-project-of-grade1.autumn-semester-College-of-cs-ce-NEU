/*计算日期差
【问题描述】
结构
struct Date {
   int year;
   int month;
   int day;
};
利用该结构编写一个程序用来计算两个日期之间相差的天数。
 
【输入形式】
输入两个日期，每个日期分占一行，在一行中日期的年、月、日是三个整数，以空格分隔。并假设第二个日期大于或等于第一个日期。
【输出形式】
第二个日期与第一个日期间相差的天数。
【输入样例】

2003 3 25 
2003 3 29
【输出样例】

4
*/

#include<stdio.h>
struct Date {
   int year;
   int month;
   int day;
};
int leap(int year) {
	if (year%4==0 && year%100!=0 || year%400==0)
		return 1;
	else
		return 0;
}
int findday(int year,int month,int day) {
	int days;
	days=day;
	switch(month-1) {
		case 12:days+=31;
		case 11:days+=30;
		case 10:days+=31;
		case  9:days+=30;
		case  8:days+=31;
		case  7:days+=31;
		case  6:days+=30;
		case  5:days+=31;
		case  4:days+=30;
		case  3:days+=31;
		case  2:if (leap(year)==1) days+=29;
			    else days+=28;
		case 1:days+=31;
	}
	return days;
}
int main() {
    struct Date date1,date2;
	int i,days;
	days=0;
	scanf("%d %d %d",&date1.year,&date1.month,&date1.day);
	scanf("%d %d %d",&date2.year,&date2.month,&date2.day);
	
	if (date1.year == date2.year) {
		days=findday(date2.year,date2.month,date2.day)
			-findday(date1.year,date1.month,date1.day);
	}
	else if (date1.year == date2.year -1) {
		days=365+leap(date1.year)-findday(date1.year,date1.month,date1.day)+
			findday(date2.year,date2.month,date2.day);
	}
	else {
		days=365*(date2.year-date1.year-1);
		for (i=date1.year+1;i<date2.year;i++)
			days+=leap(i);
		days+=365+leap(date1.year)-findday(date1.year,date1.month,date1.day)+
			findday(date2.year,date2.month,date2.day);
	}
	printf("%d",days);
	return 0;
}



#include<iostream>
using namespace std;

struct Date {
   int year;
   int month;
   int day;
};
bool isLeapYear(int year) 
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
int getDaysInMonth(int year, int month) 
{
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && isLeapYear(year)) 
    return 29;
    return days[month - 1];
}
int TotalDays(Date date)
 {
    int total = 0;
   for (int y = 0; y < date.year; y++) 
    {
        total += isLeapYear(y) ? 366 : 365;
    }
   for (int m = 1; m < date.month; m++)
    {
        total += getDaysInMonth(date.year, m);
    }
    total += date.day;
    return total;
}
int main() 
{
    Date date1, date2;
    cin >> date1.year >> date1.month >> date1.day;
    cin >> date2.year >> date2.month >> date2.day;
    int days1 = TotalDays(date1);
    int days2 = TotalDays(date2);
    cout << days2 - days1 << endl;
    
    return 0;
}