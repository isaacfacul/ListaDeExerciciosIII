#include <stdio.h>

int main(){
    int m[3][3];
    for(int i=0;i<3;i++) for(int j=0;j<3;j++) if(scanf("%d",&m[i][j])!=1) return 0;
    int s = m[0][0]+m[0][1]+m[0][2];
    int ok = 1;
    for(int i=1;i<3;i++){
        int ss = m[i][0]+m[i][1]+m[i][2];
        if(ss!=s) ok=0;
    }
    for(int j=0;j<3 && ok;j++){
        int ss = m[0][j]+m[1][j]+m[2][j];
        if(ss!=s) ok=0;
    }
    if(ok){
        int d1 = m[0][0]+m[1][1]+m[2][2];
        int d2 = m[0][2]+m[1][1]+m[2][0];
        if(d1!=s || d2!=s) ok=0;
    }
    printf("%s\n", ok ? "SIM" : "NAO");
    return 0;
}
