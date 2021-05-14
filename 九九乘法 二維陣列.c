#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<math.h>

int main()
{
   int a[9][9];
    for(int i=0;i<=8;i++){
        for(int j=0;j<=8;j++){
            a[i][j]=(i+1)*(j+1);
            printf("%2d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
