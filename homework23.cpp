/*合并字符串
【问题描述】
编写一个函数void  str_bin(char str1[ ], char str2[ ])， str1、str2是两个有序字符串（其中字符按ASCII码从小到大排序），将str2合并到字符串str1中，要求合并后的字符串仍是有序的，允许字符重复。在main函数中测试该函数：从键盘输入两个有序字符串，然后调用该函数，最后输出合并后的结果。
【输入形式】
分行从键盘输入两个有序字符串（不超过100个字符）
【输出形式】
输出合并后的有序字符串
【输入样例】

aceg
bdfh
【输出样例】

abcdefgh
【样例说明】
输入两个有序字符串aceg和bdfh，输出合并后的有序字符串abcdefgh
*/

#include <stdio.h>
#include <string.h>
void str_bin(char s1[], char s2[],char s[]) {
	unsigned int i,j,k;
	i=0;
	j=0;
	k=0;
	while (s1[i] && s2[j]) {
		if (s1[i]<s2[j]) 
			s[k++]=s1[i++];
		else
			s[k++]=s2[j++];
	}
	while ( i<strlen(s1) ) 
		s[k++]=s1[i++];
	while ( j<strlen(s2) )
		s[k++]=s2[j++];
	s[k]='\0';
}
int main() {
	char s1[100],s2[100],s[200];
	scanf("%s",s1);
	scanf("%s",s2);
	str_bin(s1,s2,s);
	printf("%s",s);
	return 0;
}


#include <iostream>
#include <cstring>
using namespace std;
void str_bin(char str1[], char str2[])
 {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int i = 0, j = 0, k = 0;
    char temp[200]; 
    while (i < len1 && j < len2) 
    {
        if (str1[i] < str2[j]) {
            temp[k++] = str1[i++];
        } else {
            temp[k++] = str2[j++];
        }
    }
    while (i < len1) 
    {
        temp[k++] = str1[i++];
    }
    while (j < len2) 
    {
        temp[k++] = str2[j++];
    }
    temp[k] = '\0'; 
    strcpy(str1, temp); 
}

int main() 
{
    char str1[100], str2[100];
    cin >> str1 >> str2;
    str_bin(str1, str2);
    cout << str1 << endl;
    return 0;
}