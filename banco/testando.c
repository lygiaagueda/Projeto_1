#include <stdio.h>
#include "../estruturas/estruturas.h"

int main(void){
    FILE *arquivo;
    tCasa casas;

    arquivo = fopen("imoveis.dat", "rb");

    while(1){
        fread(&casas, 1, sizeof(tCasa), arquivo);

        if(feof(arquivo)) break;

        printf("%d\n", casas.dados.numero);
    }

    fclose(arquivo);

    return 0;
}
