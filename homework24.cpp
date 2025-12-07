/*插入字符
【问题描述】
编写一函数char * insert(char *string, char c)，用于在一个已排好序（ASCII值从小到大）的字符串string（少于50个字符）中适当位置插入字符c，要求插入后串的序不变（从小到大），允许字符重复，函数返回插入后的字符串。
在main函数中测试该函数：从键盘分别输入有序字符串和单个字符，然后调用insert函数，并向屏幕输出插入后的字符串。
【输入形式】
从键盘分行输入有序字符串和单个字符
【输出形式】
向屏幕输出插入后的字符串
【输入样例】

abdef   
c
【输出样例】

abcdef
【样例说明】
从键盘输入少于50个字符的有序字符串abdef和字符c，通过调用函数char * insert(char *string, char c)将字符c插入字符串abdef，并以ASCII值从小到大排序输出
*/

#include<stdio.h>

char* insert(char *s,char c,char *t) {
	int flag=1;
	while (*s) {
		if (*s>=c) {
			if (flag==1) {
				*t++=c;
				flag=0;
			}
			*t++=*s++;
		}
		else
			*t++=*s++;	
	}
	if (flag==1)
		*t++=c;
	*t='\0';
	return 0;
}

int main() {
	char *s,*t,str[40],str1[50];
	char c,temp;
	s=str;
	scanf("%s",s);
	t=str1;
	scanf("%c",&temp);
	scanf("%c",&c);
	insert(s,c,t);
	printf("%s",t);
	return 0;
}


#include <iostream>
#include <cstring> // 只用最基础的strlen和strcpy函数
using namespace std;
int main() {
    char str1[201]; 
    char str2[101]; 
    char temp[301]; 
    cin.getline(str1, 201); 
    cin.getline(str2, 101); 
    int len1 = strlen(str1); 
    int len2 = strlen(str2); 
    int i = 0; 
    int j = 0; 
    int k = 0; 
    while (i < len1 && j < len2)
     {
        if (str1[i] < str2[j]) 
        {
            temp[k] = str1[i]; 
            i++; 
            k++; 
            temp[k] = str2[j]; 
            j++; 
            k++; 
        }
    }
    while (i < len1)
    {
        temp[k] = str1[i]; 
        i++;
        k++;
    }
    while (j < len2) 
    {
        temp[k] = str2[j]; 
        j++;
        k++;
    }
    temp[k] = '\0';
    strcpy(str1, temp);
    cout  << str1 << endl;
    return 0;
}