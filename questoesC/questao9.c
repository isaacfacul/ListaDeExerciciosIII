#include <stdio.h>

int main(){
    int v[8];
    for(int i=0;i<8;i++) if(scanf("%d",&v[i])!=1) return 0;
    for(int i=0;i<7;i++)
        for(int j=i+1;j<8;j++)
            if(v[j]>v[i]){ int t=v[i]; v[i]=v[j]; v[j]=t; }
    for(int i=0;i<8;i++) printf("%d ", v[i]);
    printf("\n");
    return 0;
}
