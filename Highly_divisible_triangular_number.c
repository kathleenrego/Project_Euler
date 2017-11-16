#include <stdio.h>

int main(){
    int i, j, contaDivisor, num = 68427451;

    for(i = 11698; contaDivisor <= 500; i++){
        num += i;
        contaDivisor = 0;
        printf("%d ---- %d,\n", i, num);
        for(j = 1; j <= num; j++){
            if(num%j == 0){
                contaDivisor++;
            }
        }
        if(contaDivisor >= 200){
            printf("%d divisores,\n", contaDivisor);
        }
    }

    if(contaDivisor > 500){
        printf("o numero que tem %d divisores eh %d\n", contaDivisor, num);
    }

    return 0;
}
