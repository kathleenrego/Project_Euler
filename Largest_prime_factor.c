#include <stdio.h>

int main(){
    long long int i, j, primo = 0;
    short int contaPrimo;

    for(i = 2; i < 600851475143; i++){
        contaPrimo = 0;
        for(j = 2; j <= i; j++){
            if(i%j == 0){
                contaPrimo++;
            }
        }
        if(contaPrimo == 1){
            if(600851475143%i == 0){
                if(i > primo){
                    primo = i;
                    printf("%lli eh primo\n", primo);
                }
            }
        }
    }
    printf("Terminou\n");
    printf("%lli eh o maior primo\n", primo);

    return 0;
}
