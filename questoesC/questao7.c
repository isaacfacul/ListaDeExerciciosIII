#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int n=50;
    int v[50];
    int out[50], k=0;
    srand((unsigned)time(NULL));
    for(int i=0;i<n;i++) v[i] = rand()%100;
    for(int i=0;i<n;i++){
        int exists=0;
        for(int j=0;j<k;j++) if(out[j]==v[i]){ exists=1; break; }
        if(!exists) out[k++]=v[i];
    }
    for(int i=0;i<k;i++) printf("%d ", out[i]);
    printf("\n");
    return 0;
}
