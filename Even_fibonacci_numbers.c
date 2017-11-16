#include <stdio.h>

int main(){
    int tmp, soma = 0, num1 = 1, num2 = 2;

    while(num2 <= 4000000){
        if(num2%2 == 0){
            soma += num2;
        }

        tmp = num1;
        num1 = num2;
        num2 = tmp + num2;
    }

    printf("%d\n", soma);
    return 0;
}
