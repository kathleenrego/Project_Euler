#include <stdio.h>

int main(){
    int i, j, posicao = 0, contaPrimo;

    for(i = 2; posicao < 10001; i++){
        contaPrimo = 0;
        for(j = 2; j <= i; j++){
            if(i%j == 0){
                contaPrimo++;
            }
        }
        if(contaPrimo == 1){
            posicao++;
        }
    }
    printf("O primo da posicao %d eh %d\n", posicao, i-1);

    return 0;
}
