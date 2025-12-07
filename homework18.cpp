/*矩阵旋转 - 副本
【问题描述】

编写一个程序，读入一个矩阵，输出该矩阵以第一行第一列数字为中心，顺时针旋转90度后的新矩阵，例如：
输入的矩阵为:

1 2 3  
4 5 6
顺时针旋转90度后输出的矩阵为：

4 1  
5 2  
6 3
【输入形式】

输入的第一行为两个正整数m和n，指定输入矩阵的行数和列数（0<m<=10，0<n<=10)

剩下的输入为矩阵的内容，共m行，每行n个整数

数据之间用空格分隔

【输出形式】

输出的第一行为两个正整数m和n，为输出的新矩阵的行数和列数

剩下的输出为新矩阵的内容，共m行，每行n个整数

数据之间用空格分隔

每行数据的最后无空格

最后的一行输出后面无换行符

【样例输入1】

2 3
1 2 3
4 5 6
【样例输出1】

3 2
4 1
5 2
6 3
【样例输入2】

1 5
1 3 5 7 9
【样例输出2】

5 1
1
3
5
7
9
*/

#include <iostream>
using namespace std;

int main()
{
    int m=10,n=10;
	int a[m][n],b[n][m];
	
    cin>>m>>n;    


    for (int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            cin>>a[i][j];
      
	for(int i = 0; i < m; i++)
			for(int j = 0; j < n; j++)
				b[j][m- i - 1] = a[i][j];  


    cout<<n<<" "<<m<<endl;
    for (int i=0;i<n;i++)
    {
		for(int j=0;j<m;j++)
            cout<<b[i][j]<<" ";
  		cout<<endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int m=10,n=10,max;
	int a[m][n],b[n][m];
	
    cin>>m>>n;    
    max=m>n?m:n;
    

    for (int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            cin>>a[i][j];
            
    // rotate around diagonal 
    for (int i = 0; i < max; ++i) {
        for (int j = 0; j < i; ++j) {
            swap(a[i][j], a[j][i]);
        }
    }            

	// rotate horizontally 
    for (int i = 0; i < m / 2; ++i) {
        for (int j = 0; j < n; ++j) {
            swap(a[j][i], a[j][m - i - 1]);
        }
    }

    cout<<n<<" "<<m<<endl;
    for (int i=0;i<n;i++)
    {
		for(int j=0;j<m;j++)
            cout<<a[i][j]<<" ";
  		cout<<endl;
    }

    return 0;
}





#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int matrix[100][100];  // 扩大数组容量，避免越界
    
    // 读取矩阵
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }
    
    // 输出旋转后矩阵的尺寸
    cout << n << " " << m << endl;
    
    // 输出旋转后的矩阵（修正格式问题）
    for (int j = 0; j < n; ++j) {
        for (int i = m - 1; i >= 0; --i) {
            cout << matrix[i][j];
            // 只在不是本行最后一个元素时输出空格
            if (i != 0) {
                cout << " ";
            }
        }
        // 只在不是最后一行时输出换行
        if (j != n - 1) {
            cout << endl;
        }
    }
    
    return 0;
}
        