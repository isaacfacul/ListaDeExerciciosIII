#include <stdio.h>

int main(){
    int m[5][5] = {0};
    int c = 2;
    for(int i=0;i<5;i++){ m[c][i]=1; m[i][c]=1; }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++) printf("%d ", m[i][j]);
        printf("\n");
    }
    return 0;
}
