/*字符串匹配
【问题描述】
编写一函数strend(s, t)，如果字符串t出现在字符串s的尾部，该函数返回1，否则返回0。要求在main函数中测试该函数：先从键盘输入字符串s、t（不超过100个字符），然后调用该函数，并输出返回的结果。
【输入形式】
从键盘分行输入两个字符串：s，t
【输出形式】
输出有两种可能，Yes或No
【输入样例】

abcdefgh
fgh
【输出样例】

Yes
【样例说明】
输入了两个字符串s，t，发现t是在s的尾部，则输出Yes
*/

#include "stdio.h"
#include "string.h" 

int strend(char s[],char t[])
{
	int i,j,l1,l2;
	l1=strlen(s);
	l2=strlen(t);
	if(l1<l2)
		return 0;
	for(i=l2-1,j=l1-1;i>=0;i--,j--)
		if(t[i]!=s[j])
			return 0;
	return 1;	
}

int main()
{
	char s[1000],t[1000];
	int rc;
	gets(s);
	gets(t);
	rc=strend(s,t);
	if(rc == 1)
		printf("Yes");
	else 
		printf("No");	
}




#include <stdio.h>
#include <string.h>

int strend(char *s, char *t) 
{
    int len_s = strlen(s);
    int len_t = strlen(t);
    if (len_t > len_s) 
    {
        return 0;
    }
   
    char *p = s + len_s - len_t;
   
    return strcmp(p, t) == 0 ? 1 : 0;
}

int main()
 {
    char s[101], t[101];
   
    gets(s);
    gets(t);
    
    if (strend(s, t)) 
    {
        printf("Yes\n");
    } 
    else 
    {
        printf("No\n");
    }
    return 0;
}