#include "includes.h"

int main(void){
    tCasa casas[100];
    tApartamento apartamentos[100];
    tTerreno terrenos[100];
    tImovel imovel[100];
    int opcaoItem, opcaoSubItem;

    imovel[0].numero = 10;
    printf("%d \n\n", imovel[0].numero);

    while(1){
        ExibeMenuItem();
        printf("Escolha uma opção:" );
        scanf("%d", &opcaoItem);

        switch(opcaoItem){
            case 1:
                while(1){
                    ExibeMenuSubItem1();
                    printf("Escolha uma opcao: ");
                    scanf("%d", &opcaoSubItem);
                        switch(opcaoSubItem){
                            case 1:
                                CadastraCasa(casas);
                                break;
                            case 2:
                                CadastraApartamento(apartamentos);
                                break;
                            case 3:
                                CadastraTerreno(terrenos);
                        }
                }
            //case 2:
        }
    }
    CadastraCasa(casas);

    return 0;
}
