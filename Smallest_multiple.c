#include <stdio.h>

int main(){
    long int i, j, num = 0;
    int conta;

    for(i = 2520; num == 0; i++){
        conta = 0;
        for(j = 1; j <= 20; j++){
            if(i%j == 0){
                conta++;
            }
        }
        if(conta == 20){
            num = i;
        }
    }

    printf("%ld\n", num); //232792560

    return 0;
}
