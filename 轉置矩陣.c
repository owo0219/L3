#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<math.h>

int main()
{
    int m=2,n=3,a[m][n];
    printf("�п�J���Ӿ�ƨåH�ťհϹj:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d ",&a[i][j]);
        }
    }
    printf("-----------2*3�x�}�p�U-----------\n");
    for(int i=0;i<m;i++){
       for(int j=0;j<n;j++){
           printf("%d\t",a[i][j]);
       }
       printf("\n");
    }
    printf("\n-----------��m�x�}�p�U-----------\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}
