#include <stdio.h>

int main(){
    int v[10];
    for(int i=0;i<10;i++) if(scanf("%d",&v[i])!=1) return 0;
    for(int i=0;i<10;i++){
        int cnt=0;
        for(int j=0;j<10;j++) if(v[i]==v[j]) cnt++;
        if(cnt==1) printf("%d ", v[i]);
    }
    printf("\n");
    return 0;
}