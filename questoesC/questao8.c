#include <stdio.h>

int main(){
    int v[10];
    for(int i=0;i<10;i++) if(scanf("%d",&v[i])!=1) return 0;
    int imax=0, imin=0;
    for(int i=1;i<10;i++){
        if(v[i]>v[imax]) imax=i;
        if(v[i]<v[imin]) imin=i;
    }
    printf("Maior: %d (pos %d)\nMenor: %d (pos %d)\n", v[imax], imax, v[imin], imin);
    return 0;
}
