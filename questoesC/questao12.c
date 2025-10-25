#include <stdio.h>

int main(){
    int a[5], b[5];
    for(int i=0;i<5;i++) if(scanf("%d",&a[i])!=1) return 0;
    for(int i=0;i<5;i++) if(scanf("%d",&b[i])!=1) return 0;
    int res=0;
    for(int i=0;i<5;i++) res += a[i]*b[i];
    printf("%d\n", res);
    return 0;
}
