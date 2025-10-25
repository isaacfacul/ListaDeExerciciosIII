#include <stdio.h>

int main(){
    int v[10];
    for(int i=0;i<10;i++) if(scanf("%d",&v[i])!=1) return 0;
    int seen[10] = {0};
    for(int i=0;i<10;i++){
        if(seen[i]) continue;
        int cnt=1;
        for(int j=i+1;j<10;j++) if(v[j]==v[i]){ cnt++; seen[j]=1; }
        printf("%d apareceu %d vezes\n", v[i], cnt);
    }
    return 0;
}
