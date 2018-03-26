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



void ImprimeDescricaoCasa(tCasa casas, FILE *imoveis){
        while(1){
                fread(&casas, 1, sizeof(tCasa),imoveis);
                if(feof(imoveis)) break;
                printf("\n\tDetalhes da casa %d\n");
                printf("\t%d\n", casas.numPavimentos);
                printf("\t%d\n", casas.numQuartos);
                printf("\t%lf\n", casas.areaTerreno);
                printf("\t%lf\n", casas.areaConstruida);
       }
}





void ImprimeApartamento(tApartamento apartamentos, FILE *imoveis){

    while(1){
        fread(&apartamentos, 1, sizeof(tApartamento), imoveis);

        if(feof(imoveis)) break;

        printf("Apartamento:\n");
        printf("\tEndereco: %s\n", apartamentos.dado.endereco);
        printf("\tNumero: %d\n", apartamentos.dado.numero);
        printf("\tBairro %s\n", apartamentos.dado.bairro);
        printf("\tCep: %s\n", apartamentos.dado.cep);
        printf("\tCidade: %s\n", apartamentos.dado.cidade);
        printf("\tValor: %lf\n", apartamentos.dado.valor);
        if(apartamentos.dado.disponivelAluVen == 'A'){
            printf("\tapartamento disponivel para aluguel\n");
        }else{
            printf("Apartamento disponivel para venda\n");
        }
    }    
}


void ImprimeDescricaoApartamento(tApartamento apartamentos, FILE *imoveis){
        while(1){
                fread(&apartamentos, 1, sizeof(tApartamento),imoveis);
                if(feof(imoveis)) break;
                printf("\n\tDetalhes do apartamento %d\n");
                printf("\t%lf\n", apartamentos.area);
                printf("\t%d\n", apartamentos.numQuartos);
                printf("\t%s\n", apartamentos.posicao);
                printf("\t%lf\n", apartamentos.condominio);
                printf("\t%d\n", apartamentos.vagasGaragem);
       }
}



void ImprimeTerreno(tTerreno terrenos, FILE *imoveis){

    while(1){
        fread(&terrenos, 1, sizeof(tTerreno), imoveis);

        if(feof(imoveis)) break;

        printf("Terreno:\n");
        printf("\tEndereco: %s\n", terrenos.dadoo.endereco);
        printf("\tNumero: %d\n", terrenos.dadoo.numero);
        printf("\tBairro %s\n", terrenos.dadoo.bairro);
        printf("\tCep: %s\n", terrenos.dadoo.cep);
        printf("\tCidade: %s\n", terrenos.dadoo.cidade);
        printf("\tValor: %lf\n", terrenos.dadoo.valor);
        if(terrenos.dadoo.disponivelAluVen == 'A'){
            printf("\tterreno disponivel para aluguel\n");
        }else{
            printf("terreno disponivel para venda\n");
        }
    }    
}


//

void ImprimeDescricaoTerreno(tTerreno terrenos, FILE *imoveis){
        while(1){
                fread(&terrenos, 1, sizeof(tTerreno),imoveis);
                if(feof(imoveis)) break;
                printf("\n\tDetalhes do terreno\n");
                printf("\t%lf\n", terrenos.area);
       }
}


//imoveis diponiveis

void ImoveisDisponiveis(tCasa *casas, tApartamento *apartamentos, tTerreno *terrenos, FILE *imoveis){
        while(1){
                fread(&casas, 1, sizeof(tCasa),imoveis);
                if(feof(imoveis)) break;
                if(casas.dados.disponivelAluVen != 'N' || casas.dados.disponivelAluVen != 'n'){
                        printf("Casa disponivel.\n");
                }
        }
        rewind(imoveis);
        while(1){
                fread(&apartamentos, 1, sizeof(tApartamento),imoveis);
                if(feof(imoveis)) break;
                if(apartamentos.dado.disponivelAluVen != 'N' || apartamentos.dado.disponivelAluVen != 'n'){
                        printf("Apartamento disponivel.\n");
                }
        }
        rewind(imoveis);
        while(1){
                fread(&terrenos, 1, sizeof(tTerreno),imoveis);
                if(feof(imoveis)) break;
                if(terrenos.dadoo.disponivelAluVen != 'N' || terrenos.dadoo.disponivelAluVen != 'n'){
                        printf("Terreno disponivel.\n");
                }
        }
}



// Consulta de casas diponveis para alugar e vender

void CasasDisponiveisVenda(tCasa *casas, FILE *imoveis){
        rewind(imoveis);
        while(1){
                fread(&casas, 1, sizeof(tCasa),imoveis);
                if(feof(imoveis)) break;
                if(casas.dados.disponivelAluVen != 'V' || casas.dados.disponivelAluVen != 'v'){
                        ImprimeCasa(casas, imoveis);
                        ImprimeDescricaoCasa(casas, imoveis);
                }
        }
}

void CasasDisponiveisAlugar(tCasa *casas, FILE *imoveis){
        rewind(imoveis);
        while(1){
                fread(&casas, 1, sizeof(tCasa),imoveis);
                if(feof(imoveis)) break;
                if(casas.dados.disponivelAluVen != 'A' || casas.dados.disponivelAluVen != 'a'){
                        ImprimeCasa(casas, imoveis);
                        ImprimeDescricaoCasa(casas, imoveis);
                }
        }
}



// Consulta de apartamentos diponveis para alugar e vender


void ApartamentosDisponiveisVenda(tApartamento *apartamentos, FILE *imoveis){
        rewind(imoveis);
        while(1){
                fread(&apartamentos, 1, sizeof(tApartamento),imoveis);
                if(feof(imoveis)) break;
                if(apartamentos.dado.disponivelAluVen != 'V' || apartamentos.dado.disponivelAluVen != 'v'){
                        ImprimeApartamento(apartamentos, imoveis);
                        ImprimeDescricaoApartamento(apartamentos, imoveis);
                }
        }
} 


void ApartamentosDisponiveisAlugar(tApartamento *apartamentos, FILE *imoveis){
        rewind(imoveis);
        while(1){
                fread(&apartamentos, 1, sizeof(tApartamento),imoveis);
                if(feof(imoveis)) break;
  	              if(apartamentos.dado.disponivelAluVen != 'A' || apartamentos.dado.disponivelAluVen != 'a'){
                        ImprimeApartamento(apartamentos, imoveis);
                        ImprimeDescricaoApartamento(apartamentos, imoveis);
                }
        }
} 


// Consulta de Terrenos diponveis para alugar e vender


void TerrenosDisponiveisVenda(tTerreno *terrenos, FILE *imoveis){
        rewind(imoveis);
        while(1){
                fread(&terrenos, 1, sizeof(tTerreno),imoveis);
                if(feof(imoveis)) break;
                if(terrenos.dadoo.disponivelAluVen != 'V' || terrenos.dadoo.disponivelAluVen != 'v'){
                        ImprimeTerreno(terrenos, imoveis);
                        ImprimeDescricaoTerreno(terrenos,imoveis);
                }
        }
}

void TerrenosDisponiveisAlugar(tTerreno *terrenos, FILE *imoveis){
        rewind(imoveis);
        while(1){
                fread(&terrenos, 1, sizeof(tTerreno),imoveis);
                if(feof(imoveis)) break;
                if(terrenos.dadoo.disponivelAluVen != 'A' || terrenos.dadoo.disponivelAluVen != 'a'){
                        ImprimeTerreno(terrenos, imoveis);
                        ImprimeDescricaoTerreno(terrenos,imoveis);
                }
        }
}


#endif
