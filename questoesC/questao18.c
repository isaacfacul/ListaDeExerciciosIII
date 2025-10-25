#include <stdio.h>
#include <string.h>

int main(){
    char a[256], b[256];
    if(scanf("%255s", a)!=1) return 0;
    if(scanf("%255s", b)!=1) return 0;
    if(strcmp(a,b)==0) printf("Iguais\n");
    else printf("Diferentes\n");
    return 0;
}
