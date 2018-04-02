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
    tFlat flats;
    tStudio studios;
    int opcaoItem, opcaoSubItem;
    char bairro[100], cidade[100];
    FILE *casa, *apartamento, *terreno, *flat, *studio;

    //Abrindo arquivo casa
    casa = fopen("banco/casa.dat", "a+b");

    if(casa == NULL){
        puts("ERRO! Arquivo casa não encontrado!");
        exit(0);
    }

    //Abrindo arquivo apartamento
    apartamento = fopen("banco/apartamento.dat", "a+b");

    if(apartamento == NULL){
        puts("ERRO! Arquivo apartamento não encontrado!");
        exit(0);
    }

    //Abrindo arquivo terreno
    terreno = fopen("banco/terreno.dat", "a+b");

    if(terreno == NULL){
        puts("ERRO! Arquivo flat não encontrado!");
        exit(0);
    }

    //Abrindo arquivo flat
    flat = fopen("banco/flat.dat", "a+b");

    if(flat == NULL){
        puts("ERRO! Arquivo não encontrado!");
        exit(0);
    }

    studio = fopen("banco/studio.dat", "a+b");

    if(studio == NULL){
        puts("ERRO! Arquivo studio não encontrado!");
        exit(0);
    }


    //Iniciando programa
    while(1){
        //limpaTela();
        ExibeMenuItem();
        printf("Escolha uma opcao: ");
        scanf("%d", &opcaoItem);
        printf("Opcao: %d\n", opcaoItem);


        switch(opcaoItem){
            case 1:
                //Função cadastro
                while(1){
                    limpaTela();
                    ExibeMenuSubItem1();
                    printf("Escolha uma opcao: ");
                    scanf("%d", &opcaoSubItem);

                    if(opcaoSubItem == 6){
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
                        case 4:
                            CadastraFlat(flats, flat);
                            break;
                        case 5:
                            CadastraStudio(studios, studio);
                        default:
                            printf("Opcao invalida.\n");
                    }
                }
                break;

            case 2:
                //Imprime imóveis disponíveis
                //limpaTela();

                while(1){
                    limpaTela();
                    ExibeMenuSubItem2();
                    printf("Escolha uma opcao: ");
                    scanf("%d", &opcaoSubItem);

                    if(opcaoSubItem == 3){
                        break;
                    }

                    switch(opcaoSubItem){
                        case 1:
                            ImoveisDisponiveis(casas, apartamentos, terrenos, flats, studios, casa,
                                               apartamento, terreno, flat, studio);
                        break;

                        case 2:
                            while(1){
                                ExibeMenuSubSubItem2();
                                printf("Escolha uma opcao: ");
                                scanf("%d", &opcaoSubItem);
                                printf("Digite o nome da cidade em que deseja procurar o imoveis dispoiveis: \n");
                                fgets(cidade, 100, stdin);
                                cidade[strlen(cidade) -1] = '\0';

                                if(opcaoSubItem == 6){
                                    break;
                                }

                                switch(opcaoSubItem){
                                    case 1:
                                        CasasDisponiveisCidade(casas, casa, cidade);
                                        break;
                                    case 2:
                                        ApartamentosDisponiveisCidade(apartamentos, apartamento, cidade);
                                        break;
                                    case 3:
                                        TerrenosDisponiveisCidade(terrenos, terreno, cidade);
                                        break;
                                    case 4:
                                        FlatsDisponiveisCidade(flats, flat, cidade);
                                        break;
                                    case 5:
                                        StudiosDisponiveisCidade(studios, studio, cidade);
                                        break;
                                    default:
                                        printf("Opcao invalida!\n");
                                }
                            }       
                    }
                }
                break;

            case 3:
                limpaTela();
                DescricaoImoveisDisponiveis(casas, apartamentos, terrenos, flats, studios, casa,
                                            apartamento, terreno, flat, studio);
                break;
        	
        	case 4:
                //Função imoveis disponiveis para venda por tipo
                while(1){
                    limpaTela();
                    ExibeMenuSubItem4();
                    printf("Escolha uma opcao: ");
                    scanf("%d", &opcaoSubItem);

                    if(opcaoSubItem == 6){
                        limpaTela();
                        break;
                    }

                    switch(opcaoSubItem){
                        case 1:
                            CasasDisponiveisVenda(casas, casa);
                            break;
                        case 2:
                            ApartamentosDisponiveisVenda(apartamentos, apartamento);
                            break;
                        case 3:
                            TerrenosDisponiveisVenda(terrenos, terreno);
                            break;
                        case 4:
                            FlatsDisponiveisVenda(flats, flat);
                            break;
                        case 5:
                            StudiosDisponiveisVenda(studios, studio);
                            break;
                        default:
                            printf("Opcao invalida.\n");
                    }
                }
                break;

            case 5:
            //Função imoveis disponiveis para alugar por bairro
                while(1){
                    limpaTela();
                    ExibeMenuSubSubItem5();
                    printf("Escolha uma opcao: ");
                    scanf("%d", &opcaoSubItem);

                    if(opcaoSubItem == 3){
                        limpaTela();
                        break;
                    }

                    switch(opcaoSubItem){
                        case 1:
                            while(1){
                                limpaTela();
                                ExibeMenuSubItem5();
                                printf("Escolha uma opcao: ");
                                scanf("%d", &opcaoSubItem);

                                if(opcaoSubItem == 6){
                                    limpaTela();
                                    break;
                                }

                                switch(opcaoSubItem){
                                    case 1:
                                        CasasDisponiveisAlugar(casas, casa);
                                        break;
                                    case 2:
                                        ApartamentosDisponiveisAlugar(apartamentos, apartamento);
                                        break;
                                    case 3:
                                        TerrenosDisponiveisAlugar(terrenos, terreno);
                                        break;
                                    case 4:
                                        FlatsDisponiveisAlugar(flats, flat);
                                        break;
                                    case 5:
                                        StudiosDisponiveisAlugar(studios, studio);
                                    default:
                                        printf("Opcao invalida.\n");
                                        break;
                                }
                            }
                            break;
                        case 2:
                            //Por bairro
                            ApartamentosDisponiveisAlugar(apartamentos, apartamento);
                            break;
                        default:
                            printf("Opcao invalida.\n");
                            break;
                    }
                }
                break;

            case 6:
                break;

            default:
                printf("Opcao invalida\n");
        }

    }

    fclose(casa);
    fclose(apartamento);
    fclose(terreno);
    fclose(flat);
    fclose(studio);

    return 0;
}
