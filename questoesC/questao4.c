#include <stdio.h>

int main(){
    long long n;
    if(scanf("%lld",&n)!=1) return 0;
    if(n<0) n = -n;
    if(n==0){ printf("1 digito\n"); return 0; }
    int cnt=0;
    while(n>0){ cnt++; n/=10; }
    printf("%d digitos\n", cnt);
    return 0;
}
