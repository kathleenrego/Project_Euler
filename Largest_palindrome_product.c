//Codigo para calcular o maior produto de dois numeros de 3 digitos que seja polindromo (lido da mesma maneira de frente-trás e trás-frente)
#include <stdio.h>
#include <string.h>

int main(){
    int i, j, k, comp = 1, tamanho;
    int product = 1345;
    char numchar[10];
    char inverso[10];

    for(i = 999; i > 100 && comp != 0; i--){ //Gera numeros de 3 digitos
        for(j = 999; j > 100 && comp != 0; j--){ //Gera numeros de 3 digitos
            product = i*j;
            sprintf(numchar, "%d", product); //Escreve o que estah na variavel 'product' em 'numchar'
            tamanho = strlen(numchar);
            printf("%dX%d = %d   tamanho: %d   ", i, j, i*j, tamanho);

            for(k = 0; k <= tamanho; k++){//Zera o array 'inverso'
                inverso[k] = 0;
            }

            for(k = 0; k < tamanho; k++){//Inverte o array 'numchar' em 'inverso'
                inverso[k] = numchar[tamanho-1-k];
            }

            //puts(numchar);
            //puts(inverso);
            comp = strcmp(numchar, inverso);//Compara as duas strings e retorna '0' caso sejam iguais
            printf("comp = %d\n", comp);
            if(comp == 0){ //Se 'comp = 0', o numero eh polindromo
                printf("%dX%d = %d\n", i, j, i*j);
                puts(numchar);
                puts(inverso);
            }
        }
    }

    return 0;
}
