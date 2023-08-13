#include <stdio.h>

int main(){

    int n, i;

    printf("Informe um numero: \n");
    scanf("%d", &n);

    if(n <= 1){
        printf("Informe um numero maior que 1");
    }else{
        for(i=2; i<n; i++){
            if(n%i==0){
                printf("Esse numero nao e primo");
                break;
            }
        }
        if(i==n){
            printf("Esse numero e primo");
        }
    }
}