#include <stdio.h>

int main(){
    int m[4][4];
    for(int i=0;i<4;i++) for(int j=0;j<4;j++) if(scanf("%d",&m[i][j])!=1) return 0;
    for(int i=0;i<4;i++){
        int mx = m[i][0];
        for(int j=1;j<4;j++) if(m[i][j]>mx) mx = m[i][j];
        printf("Linha %d: %d\n", i, mx);
    }
    return 0;
}
