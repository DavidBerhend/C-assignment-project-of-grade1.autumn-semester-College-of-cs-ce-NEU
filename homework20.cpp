/*找出一个二维数组中的鞍点
【问题描述】

找出一个 3x3 二维数组中的鞍点，即该位置上的元素在该行上最大，在该列上最小（也可能没有鞍点）


【输入形式】

数组


【输出形式】

输出鞍点坐标及数值，或者输出无鞍点


【样例输入】

1 2 4

2 4 8

3 6 12


【样例输出】

Saddle point:a[0][2]=4



【样例输入】

1 2 4

2 9 3

3 6 12


【样例输出】

There is no saddle point



【样例说明】

无


【评分标准】

输入上述两个二维数组，判断输出是否一致，以及核心代码是否使用二维数组。*/
#include <iostream>
using namespace std;

int main()
{
    int a[3][3];

    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            cin>>a[i][j];

    int flag, max, maxi, maxj;

    for(int i=0;i<3;i++)
    {
        max=a[i][0];
        maxi=i;
		maxj=0;
        
        for(int j=1;j<3;j++)
        {
            if(max < a[i][j])
            {
                max = a[i][j];
                maxi = i;
                maxj = j;
            }
        }

        flag = 1;
        for(int k=0;k<3;k++)
        {
            if(max>a[k][maxj])
            {
                flag = 0;
                break;
            }
        }

        if(flag == 1)
        {
            cout<<"Saddle point:"<<"a["<<maxi<<"]["<<maxj<<"]="<<max<<endl;
            break;
        }
    }

    if(flag == 0)
        cout<<"There is no saddle point"<<endl;

    return 0;
}











#include <iostream>
using namespace std;

int main() {
    int arr[3][3];
    // 读取 3x3 数组
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    bool hasSaddle = false;
    for (int i = 0; i < 3; i++) {
        // 找第 i 行的最大值及其列索引
        int rowMax = arr[i][0];
        int colIdx = 0;
        for (int j = 1; j < 3; j++) {
            if (arr[i][j] > rowMax) {
                rowMax = arr[i][j];
                colIdx = j;
            }
        }

        // 检查该最大值是否是其列的最小值
        bool isColMin = true;
        for (int k = 0; k < 3; k++) {
            if (arr[k][colIdx] < rowMax) {
                isColMin = false;
                break;
            }
        }

        if (isColMin) {
            cout << "Saddle point:a[" << i << "][" << colIdx << "]=" << rowMax << endl;
            hasSaddle = true;
            break;
        }
    }

    if (!hasSaddle) {
        cout << "There is no saddle point" << endl;
    }

    return 0;
}