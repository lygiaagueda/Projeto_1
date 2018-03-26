/*
------------------------------------------------
    Universidade Federal da Paraíba - UFPB
                Campus IV

    Cadeira: linguagem de programação I
    Professor: Tiago Maritan
    Alunos: Cláudio Brito, Lenildo Luan,
            Lygia Águeda e Renato dos Santos

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
    FILE *casa, *apartamento, *terreno;

    //Abrindo arquivo
    casa = fopen("banco/casa.dat", "a+b");

    if(casa == NULL){
        puts("ERRO! Arquivo não encontrado!");
        exit(0);
    }

    //Abrindo arquivo
    apartamento = fopen("banco/apartamento.dat", "a+b");

    if(apartamento == NULL){
        puts("ERRO! Arquivo não encontrado!");
        exit(0);
    }

    //Abrindo arquivo
    terreno = fopen("banco/terreno.dat", "a+b");

    if(terreno == NULL){
        puts("ERRO! Arquivo não encontrado!");
        exit(0);
    }

    //Iniciando programa
    while(1){
        ExibeMenuItem();
        printf("Escolha uma opcao: ");
        scanf("%d", &opcaoItem);
        printf("Opcao: %d\n", opcaoItem);


        switch(opcaoItem){
            case 1:
                while(1){
                    limpaTela();
                    ExibeMenuSubItem1();
                    printf("Escolha uma opcao: ");
                    scanf("%d", &opcaoSubItem);

                    if(opcaoSubItem == 4){
                        limpaTela();
                        break;
                    }

                    switch(opcaoSubItem){
                        case 1:
                            CadastraCasa(casas, casa);
                            break;
                        case 2:
                            CadastraApartamento(apartamentos, apartamento);
                            break;
                        case 3:
                            CadastraTerreno(terrenos, terreno);
                            break;
                        default:
                            printf("Opcao invalida.\n");
                    }
                }
                break;
            case 2: 
                limpaTela();
                rewind(casa);
                rewind(apartamento);
                rewind(terreno);
                //ImoveisDisponiveis();
                break;

            case 3:
            break;
        	
        	case 4:
            break;

            case 5:
            break;

            case 6:
            
            break;

            default:

            break;
        }

    }

    fclose(casa);
    fclose(apartamento);
    fclose(terreno);

    return 0;
}
