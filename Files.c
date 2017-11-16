#include <stdio.h>

int main(){
    FILE *arq;

    arq = fopen("C:/Users/jeffi.DESKTOP-JSMDF1J/Desktop/texto.txt", "w");

    fprintf(arq, "Jefferson Henrique Silva\n");

    fclose(arq);

    /*Funcoes:
     * fopen("Endereco do arquivo", "modo de abertura");
     * Ex.: fopen("C:/usuarios/teste.txt", "w"); ("w") - Write
    */
    return 0;
}
