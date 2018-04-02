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
    int opcaoItem, opcaoSubItem, sair = 1;
    char bairro[100], cidade[100];
    FILE *casa, *apartamento, *terreno, *flat, *studio;

    //Abrindo arquivo casa
    casa = fopen("banco/casa.dat", "a+b");

    if(casa == NULL){
        puts("ERRO! Arquivo casa nao encontrado!");
        exit(0);
    }

    //Abrindo arquivo apartamento
    apartamento = fopen("banco/apartamento.dat", "a+b");

    if(apartamento == NULL){
        puts("ERRO! Arquivo apartamento nao encontrado!");
        exit(0);
    }

    //Abrindo arquivo terreno
    terreno = fopen("banco/terreno.dat", "a+b");

    if(terreno == NULL){
        puts("ERRO! Arquivo flat nao encontrado!");
        exit(0);
    }

    //Abrindo arquivo flat
    flat = fopen("banco/flat.dat", "a+b");

    if(flat == NULL){
        puts("ERRO! Arquivo nao encontrado!");
        exit(0);
    }

    studio = fopen("banco/studio.dat", "a+b");

    if(studio == NULL){
        puts("ERRO! Arquivo studio nao encontrado!");
        exit(0);
    }


    //Iniciando programa
    while(1){
        limpaTela();
        ExibeMenuItem();
        printf("Escolha uma opcao: ");
        scanf("%d", &opcaoItem);
        printf("Opcao: %d\n", opcaoItem);

        if(opcaoItem == 6){
            break;
        }


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
                            while(sair){
                                if(sair == 1) {
                                    printf("\nLista de imoveis disponiveis\n\n");
                                    ImoveisDisponiveis(
                                        casas, apartamentos, terrenos, flats, studios, casa,
                                        apartamento, terreno, flat, studio
                                    );

                                    printf("\n Digite 0 para sair: ");
                                }
                                scanf("%d", &sair);
                            }
                            sair = 1;
                        break;

                        case 2:
                            while(1){
                                limpaTela();
                                ExibeMenuSubSubItem2();
                                printf("Escolha uma opcao: ");
                                scanf("%d", &opcaoSubItem);

                                if(opcaoSubItem == 6){
                                    break;
                                }

                                printf("Digite o nome da cidade em que deseja procurar o imoveis dispoiveis: ");
                                limpaB();
                                fgets(cidade, 100, stdin);
                                cidade[strlen(cidade) -1] = '\0';

                                switch(opcaoSubItem){
                                    case 1:
                                        while(sair){
                                            if(sair == 1) {
                                                printf("\nLista de casas dispoiveis por cidade\n\n");
                                                CasasDisponiveisCidade(casas, casa, cidade);
                                                printf("\n Digite 0 para sair: ");
                                            }
                                            scanf("%d", &sair);
                                        }
                                        sair = 1;
                                        break;
                                    case 2:
                                        while(sair){
                                            if(sair == 1) {
                                                printf("\nLista de apartamentos dispoiveis por cidade\n\n");
                                                ApartamentosDisponiveisCidade(apartamentos, apartamento, cidade);
                                                printf("\n Digite 0 para sair: ");
                                            }
                                            scanf("%d", &sair);
                                        }
                                        sair = 1;
                                        break;
                                    case 3:
                                        while(sair){
                                            if(sair == 1) {
                                                printf("\nLista de terrenos dispoiveis por cidade\n\n");
                                                TerrenosDisponiveisCidade(terrenos, terreno, cidade);
                                                printf("\n Digite 0 para sair: ");
                                            }
                                            scanf("%d", &sair);
                                        }
                                        sair = 1;
                                        break;
                                    case 4:
                                        while(sair){
                                            if(sair == 1) {
                                                printf("\nLista de flats dispoiveis por cidade\n\n");
                                                FlatsDisponiveisCidade(flats, flat, cidade);
                                                printf("\n Digite 0 para sair: ");
                                            }
                                            scanf("%d", &sair);
                                        }
                                        sair = 1;
                                        break;
                                    case 5:
                                     while(sair){
                                            if(sair == 1) {
                                                printf("\nLista de studios dispoiveis por cidade\n\n");
                                                StudiosDisponiveisCidade(studios, studio, cidade);;
                                                printf("\n Digite 0 para sair: ");
                                            }
                                            scanf("%d", &sair);
                                        }
                                        sair = 1;
                                        break;
                                    default:
                                        printf("Opcao invalida!\n");
                                }
                            }
                    }
                }
                break;

            case 3:
                while(sair){
                    if(sair == 1) {
                        printf("\nDescricao de imoveis\n\n");
                            DescricaoImoveisDisponiveis(casas, apartamentos, terrenos, flats, studios, casa,
                                            apartamento, terreno, flat, studio);

                        printf("\n Digite 0 para sair: ");
                    }
                    scanf("%d", &sair);
                }
                sair = 1;
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
                            while(sair){
                                if(sair == 1) {
                                    printf("\nCasas disponiveis para venda\n\n");
                                        CasasDisponiveisVenda(casas, casa);
                                    printf("\n Digite 0 para sair: ");
                                }
                                scanf("%d", &sair);
                            }
                            sair = 1;
                            break;
                        case 2:
                            while(sair){
                                if(sair == 1) {
                                    printf("\nApartamentos disponiveis para venda\n\n");
                                        ApartamentosDisponiveisVenda(apartamentos, apartamento);
                                    printf("\n Digite 0 para sair: ");
                                }
                                scanf("%d", &sair);
                            }
                            sair = 1;
                            break;
                        case 3:
                            while(sair){
                                if(sair == 1) {
                                    printf("\nTerrenos disponiveis para venda\n\n");
                                       TerrenosDisponiveisVenda(terrenos, terreno);
                                    printf("\n Digite 0 para sair: ");
                                }
                                scanf("%d", &sair);
                            }
                            sair = 1;
                            break;
                        case 4:
                            while(sair){
                                if(sair == 1) {
                                    printf("\nFlats disponiveis para venda\n\n");
                                       FlatsDisponiveisVenda(flats, flat);
                                    printf("\n Digite 0 para sair: ");
                                }
                                scanf("%d", &sair);
                            }
                            sair = 1;
                            break;
                        case 5:
                            while(sair){
                                if(sair == 1) {
                                    printf("\nStudios disponiveis para venda\n\n");
                                       StudiosDisponiveisVenda(studios, studio);
                                    printf("\n Digite 0 para sair: ");
                                }
                                scanf("%d", &sair);
                            }
                            sair = 1;
                            break;
                        default:
                            printf("Opcao invalida.\n");
                    }
                }
                break;

            case 5:
            //Função imoveis disponiveis para alugar
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
                                        while(sair){
                                            if(sair == 1) {
                                                printf("\nCasas disponiveis para alugar\n\n");
                                                   CasasDisponiveisAlugar(casas, casa);
                                                printf("\n Digite 0 para sair: ");
                                            }
                                            scanf("%d", &sair);
                                        }
                                        sair = 1;
                                        break;
                                    case 2:
                                        while(sair){
                                            if(sair == 1) {
                                                printf("\nApartamentos disponiveis para alugar\n\n");
                                                   ApartamentosDisponiveisAlugar(apartamentos, apartamento);
                                                printf("\n Digite 0 para sair: ");
                                            }
                                            scanf("%d", &sair);
                                        }
                                        sair = 1;
                                        break;
                                    case 3:
                                        while(sair){
                                            if(sair == 1) {
                                                printf("\nTerrenos disponiveis para alugar\n\n");
                                                   TerrenosDisponiveisAlugar(terrenos, terreno);
                                                printf("\n Digite 0 para sair: ");
                                            }
                                            scanf("%d", &sair);
                                        }
                                        sair = 1;
                                        break;
                                    case 4:
                                        while(sair){
                                            if(sair == 1) {
                                                printf("\nFlats disponiveis para alugar\n\n");
                                                   FlatsDisponiveisAlugar(flats, flat);
                                                printf("\n Digite 0 para sair: ");
                                            }
                                            scanf("%d", &sair);
                                        }
                                        sair = 1;
                                        break;
                                    case 5:
                                        while(sair){
                                            if(sair == 1) {
                                                printf("\nStudios disponiveis para alugar\n\n");
                                                   StudiosDisponiveisAlugar(studios, studio);
                                                printf("\n Digite 0 para sair: ");
                                            }
                                            scanf("%d", &sair);
                                        }
                                        sair = 1;
                                        break;
                                    default:
                                        printf("Opcao invalida.\n");
                                        break;
                                }
                            }
                            break;

                        case 2:
                            //Por bairro
                            printf("Digite o bairro desejado: ");
                            getchar();
                            fgets(bairro, 100, stdin);
                            bairro[strlen(bairro)-1] = '\0';
                            while(sair){
                                if(sair == 1) {
                                    printf("\nImoveis disponiveis por bairro: %s\n\n", bairro);
                                    CasasDisponiveisAlugarBairro(casas, casa, bairro);
                                    ApartamentosDisponiveisAlugarBairro(apartamentos, apartamento, bairro);
                                    TerrenosDisponiveisAlugarBairro(terrenos, terreno, bairro);
                                    FlatsDisponiveisAlugarBairro(flats, flat, bairro);
                                    StudiosDisponiveisAlugarBairro(studios, studio, bairro);
                                    printf("\n Digite 0 para sair: ");
                                }
                                scanf("%d", &sair);
                            }
                            sair = 1;
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
