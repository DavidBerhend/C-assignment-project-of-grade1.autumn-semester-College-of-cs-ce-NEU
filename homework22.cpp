/*回文判断
【问题描述】
回文是正读和倒读都一样的句子。读入一个最大长度不超过50个字符的句子，判断其是否是回文。
【输入形式】
输入一个最大长度不超过50个字符的句子
【输出形式】
Yes/No
【输入样例】

abcba
【输出样例】

Yes
【样例说明】
输入abcba，判断出它是回文。*/

#include <stdio.h>
#include <string.h>

int main() {
	char s[50];
	int i,j;
	int flag;
	flag=0;
	scanf("%s",s);
	for (i=0,j=strlen(s)-1;i<=j;i++,j--)
	{
		if(s[i]!=s[j])
		{
			flag=1;
			break;
		}

	}
	if (flag==0)
		printf("Yes");
	else
		printf("No");
	return 0;
}




#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    bool isPalin = true;
    for (int i = 0; i < s.size() / 2; i++) 
    {
        if (s[i] != s[s.size() - 1 - i])
         {
            isPalin = false;
            break; 
        }
    }
    
    cout << (isPalin ? "Yes" : "No") << endl;
    return 0;
}