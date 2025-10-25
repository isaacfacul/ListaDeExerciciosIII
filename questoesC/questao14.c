#include <stdio.h>

int main(){
    int m[4][4];
    for(int i=0;i<4;i++) for(int j=0;j<4;j++) if(scanf("%d",&m[i][j])!=1) return 0;
    int soma=0;
    for(int i=0;i<4;i++) soma += m[i][i];
    printf("%d\n", soma);
    return 0;
}
