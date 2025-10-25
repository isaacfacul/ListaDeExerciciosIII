#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char s[1000];
    if(scanf("%999s", s)!=1) return 0;
    int i=0, j=strlen(s)-1, ok=1;
    while(i<j){
        if(tolower((unsigned char)s[i]) != tolower((unsigned char)s[j])){ ok=0; break; }
        i++; j--;
    }
    printf("%s\n", ok ? "SIM" : "NAO");
    return 0;
}
