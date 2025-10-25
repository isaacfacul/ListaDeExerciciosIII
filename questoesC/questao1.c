#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    char s[256];
    if(scanf("%255s", s)!=1) return 0;
    int vog=0, con=0;
    for(int i=0;s[i];i++){
        char c = tolower((unsigned char)s[i]);
        if(!isalpha((unsigned char)c)) continue;
        if(strchr("aeiou", c)) vog++;
        else con++;
    }
    printf("Vogais: %d\nConsoantes: %d\n", vog, con);
    return 0;
} 
