#include "includes.h"

void ImprimeCasa(tCasa *casas, int i){
    printf("Casa %d:\n", i);
    printf("\tEndereco: %s\n", casas[i].dados.endereco);
    printf("\tNumero: %d\n", casas[i].dados.numero);
    printf("\tBairro %s\n", casas[i].dados.bairro);
    printf("\tCep: %s\n", casas[i].dados.cep);
    printf("\tCidade: %s\n", casas[i].dados.cidade);
    printf("\tValor: %lf\n", casas[i].dados.valor);
    if(casas[i].dados.disponivelAluVen == 'A'){
        printf("\tCasa disponivel para aluguel\n");
    }else{
        printf("Casa disponivel para venda\n");
    }
}

void ImprimeDescricaoCasa(tCasa *casas, int i){
    printf("\n\tDetalhes da casa %d\n", i);
    printf("\t%d\n", casas[i].numPavimentos);
    printf("\t%d\n", casas[i].numQuartos);
    printf("\t%lf\n", casas[i].areaTerreno);
    printf("\t%lf\n", casas[i].areaConstruida);
}


void ImoveisDisponiveis(tCasa *casas, tApartamento *apartamentos, tTerreno *terrenos){
    int i;

    for(i=0; i<100; i++){
        if(casas[i].dados.disponivelAluVen != 'N' ||casas[i].dados.disponivelAluVen != 'n'){
            printf("Casa %d disponivel.\n", i);
        }
    }

}


int main(void){
    tCasa casas[100];
    tApartamento apartamentos[100];
    tTerreno terrenos[100];
    int opcaoItem, opcaoSubItem;


    while(1){
        ExibeMenuItem();
        printf("Escolha uma opção: ");
        scanf("%d", &opcaoItem);

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
