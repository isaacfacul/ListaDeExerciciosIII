#include <stdio.h>

int main(){
    long long n;
    if(scanf("%lld",&n)!=1) return 0;
    long long sign = n<0 ? -1 : 1;
    if(n<0) n = -n;
    long long rev=0;
    while(n>0){
        rev = rev*10 + (n%10);
        n /= 10;
    }
    rev *= sign;
    printf("%lld\n", rev);
    return 0;
}
