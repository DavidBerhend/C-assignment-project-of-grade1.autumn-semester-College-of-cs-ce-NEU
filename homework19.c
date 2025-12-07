/*求两组整数的并集1
【问题描述】

从标准输入中输入两组整数(每组不超过20个整数，每组整数中元素不重复)，合并两组整数，重复的整数只出现一次，并按从大到小顺序排序输出（即两组整数集的"并集"）。

【输入形式】

首先输入第一组整数的个数，然后在下一行输入第一组整数，以一个空格分隔各个整数；再在新的一行上输入第二组整数的个数，然后在下一行输入第二组整数，以一个空格分隔。

【输出形式】

按从大到小顺序排序输出合并后的整数集（以一个空格分隔各个整数，最后一个整数后的空格可有可无）。

【样例输入】

8
5  105  4  32  8  7  9  -60
5
5  2  87  10  105

【样例输出】

105   87   32   10   9   8   7   5   4   2   -60
【样例说明】

第一组整数有8个，分别为5   105   4   32   8   7   9   -60，第二组整数有5个，分别为5   2   87   10   105。将第一组和第二组整数合并（在两组整数中都出现的整数5和105只出现一次），并按从大到小顺序排序后结果为105   87   32   10   9   8   7   5   4   2   -60。

【评分标准】

共有5个测试点。*/

#include<stdio.h>

void selectSort(int arr[], int n)
{
	int i,j, k, temp; 
	for(i=0;i<n-1;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
			if(arr[j]>arr[k])
				k=j;	
		if(i!=k)
		{
			temp=arr[i];arr[i]=arr[k];arr[k]=temp;
		}						
	}
}

int main()
{
	int m,n,i;
	int a[100];
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&n);
	for(i=m;i<m+n;i++)
	{
		scanf("%d",&a[i]);
	}
	selectSort(a,m+n);
	for(i=0;i<m+n;i++)
	{
	 
		if(a[i]!=a[i+1] || i==m+n-1)
		{
			printf("%d ",a[i]);		
		}
	}
}







#include <stdio.h>
#include <stdlib.h>

// 比较函数，用于qsort的降序排序
int compare(const void *a, const void *b) {
    return *(int *)b - *(int *)a;
}

int main() {
    int n1, n2;
    // 读取第一组整数的个数和数据
    scanf("%d", &n1);
    int arr1[20];
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
    // 读取第二组整数的个数和数据
    scanf("%d", &n2);
    int arr2[20];
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }
    
    // 合并并去重
    int merged[40];
    int idx = 0;
    // 先加入第一组所有元素
    for (int i = 0; i < n1; i++) {
        merged[idx++] = arr1[i];
    }
    // 加入第二组中不在第一组的元素
    for (int i = 0; i < n2; i++) {
        int exist = 0;
        for (int j = 0; j < n1; j++) {
            if (arr2[i] == arr1[j]) {
                exist = 1;
                break;
            }
        }
        if (!exist) {
            merged[idx++] = arr2[i];
        }
    }
    
    // 降序排序
    qsort(merged, idx, sizeof(int), compare);
    
    // 输出结果
    for (int i = 0; i < idx; i++) {
        printf("%d ", merged[i]);
    }
    
    return 0;
}