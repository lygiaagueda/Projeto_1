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
    //Define variáveis
    tCasa casas;
    tApartamento apartamentos;
    tTerreno terrenos;
    int opcaoItem, opcaoSubItem;
    FILE *imoveis;

    //Abrindo arquivo
    imoveis = fopen("banco/imoveis.dat", "ab");

    if(imoveis == NULL){
        puts("ERRO! Arquivo não encontrado!");
        exit(0);
    }

    //Iniciando programa
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
                            CadastraCasa(casas, imoveis);
                            break;
                        case 2:
                            CadastraApartamento(apartamentos, imoveis);
                            break;
                        case 3:
                            CadastraTerreno(terrenos, imoveis);
                            break;
                        default:
                            printf("Opcao invalida.\n");
                    }

                }
            //case 2:
        }

    }

    fclose(imoveis);

    return 0;
}
