#include <stdio.h>

int main(){
    int m[3][3];
    for(int i=0;i<3;i++) for(int j=0;j<3;j++) if(scanf("%d",&m[i][j])!=1) return 0;
    int linha=0, maior = m[0][0]+m[0][1]+m[0][2];
    for(int i=1;i<3;i++){
        int s = m[i][0]+m[i][1]+m[i][2];
        if(s>maior){ maior=s; linha=i; }
    }
    printf("Linha %d soma %d\n", linha, maior);
    return 0;
}
