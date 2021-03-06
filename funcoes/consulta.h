#ifndef CONSULTA_H
#define CONSULTA_H

void ImprimeCasa(tCasa casas, FILE *imoveis, int count){

    rewind(imoveis);

   while(1){
        fseek(imoveis, count, SEEK_SET);
        fread(&casas, 1, sizeof(tCasa), imoveis);

        printf("Casa:\n");
        printf("\tEndereco: %s\n", casas.dados.endereco);
        printf("\tNumero: %d\n", casas.dados.numero);
        printf("\tBairro: %s\n", casas.dados.bairro);
        printf("\tCep: %s\n", casas.dados.cep);
        printf("\tCidade: %s\n", casas.dados.cidade);
        printf("\tValor: %lf\n", casas.dados.valor);
        if(casas.dados.disponivelAluVen == 'A' || casas.dados.disponivelAluVen == 'a'){
            printf("\tCasa disponivel para aluguel\n");
        }else if(casas.dados.disponivelAluVen == 'V' || casas.dados.disponivelAluVen == 'v'){
            printf("\tCasa disponivel para venda\n");
        }else if(casas.dados.disponivelAluVen == 'N' || casas.dados.disponivelAluVen == 'n'){
            printf("\tCasa não disponivel para venda ou aluguel\n");
        }

        break;
   }
}



void ImprimeDescricaoCasa(tCasa casas, FILE *imoveis){
        while(1){
                fread(&casas, 1, sizeof(tCasa),imoveis);
                if(feof(imoveis)) break;
                printf("\n\tDetalhes da casa:\n");
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
        printf("\tBairro: %s\n", apartamentos.dado.bairro);
        printf("\tCep: %s\n", apartamentos.dado.cep);
        printf("\tCidade: %s\n", apartamentos.dado.cidade);
        printf("\tValor: %lf\n", apartamentos.dado.valor);
         printf("%c\n", apartamentos.dado.disponivelAluVen);
        if(apartamentos.dado.disponivelAluVen == 'A'|| apartamentos.dado.disponivelAluVen == 'a'){
            printf("\tApartamento disponivel para aluguel\n");
        }else if (apartamentos.dado.disponivelAluVen == 'V' || apartamentos.dado.disponivelAluVen == 'v'){
            printf("\tApartamento disponivel para venda\n");
        }else{
            printf("\tApartamento  não disponivel para venda ou aluguel\n");
        }
    }
}


