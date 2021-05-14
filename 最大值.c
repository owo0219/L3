#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<math.h>
int m;
int p(int x,int y,int z){
    if(x>y && x>z)
    m=x;
    else if(y>x && y>z)
    m=y;
    else
    m=z;
}

int main() {
   int a,b,c;
   scanf("%d %d %d",&a,&b,&c);
   p(a,b,c);
   printf("³Ì¤j­È¬°:%d",m);
}
