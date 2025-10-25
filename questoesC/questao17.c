#include <stdio.h>

int main(){
    int n;
    if(scanf("%d",&n)!=1) return 0;
    if(n>0) printf("Positivo\n");
    else if(n<0) printf("Negativo\n");
    else printf("Zero\n");
    return 0;
}
