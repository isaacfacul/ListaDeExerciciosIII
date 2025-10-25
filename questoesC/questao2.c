#include <stdio.h>

int main(){
    int a,b;
    if(scanf("%d %d",&a,&b)!=2) return 0;
    if(a>b){ int t=a; a=b; b=t; }
    for(int i=a+1;i<=b-1;i++) printf("%d ", i);
    printf("\n");
    return 0;
}
