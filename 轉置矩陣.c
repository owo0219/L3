#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<math.h>

int main()
{
    int m=2,n=3,a[m][n];
    printf("請輸入六個整數並以空白區隔:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d ",&a[i][j]);
        }
    }
    printf("-----------2*3矩陣如下-----------\n");
    for(int i=0;i<m;i++){
       for(int j=0;j<n;j++){
           printf("%d\t",a[i][j]);
       }
       printf("\n");
    }
    printf("\n-----------轉置矩陣如下-----------\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}
