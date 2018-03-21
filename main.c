/*
------------------------------------------------
    Universidade Federal da Paraíba - UFPB
                Campus IV

    Cadeira: linguagem de programação I
    Professor: Tiago Maritan
    Alunos: Cláudio Brito, Lenildo Luan,
            Lygia Águeda e Renato "sobrenome"

        Projeto I - Cadastro de Imóveis
------------------------------------------------
*/

#include "includes.h"

int main(void){
    tCasa casas[100];
    tApartamento apartamentos[100];
    tTerreno terrenos[100];
    int opcaoItem, opcaoSubItem;

    while(1){
        ExibeMenuItem();
        printf("Escolha uma opcao: ");
        scanf("%d", &opcaoItem);
        limpaTela();

        switch(opcaoItem){
            case 1:
                while(1){
                    ExibeMenuSubItem1();
                    printf("Escolha uma opcao: ");
                    scanf("%d", &opcaoSubItem);

                    if(opcaoSubItem == 4){
                        break;
                    }

                    switch(opcaoSubItem){
                        case 1:
                            CadastraCasa(casas);
                            break;
                        case 2:
                            CadastraApartamento(apartamentos);
                            break;
                        case 3:
                            CadastraTerreno(terrenos);
                            break;
                        default:
                            printf("Opcao invalida.\n");
                    }

                }
            //case 2:
        }

    }

    return 0;
}
