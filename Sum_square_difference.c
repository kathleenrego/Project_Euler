#include <stdio.h>

int main(){
    int i;
    int soma1 = 0, soma2 = 0;

    for(i = 1; i <= 100; i++){
        soma1 += i*i;
        soma2 += i;
    }
    soma2 *= soma2;

    printf("Soma1 = %d\n", soma1);
    printf("Soma2 = %d\n", soma2);
    printf("Diferenca = %d\n", soma2-soma1);


    return 0;
}
