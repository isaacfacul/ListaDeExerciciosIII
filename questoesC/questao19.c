#include <stdio.h>
#include <ctype.h>

int main(){
    char s[1000];
    if(scanf("%999s", s)!=1) return 0;
    int cnt=0;
    for(int i=0;s[i];i++) if(tolower((unsigned char)s[i])=='a') cnt++;
    printf("%d\n", cnt);
    return 0;
}