void ImprimeDescricaoApartamento(tApartamento apartamentos, FILE *imoveis){
        while(1){
                fread(&apartamentos, 1, sizeof(tApartamento),imoveis);
                if(feof(imoveis)) break;
                printf("\n\tDetalhes do apartamento:\n");
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
        printf("\tBairro: %s\n", terrenos.dadoo.bairro);
        printf("\tCep: %s\n", terrenos.dadoo.cep);
        printf("\tCidade: %s\n", terrenos.dadoo.cidade);
        printf("\tValor: %lf\n", terrenos.dadoo.valor);
        if(terrenos.dadoo.disponivelAluVen == 'A' || terrenos.dadoo.disponivelAluVen == 'a'){
            printf("\tTerreno disponivel para aluguel\n");
        }else  if(terrenos.dadoo.disponivelAluVen == 'V' || terrenos.dadoo.disponivelAluVen == 'v'){
            printf("\tTerreno disponivel para venda\n");
        }else{
            printf("\tTerreno não disponivel para venda ou aluguel\n");
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

void ImprimeFlat(tFlat flats, FILE *imoveis){
    while(1){
        fread(&flats, 1, sizeof(tFlat), imoveis);

        if(feof(imoveis)) break;

        printf("Flat:\n");
        printf("\tEndereco: %s\n", flats.dado.endereco);
        printf("\tNumero: %d\n", flats.dado.numero);
        printf("\tBairro: %s\n", flats.dado.bairro);
        printf("\tCep: %s\n", flats.dado.cep);
        printf("\tCidade: %s\n", flats.dado.cidade);
        printf("\tValor: %lf\n", flats.dado.valor);
        if(flats.dado.disponivelAluVen == 'A'|| flats.dado.disponivelAluVen == 'a'){
            printf("\tFlat disponivel para aluguel\n");
        }else if (flats.dado.disponivelAluVen == 'V' || flats.dado.disponivelAluVen == 'v'){
            printf("\tFlat disponivel para venda\n");
        }else{
            printf("\tFlat não disponivel para venda ou aluguel\n");
        }
    }
}

void ImprimeDescricaoFlat(tFlat flats, FILE *imoveis){
    while(1){
        fread(&flats, 1, sizeof(tFlat), imoveis);

        if(feof(imoveis)) break;

        printf("Descricao do flat:\n");
        printf("Area: %lf\n", flats.areaFlat);
        printf("Valor do condominio: %lf", flats.valorCondominio);
        if(flats.arCondicionado == 'S'|| flats.arCondicionado == 's'){
            printf("\tAr condicionado: Possui\n");
        }else{
            printf("Ar condicionado: Nao possui\n");
        }
        if(flats.internet == 'S'|| flats.internet == 's'){
            printf("\tInternet: Possui\n");
        }else{
            printf("\tInternet: Nao possui\n");
        }
        if(flats.tvACabo == 'S'|| flats.tvACabo == 's'){
            printf("\tTV a cabo: Possui\n");
        }else{
            printf("\tTV a cabo: Nao possui\n");
        }
        if(flats.lavanderia == 'S'|| flats.lavanderia == 's'){
            printf("\tLavanderia: Possui\n");
        }else{
            printf("\tLavanderia: Nao possui\n");
        }
        if(flats.limpeza == 'S'|| flats.limpeza == 's'){
            printf("\tArrumacao/Limpeza: Possui\n");
        }else{
            printf("\tArrumacao/Limpeza: Nao possui\n");
        }
        if(flats.recepcao24 == 'S'|| flats.recepcao24 == 's'){
            printf("\tRecepcao 24 horas: Possui\n");
        }else{
            printf("\tRecepcao 24 horas: Nao possui\n");
        }
    }
}

void ImprimeStudio(tStudio studios, FILE *imoveis){
    while(1){
        fread(&studios, 1, sizeof(tStudio), imoveis);

        if(feof(imoveis)) break;

        printf("Studio:\n");
        printf("\tEndereco: %s\n", studios.dado.endereco);
        printf("\tNumero: %d\n", studios.dado.numero);
        printf("\tBairro: %s\n", studios.dado.bairro);
        printf("\tCep: %s\n", studios.dado.cep);
        printf("\tCidade: %s\n", studios.dado.cidade);
        printf("\tValor: %lf\n", studios.dado.valor);
        if(studios.dado.disponivelAluVen == 'A'|| studios.dado.disponivelAluVen == 'a'){
            printf("\tStudio disponivel para aluguel\n");
        }else if (studios.dado.disponivelAluVen == 'V' || studios.dado.disponivelAluVen == 'v'){
            printf("\tStudio disponivel para venda\n");
        }else{
            printf("\tStudio não disponivel para venda ou aluguel\n");
        }
    }
}

void ImprimeDescricaoStudio(tStudio studios, FILE *imoveis){
    while(1){
        fread(&studios, 1, sizeof(tStudio), imoveis);

        if(feof(imoveis)) break;

        printf("Descricao do studio:\n");
        printf("Area: %lf\n", studios.areaFlat);
        printf("Valor do condominio: %lf", studios.valorCondominio);
        if(studios.arCondicionado == 'S'|| studios.arCondicionado == 's'){
            printf("\tAr condicionado: Possui\n");
        }else{
            printf("Ar condicionado: Nao possui\n");
        }
        if(studios.internet == 'S'|| studios.internet == 's'){
            printf("\tInternet: Possui\n");
        }else{
            printf("\tInternet: Nao possui\n");
        }
        if(studios.tvACabo == 'S'|| studios.tvACabo == 's'){
            printf("\tTV a cabo: Possui\n");
        }else{
            printf("\tTV a cabo: Nao possui\n");
        }
        if(studios.lavanderia == 'S'|| studios.lavanderia == 's'){
            printf("\tLavanderia: Possui\n");
        }else{
            printf("\tLavanderia: Nao possui\n");
        }
        if(studios.limpeza == 'S'|| studios.limpeza == 's'){
            printf("\tArrumacao/Limpeza: Possui\n");
        }else{
            printf("\tArrumacao/Limpeza: Nao possui\n");
        }
        if(studios.recepcao24 == 'S'|| studios.recepcao24 == 's'){
            printf("\tRecepcao 24 horas: Possui\n");
        }else{
            printf("\tRecepcao 24 horas: Nao possui\n");
        }
        if(studios.piscina == 'S'|| studios.piscina == 's'){
            printf("\tPiscina: Possui\n");
        }else{
            printf("\tPiscina: Nao possui\n");
        }
        if(studios.sauna == 'S'|| studios.sauna == 's'){
            printf("\tSauna: Possui\n");
        }else{
            printf("\tSauna: Nao possui\n");
        }
        if(studios.salaGinastica == 'S'|| studios.salaGinastica == 's'){
            printf("\tSala de ginastica: Possui\n");
        }else{
            printf("\tSala de ginastica: Nao possui\n");
        }
    }
}

//imoveis diponiveis

void ImoveisDisponiveis(tCasa casas, tApartamento apartamentos, tTerreno terrenos, tFlat flats,
                        tStudio studios, FILE *casa, FILE *apartamento, FILE *terreno, FILE *flat,
                        FILE *studio){
    int count = 0;
        rewind(casa);
        while(1){
                //count++;
                fread(&casas, 1, sizeof(tCasa),casa);
                if(feof(casa)) break;
                if(casas.dados.disponivelAluVen != 'N' && casas.dados.disponivelAluVen != 'n'){
                    ImprimeCasa(casas, casa, count);
                    count = count + sizeof(tCasa);
                    fseek(casa, count, SEEK_SET);
                }
        }

        count = 0;
        rewind(apartamento);
        while(1){
                fread(&apartamentos, 1, sizeof(tApartamento),apartamento);
                if(feof(apartamento)) break;
                if(apartamentos.dado.disponivelAluVen != 'N' || apartamentos.dado.disponivelAluVen != 'n'){
                    ImprimeApartamento(apartamentos, apartamento);
                }
        }

        rewind(terreno);
        while(1){
                fread(&terrenos, 1, sizeof(tTerreno),terreno);
                if(feof(terreno)) break;
                if(terrenos.dadoo.disponivelAluVen == 'N' || terrenos.dadoo.disponivelAluVen == 'n'){
                        ImprimeTerreno(terrenos, terreno);
                }
        }

        rewind(flat);
        while(1){
                fread(&flats, 1, sizeof(tFlat),flat);
                if(feof(flat)) break;
                if(flats.dado.disponivelAluVen != 'N' || flats.dado.disponivelAluVen != 'n'){
                        ImprimeFlat(flats,flat);
                }
        }

        rewind(studio);
        while(1){
                fread(&studios, 1, sizeof(tStudio),studio);
                if(feof(studio)) break;
                if(studios.dado.disponivelAluVen != 'N' || studios.dado.disponivelAluVen != 'n'){
                        ImprimeStudio(studios, studio);
                }
        }
}

void DescricaoImoveisDisponiveis(tCasa casas, tApartamento apartamentos, tTerreno terrenos, tFlat flats,
                        tStudio studios, FILE *casa, FILE *apartamento, FILE *terreno, FILE *flat,
                        FILE *studio){
        rewind(casa);
        while(1){
                fread(&casas, 1, sizeof(tCasa),casa);
                if(feof(casa)) break;
                if(casas.dados.disponivelAluVen != 'N' || casas.dados.disponivelAluVen != 'n'){
                        ImprimeCasa(casas, casa, 0);
                        ImprimeDescricaoCasa(casas, casa);
                }
        }

        rewind(apartamento);
        while(1){
                fread(&apartamentos, 1, sizeof(tApartamento),apartamento);
                if(feof(apartamento)) break;
                if(apartamentos.dado.disponivelAluVen != 'N' || apartamentos.dado.disponivelAluVen != 'n'){
                        ImprimeApartamento(apartamentos, apartamento);
                        ImprimeDescricaoApartamento(apartamentos, apartamento);
                }
        }

        rewind(terreno);
        while(1){
                fread(&terrenos, 1, sizeof(tTerreno),terreno);
                if(feof(terreno)) break;
                if(terrenos.dadoo.disponivelAluVen != 'N' || terrenos.dadoo.disponivelAluVen != 'n'){
                        ImprimeTerreno(terrenos, terreno);
                        ImprimeDescricaoTerreno(terrenos, terreno);
                }
        }

        rewind(flat);
        while(1){
                fread(&flats, 1, sizeof(tFlat),flat);
                if(feof(flat)) break;
                if(flats.dado.disponivelAluVen != 'N' || flats.dado.disponivelAluVen != 'n'){
                        ImprimeFlat(flats, flat);
                        ImprimeDescricaoFlat(flats, flat);
                }
        }

        rewind(studio);
        while(1){
                fread(&studios, 1, sizeof(tStudio),studio);
                if(feof(studio)) break;
                if(studios.dado.disponivelAluVen != 'N' || studios.dado.disponivelAluVen != 'n'){
                        ImprimeStudio(studios, studio);
                        ImprimeDescricaoStudio(studios, studio);
                }
        }
}


// Consulta de casas diponveis para alugar e vender

void CasasDisponiveisVenda(tCasa casas, FILE *imoveis){
        rewind(imoveis);
        while(1){
                fread(&casas, 1, sizeof(tCasa),imoveis);
                if(feof(imoveis)) break;
                if(casas.dados.disponivelAluVen == 'V' || casas.dados.disponivelAluVen == 'v'){
                        ImprimeCasa(casas, imoveis, 0);
                        ImprimeDescricaoCasa(casas, imoveis);
                }
        }
}

void CasasDisponiveisAlugar(tCasa casas, FILE *imoveis){
        rewind(imoveis);
        while(1){
                fread(&casas, 1, sizeof(tCasa),imoveis);
                if(feof(imoveis)) break;
                if(casas.dados.disponivelAluVen == 'A' || casas.dados.disponivelAluVen == 'a'){
                        ImprimeCasa(casas, imoveis, 0);
                        ImprimeDescricaoCasa(casas, imoveis);
                }
        }
}



// Consulta de apartamentos diponveis para alugar e vender


void ApartamentosDisponiveisVenda(tApartamento apartamentos, FILE *imoveis){
        rewind(imoveis);
        while(1){
                fread(&apartamentos, 1, sizeof(tApartamento),imoveis);
                if(feof(imoveis)) break;
                if(apartamentos.dado.disponivelAluVen == 'V' || apartamentos.dado.disponivelAluVen == 'v'){
                        ImprimeApartamento(apartamentos, imoveis);
                        ImprimeDescricaoApartamento(apartamentos, imoveis);
                }
        }
}


void ApartamentosDisponiveisAlugar(tApartamento apartamentos, FILE *imoveis){
        rewind(imoveis);
        while(1){
                fread(&apartamentos, 1, sizeof(tApartamento),imoveis);
                if(feof(imoveis)) break;
  	              if(apartamentos.dado.disponivelAluVen == 'A' || apartamentos.dado.disponivelAluVen == 'a'){
                        ImprimeApartamento(apartamentos, imoveis);
                        ImprimeDescricaoApartamento(apartamentos, imoveis);
                }
        }
}


// Consulta de Terrenos diponveis para alugar e vender


void TerrenosDisponiveisVenda(tTerreno terrenos, FILE *imoveis){
        rewind(imoveis);
        while(1){
                fread(&terrenos, 1, sizeof(tTerreno),imoveis);
                if(feof(imoveis)) break;
                if(terrenos.dadoo.disponivelAluVen == 'V' || terrenos.dadoo.disponivelAluVen == 'v'){
                        ImprimeTerreno(terrenos, imoveis);
                        ImprimeDescricaoTerreno(terrenos,imoveis);
                }
        }
}

void TerrenosDisponiveisAlugar(tTerreno terrenos, FILE *imoveis){
        rewind(imoveis);
        while(1){
                fread(&terrenos, 1, sizeof(tTerreno),imoveis);
                if(feof(imoveis)) break;
                if(terrenos.dadoo.disponivelAluVen == 'A' || terrenos.dadoo.disponivelAluVen == 'a'){
                        ImprimeTerreno(terrenos, imoveis);
                        ImprimeDescricaoTerreno(terrenos,imoveis);
                }
        }
}

void FlatsDisponiveisVenda(tFlat flats, FILE *imoveis){
        rewind(imoveis);
        while(1){
                fread(&flats, 1, sizeof(tFlat),imoveis);
                if(feof(imoveis)) break;
                if(flats.dado.disponivelAluVen == 'V' || flats.dado.disponivelAluVen == 'v'){
                        ImprimeFlat(flats, imoveis);
                        ImprimeDescricaoFlat(flats, imoveis);
                }
        }
}

void FlatsDisponiveisAlugar(tFlat flats, FILE *imoveis){
        rewind(imoveis);
        while(1){
                fread(&flats, 1, sizeof(tFlat),imoveis);
                if(feof(imoveis)) break;
                if(flats.dado.disponivelAluVen == 'A' || flats.dado.disponivelAluVen == 'a'){
                        ImprimeFlat(flats, imoveis);
                        ImprimeDescricaoFlat(flats,imoveis);
                }
        }
}

void StudiosDisponiveisVenda(tStudio studios, FILE *imoveis){
        rewind(imoveis);
        while(1){
                fread(&studios, 1, sizeof(tStudio),imoveis);
                if(feof(imoveis)) break;
                if(studios.dado.disponivelAluVen == 'V' || studios.dado.disponivelAluVen == 'v'){
                        ImprimeStudio(studios, imoveis);
                        ImprimeDescricaoStudio(studios,imoveis);
                }
        }
}

void StudiosDisponiveisAlugar(tStudio studios, FILE *imoveis){
        rewind(imoveis);
        while(1){
                fread(&studios, 1, sizeof(tStudio),imoveis);
                if(feof(imoveis)) break;
                if(studios.dado.disponivelAluVen == 'A' || studios.dado.disponivelAluVen == 'a'){
                        ImprimeStudio(studios, imoveis);
                        ImprimeDescricaoStudio(studios,imoveis);
                }
        }
}

// Consulta de casas diponveis para alugar e vender por bairro

void CasasDisponiveisVendaBairro(tCasa casas, FILE *imoveis, const char *bairro){
        rewind(imoveis);
        while(1){
                fread(&casas, 1, sizeof(tCasa),imoveis);
                if(feof(imoveis)) break;
                if((casas.dados.disponivelAluVen == 'V' || casas.dados.disponivelAluVen == 'v') && !strcmp(casas.dados.bairro, bairro)){
                        ImprimeCasa(casas, imoveis, 0);
                        ImprimeDescricaoCasa(casas, imoveis);
                }
        }
}

void CasasDisponiveisAlugarBairro(tCasa casas, FILE *imoveis, const char *bairro){
        rewind(imoveis);
        while(1){
                fread(&casas, 1, sizeof(tCasa),imoveis);
                if(feof(imoveis)) break;
                if((casas.dados.disponivelAluVen == 'A' || casas.dados.disponivelAluVen == 'a') && !strcmp(casas.dados.bairro, bairro)){
                        ImprimeCasa(casas, imoveis, 0);
                        ImprimeDescricaoCasa(casas, imoveis);
                }
        }
}



// Consulta de apartamentos diponveis para alugar e vender por bairro


void ApartamentosDisponiveisVendaBairro(tApartamento apartamentos, FILE *imoveis, const char *bairro){
        rewind(imoveis);
        while(1){
                fread(&apartamentos, 1, sizeof(tApartamento),imoveis);
                if(feof(imoveis)) break;
                if((apartamentos.dado.disponivelAluVen == 'V' || apartamentos.dado.disponivelAluVen == 'v') && !strcmp(apartamentos.dado.bairro, bairro)){
                        ImprimeApartamento(apartamentos, imoveis);
                        ImprimeDescricaoApartamento(apartamentos, imoveis);
                }
        }
}


void ApartamentosDisponiveisAlugarBairro(tApartamento apartamentos, FILE *imoveis, const char *bairro){
        rewind(imoveis);
        while(1){
                fread(&apartamentos, 1, sizeof(tApartamento),imoveis);
                if(feof(imoveis)) break;
                  if((apartamentos.dado.disponivelAluVen == 'A' || apartamentos.dado.disponivelAluVen == 'a')  && !strcmp(apartamentos.dado.bairro, bairro)){
                        ImprimeApartamento(apartamentos, imoveis);
                        ImprimeDescricaoApartamento(apartamentos, imoveis);
                }
        }
}


// Consulta de Terrenos diponveis para alugar e vender bairro


void TerrenosDisponiveisVendaBairro(tTerreno terrenos, FILE *imoveis, const char *bairro){
        rewind(imoveis);
        while(1){
                fread(&terrenos, 1, sizeof(tTerreno),imoveis);
                if(feof(imoveis)) break;
                if((terrenos.dadoo.disponivelAluVen == 'V' || terrenos.dadoo.disponivelAluVen == 'v') && !strcmp(terrenos.dadoo.bairro, bairro)){
                        ImprimeTerreno(terrenos, imoveis);
                        ImprimeDescricaoTerreno(terrenos,imoveis);
                }
        }
}

void TerrenosDisponiveisAlugarBairro(tTerreno terrenos, FILE *imoveis, const char *bairro){
        rewind(imoveis);
        while(1){
                fread(&terrenos, 1, sizeof(tTerreno),imoveis);
                if(feof(imoveis)) break;
                if((terrenos.dadoo.disponivelAluVen == 'A' || terrenos.dadoo.disponivelAluVen == 'a') && !strcmp(terrenos.dadoo.bairro, bairro)){
                        ImprimeTerreno(terrenos, imoveis);
                        ImprimeDescricaoTerreno(terrenos,imoveis);
                }
        }
}

void FlatsDisponiveisVendaBairro(tFlat flats, FILE *imoveis, const char *bairro){
        rewind(imoveis);
        while(1){
                fread(&flats, 1, sizeof(tFlat),imoveis);
                if(feof(imoveis)) break;
                if((flats.dado.disponivelAluVen == 'V' || flats.dado.disponivelAluVen == 'v') && !strcmp(flats.dado.bairro, bairro)){
                        ImprimeFlat(flats, imoveis);
                        ImprimeDescricaoFlat(flats, imoveis);
                }
        }
}

void FlatsDisponiveisAlugarBairro(tFlat flats, FILE *imoveis, const char *bairro){
        rewind(imoveis);
        while(1){
                fread(&flats, 1, sizeof(tFlat),imoveis);
                if(feof(imoveis)) break;
                if((flats.dado.disponivelAluVen == 'A' || flats.dado.disponivelAluVen == 'a') && !strcmp(flats.dado.bairro, bairro)){
                        ImprimeFlat(flats, imoveis);
                        ImprimeDescricaoFlat(flats,imoveis);
                }
        }
}

void StudiosDisponiveisVendaBairro(tStudio studios, FILE *imoveis, const char *bairro){
        rewind(imoveis);
        while(1){
                fread(&studios, 1, sizeof(tStudio),imoveis);
                if(feof(imoveis)) break;
                if((studios.dado.disponivelAluVen == 'V' || studios.dado.disponivelAluVen == 'v') && !strcmp(studios.dado.bairro, bairro)){
                        ImprimeStudio(studios, imoveis);
                        ImprimeDescricaoStudio(studios,imoveis);
                }
        }
}

void StudiosDisponiveisAlugarBairro(tStudio studios, FILE *imoveis, const char *bairro){
        rewind(imoveis);
        while(1){
                fread(&studios, 1, sizeof(tStudio),imoveis);
                if(feof(imoveis)) break;
                if((studios.dado.disponivelAluVen == 'A' || studios.dado.disponivelAluVen == 'a') && !strcmp(studios.dado.bairro, bairro)){
                        ImprimeStudio(studios, imoveis);
                        ImprimeDescricaoStudio(studios,imoveis);
                }
        }
}

// Consulta de casas diponveis para alugar e vender por bairro

void CasasDisponiveisCidade(tCasa casas, FILE *imoveis, const char *cidade){
        rewind(imoveis);
        while(1){
                fread(&casas, 1, sizeof(tCasa),imoveis);
                if(feof(imoveis)) break;
                if((casas.dados.disponivelAluVen != 'N' || casas.dados.disponivelAluVen != 'n') && !strcmp(casas.dados.cidade, cidade)){
                        ImprimeCasa(casas, imoveis, 0);
                        ImprimeDescricaoCasa(casas, imoveis);
                }
        }
}

// Consulta de apartamentos diponveis para alugar e vender por bairro


void ApartamentosDisponiveisCidade(tApartamento apartamentos, FILE *imoveis, const char *cidade){
        rewind(imoveis);
        while(1){
                fread(&apartamentos, 1, sizeof(tApartamento),imoveis);
                if(feof(imoveis)) break;
                if((apartamentos.dado.disponivelAluVen != 'N' || apartamentos.dado.disponivelAluVen != 'n') && !strcmp(apartamentos.dado.cidade, cidade)){
                        ImprimeApartamento(apartamentos, imoveis);
                        ImprimeDescricaoApartamento(apartamentos, imoveis);
                }
        }
}

// Consulta de Terrenos diponiveis bairro


void TerrenosDisponiveisCidade(tTerreno terrenos, FILE *imoveis, const char *cidade){
        rewind(imoveis);
        while(1){
                fread(&terrenos, 1, sizeof(tTerreno),imoveis);
                if(feof(imoveis)) break;
                if((terrenos.dadoo.disponivelAluVen != 'N' || terrenos.dadoo.disponivelAluVen != 'n') && !strcmp(terrenos.dadoo.cidade, cidade)){
                        ImprimeTerreno(terrenos, imoveis);
                        ImprimeDescricaoTerreno(terrenos,imoveis);
                }
        }
}

// Consulta de Flats diponiveis bairro

void FlatsDisponiveisCidade(tFlat flats, FILE *imoveis, const char *cidade){
        rewind(imoveis);
        while(1){
                fread(&flats, 1, sizeof(tFlat),imoveis);
                if(feof(imoveis)) break;
                if((flats.dado.disponivelAluVen != 'N' || flats.dado.disponivelAluVen != 'n') && !strcmp(flats.dado.cidade, cidade)){
                        ImprimeFlat(flats, imoveis);
                        ImprimeDescricaoFlat(flats, imoveis);
                }
        }
}

// Consulta de Sttudios diponiveis bairro

void StudiosDisponiveisCidade(tStudio studios, FILE *imoveis, const char *cidade){
        rewind(imoveis);
        while(1){
                fread(&studios, 1, sizeof(tStudio),imoveis);
                if(feof(imoveis)) break;
                if((studios.dado.disponivelAluVen != 'N' || studios.dado.disponivelAluVen != 'n') && !strcmp(studios.dado.cidade, cidade)){
                        ImprimeStudio(studios, imoveis);
                        ImprimeDescricaoStudio(studios,imoveis);
                }
        }
}

#endif
