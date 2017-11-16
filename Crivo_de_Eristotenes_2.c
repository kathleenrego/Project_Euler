#include <stdio.h>

#define LINHAS   8
#define COLUNAS  6

int main(){
    int i, j, k, l, casou;
    int A[LINHAS][COLUNAS] = {0, 1, 0, 0, 1, 0,
                              0, 0, 0, 1, 1, 1,
                              0, 1, 0, 0, 1, 0,
                              1, 1, 1, 0, 0, 0,
                              0, 1, 0, 1, 0, 0,
                              0, 0, 1, 1, 1, 0,
                              0, 1, 0, 1, 0, 0,
                              0, 0, 0, 1, 0, 0};

    int B[3][3] = {0, 1, 0,
                   1, 1, 1,
                   0, 1, 0};

    int C[LINHAS][COLUNAS];

    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            C[i][j] = 0;
        }
    }

    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("%d, ", A[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for (i = 0; i <= 5; i++) {
        for (j = 0; j <= 3; j++) {
            casou = 1;
            for (k = 0; k <= 2 && casou == 1; k++) {
                for (l = 0; l <= 2 && casou == 1; l++) {
                    if(A[i+k][j+l] != B[k][l]){
                        casou = 0;
                    }
                }
            }
            if(casou == 1){
                C[i+1][j+1] = 1;
            }
        }
    }

    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("%d, ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
