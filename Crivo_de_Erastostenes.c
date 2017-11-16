#include <stdio.h>

#define n 1001

int main(){
    int array[n];
    int i, j, tmp;

    for (i = 0; i < n; i++) {
        array[i] = i;
    }

    printf("1");
    for (i = 2; i < n; i++) {
        if (array[i] != 0) {
            printf(", %d", array[i]);
            for (j = i+i; j < n; j=j+i) { //Marca com '0' os multiplos
                array[j] = 0;
            }
        }
    }
    printf("\n");

    return 0;
}
