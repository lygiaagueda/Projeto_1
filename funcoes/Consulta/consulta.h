#ifndef CONSULTA_H
#define CONSULTA_H

void ImprimeCasa(tCasa casas, FILE *imoveis){

    while(1){
        fread(&casas, 1, sizeof(tCasa), imoveis);

        if(feof(imoveis)) break;

        printf("Casa:\n");
        printf("\tEndereco: %s\n", casas.dados.endereco);
        printf("\tNumero: %d\n", casas.dados.numero);
        printf("\tBairro %s\n", casas.dados.bairro);
        printf("\tCep: %s\n", casas.dados.cep);
        printf("\tCidade: %s\n", casas.dados.cidade);
        printf("\tValor: %lf\n", casas.dados.valor);
        if(casas.dados.disponivelAluVen == 'A'){
            printf("\tCasa disponivel para aluguel\n");
        }else{
            printf("Casa disponivel para venda\n");
        }
    }    
}
/*
void ImprimeDescricaoCasa(tCasa *casas, int i){
    printf("\n\tDetalhes da casa %d\n", i);
    printf("\t%d\n", casas.numPavimentos);
    printf("\t%d\n", casas.numQuartos);
    printf("\t%lf\n", casas.areaTerreno);
    printf("\t%lf\n", casas.areaConstruida);
}


void ImoveisDisponiveis(tCasa *casas, tApartamento *apartamentos, tTerreno *terrenos){
    int i;

    for(i=0; i<100; i++){
        if(casas[i].dados.disponivelAluVen != 'N' ||casas[i].dados.disponivelAluVen != 'n'){
            printf("Casa %d disponivel.\n", i);
        }
    }

}*/

#endif
