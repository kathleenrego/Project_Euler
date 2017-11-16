#include <stdio.h>

int main(){
    int i, j, contaPrimo;
    long long int soma = 2;

    for(i = 3; i < 2000000; i = i+2){
        contaPrimo = 0;
        for(j = 3; j < i && contaPrimo < 1; j = j+2){
            if(i%j == 0){
                contaPrimo++;
            }
        }
        if(contaPrimo == 0){
            soma += i;
            printf("%d\n", i);
        }
    }

    printf("A soma dos primos menores que 2.000.000 eh %lli\n", soma);

    return 0;
}
