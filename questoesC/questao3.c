#include <stdio.h>
#include <stdlib.h>

int main(){
    int N;
    if(scanf("%d",&N)!=1 || N<=0) return 0;
    int *v = malloc(N * sizeof(int));
    int somaP=0, somaI=0;
    for(int i=0;i<N;i++){
        scanf("%d",&v[i]);
        if(v[i]%2==0) somaP += v[i];
        else somaI += v[i];
    }
    for(int i=0;i<N;i++) printf("%d ", v[i]);
    printf("\nSoma pares: %d\nSoma impares: %d\n", somaP, somaI);
    free(v);
    return 0;
}
