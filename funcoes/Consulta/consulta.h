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
        printf("\tValor: R$ %.2lf\n", casas.dados.valor);
        if(casas.dados.disponivelAluVen == 'A' || casas.dados.disponivelAluVen == 'a'){
            printf("\tCasa disponivel para aluguel\n\n");
        }else if(casas.dados.disponivelAluVen == 'V' || casas.dados.disponivelAluVen == 'v'){
            printf("\tCasa disponivel para venda\n\n");
        }else if(casas.dados.disponivelAluVen == 'N' || casas.dados.disponivelAluVen == 'n'){
            printf("\tCasa nao disponivel para venda ou aluguel\n\n");
        }

        break;
   }
}



void ImprimeDescricaoCasa(tCasa casas, FILE *imoveis, int count){
	rewind(imoveis);
        while(1){
		fseek(imoveis, count, SEEK_SET);
                fread(&casas, 1, sizeof(tCasa),imoveis);
                
                printf("\n\tDetalhes da casa:\n");
                printf("\tNumero de pavimentos: %d\n", casas.numPavimentos);
                printf("\tNumero de quartos: %d\n", casas.numQuartos);
                printf("\tArea do terreno: %0.lf\n", casas.areaTerreno);
                printf("\tArea construida: %0.lf\n\n", casas.areaConstruida);

		break;
       }
}

void ImprimeApartamento(tApartamento apartamentos, FILE *imoveis, int count){
	rewind(imoveis);
    while(1){
    	fseek(imoveis, count, SEEK_SET);
        fread(&apartamentos, 1, sizeof(tApartamento), imoveis);

        printf("Apartamento:\n");
        printf("\tEndereco: %s\n", apartamentos.dado.endereco);
        printf("\tNumero: %d\n", apartamentos.dado.numero);
        printf("\tBairro: %s\n", apartamentos.dado.bairro);
        printf("\tCep: %s\n", apartamentos.dado.cep);
        printf("\tCidade: %s\n", apartamentos.dado.cidade);
        printf("\tValor: R$ %.2lf\n", apartamentos.dado.valor);
        if(apartamentos.dado.disponivelAluVen == 'A'|| apartamentos.dado.disponivelAluVen == 'a'){
            printf("\tApartamento disponivel para aluguel\n\n");
        }else if (apartamentos.dado.disponivelAluVen == 'V' || apartamentos.dado.disponivelAluVen == 'v'){
            printf("\tApartamento disponivel para venda\n\n");
        }else{
            printf("\tApartamento  nao disponivel para venda ou aluguel\n\n");
        }
        break;
    }
}


void ImprimeDescricaoApartamento(tApartamento apartamentos, FILE *imoveis, int count){
	rewind(imoveis);
        while(1){
		fseek(imoveis, count, SEEK_SET);
                fread(&apartamentos, 1, sizeof(tApartamento),imoveis);
               
                printf("\n\tDetalhes do apartamento:\n");
                printf("\tArea: %0.lf\n", apartamentos.area);
                printf("\tNumero de quartos: %d\n", apartamentos.numQuartos);
                printf("\tPosicao: %s\n", apartamentos.posicao);
                printf("\tCondominio: %0.lf\n", apartamentos.condominio);
                printf("\tNumero de vagas na garagem: %d\n\n", apartamentos.vagasGaragem);

		break;
       }
}



void ImprimeTerreno(tTerreno terrenos, FILE *imoveis, int count){
	rewind(imoveis);
    while(1){
    	fseek(imoveis, count, SEEK_SET);
        fread(&terrenos, 1, sizeof(tTerreno), imoveis);


        printf("Terreno:\n");
        printf("\tEndereco: %s\n", terrenos.dadoo.endereco);
        printf("\tNumero: %d\n", terrenos.dadoo.numero);
        printf("\tBairro: %s\n", terrenos.dadoo.bairro);
        printf("\tCep: %s\n", terrenos.dadoo.cep);
        printf("\tCidade: %s\n", terrenos.dadoo.cidade);
        printf("\tValor: R$ %.2lf\n", terrenos.dadoo.valor);
        if(terrenos.dadoo.disponivelAluVen == 'A' || terrenos.dadoo.disponivelAluVen == 'a'){
            printf("\tTerreno disponivel para aluguel\n\n");
        }else  if(terrenos.dadoo.disponivelAluVen == 'V' || terrenos.dadoo.disponivelAluVen == 'v'){
            printf("\tTerreno disponivel para venda\n\n");
        }else{
            printf("\tTerreno nao disponivel para venda ou aluguel\n\n");
        }
        break;
    }
}


//

void ImprimeDescricaoTerreno(tTerreno terrenos, FILE *imoveis, int count){
	rewind(imoveis);
        while(1){
		fseek(imoveis, count, SEEK_SET);
                fread(&terrenos, 1, sizeof(tTerreno),imoveis);
                
                printf("\n\tDetalhes do terreno\n");
                printf("\tArea: %0.lf\n\n", terrenos.area);
	
		break;
       }
}

void ImprimeFlat(tFlat flats, FILE *imoveis, int count){
	rewind(imoveis);
    while(1){
    	 fseek(imoveis, count, SEEK_SET);
        fread(&flats, 1, sizeof(tFlat), imoveis);


        printf("Flat:\n");
        printf("\tEndereco: %s\n", flats.dado.endereco);
        printf("\tNumero: %d\n", flats.dado.numero);
        printf("\tBairro: %s\n", flats.dado.bairro);
        printf("\tCep: %s\n", flats.dado.cep);
        printf("\tCidade: %s\n", flats.dado.cidade);
        printf("\tValor: %0.lf\n", flats.dado.valor);
        if(flats.dado.disponivelAluVen == 'A'|| flats.dado.disponivelAluVen == 'a'){
            printf("\tFlat disponivel para aluguel\n\n");
        }else if (flats.dado.disponivelAluVen == 'V' || flats.dado.disponivelAluVen == 'v'){
            printf("\tFlat disponivel para venda\n\n");
        }else{
            printf("\tFlat nao disponivel para venda ou aluguel\n\n");
        }
        break;
    }
}

void ImprimeDescricaoFlat(tFlat flats, FILE *imoveis, int count){
    rewind(imoveis);
    while(1){
	fseek(imoveis, count, SEEK_SET);
        fread(&flats, 1, sizeof(tFlat), imoveis);

        printf("\tDescricao do flat:\n");
        printf("\tArea: %.2lf\n", flats.areaFlat);
        printf("\tValor do condominio: R$ %.2lf\n", flats.valorCondominio);
        if(flats.arCondicionado == 'S'|| flats.arCondicionado == 's'){
            printf("\tAr condicionado: Possui\n");
        }else{
            printf("\tAr condicionado: Nao possui\n");
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
            printf("\tRecepcao 24 horas: Possui\n\n");
        }else{
            printf("\tRecepcao 24 horas: Nao possui\n\n");
        }
	
	break;
    }
}

void ImprimeStudio(tStudio studios, FILE *imoveis, int count){
	rewind(imoveis);
    while(1){
    	 fseek(imoveis, count, SEEK_SET);
        fread(&studios, 1, sizeof(tStudio), imoveis);

        printf("Studio:\n");
        printf("\tEndereco: %s\n", studios.dado.endereco);
        printf("\tNumero: %d\n", studios.dado.numero);
        printf("\tBairro: %s\n", studios.dado.bairro);
        printf("\tCep: %s\n", studios.dado.cep);
        printf("\tCidade: %s\n", studios.dado.cidade);
        printf("\tValor: R$ %.2lf\n", studios.dado.valor);
        if(studios.dado.disponivelAluVen == 'A'|| studios.dado.disponivelAluVen == 'a'){
            printf("\tStudio disponivel para aluguel\n\n");
        }else if (studios.dado.disponivelAluVen == 'V' || studios.dado.disponivelAluVen == 'v'){
            printf("\tStudio disponivel para venda\n\n");
        }else{
            printf("\tStudio nao disponivel para venda ou aluguel\n\n");
        }
        break;
    }
}

void ImprimeDescricaoStudio(tStudio studios, FILE *imoveis, int count){
	rewind(imoveis);
    while(1){
	fseek(imoveis, count, SEEK_SET);
        fread(&studios, 1, sizeof(tStudio), imoveis);

        printf("\tDescricao do studio:\n");
        printf("\tArea: %0.lf\n", studios.areaFlat);
        printf("\tValor do condominio: %0.lf\n", studios.valorCondominio);
        if(studios.arCondicionado == 'S'|| studios.arCondicionado == 's'){
            printf("\tAr condicionado: Possui\n");
        }else{
            printf("\tAr condicionado: Nao possui\n");
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
            printf("\tSala de ginastica: Possui\n\n");
        }else{
            printf("\tSala de ginastica: Nao possui\n\n");
        }

	break;
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
			printf("Teste %c\n", casas.dados.disponivelAluVen);
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
                if(apartamentos.dado.disponivelAluVen != 'N' && apartamentos.dado.disponivelAluVen != 'n'){
                    ImprimeApartamento(apartamentos, apartamento, count);
                    count = count + sizeof(tApartamento);
                    fseek(apartamento, count, SEEK_SET);
                }
        }
	
	count = 0;
        rewind(terreno);
        while(1){
                fread(&terrenos, 1, sizeof(tTerreno),terreno);
                if(feof(terreno)) break;
                if(terrenos.dadoo.disponivelAluVen == 'N' && terrenos.dadoo.disponivelAluVen == 'n'){
                    ImprimeTerreno(terrenos, terreno, count);
                    count = count + sizeof(tTerreno);
                    fseek(terreno, count, SEEK_SET);
                }
        }
		count = 0;
        rewind(flat);
        while(1){
                fread(&flats, 1, sizeof(tFlat),flat);
                if(feof(flat)) break;
                if(flats.dado.disponivelAluVen != 'N' && flats.dado.disponivelAluVen != 'n'){
                    ImprimeFlat(flats,flat,count);
                    count = count + sizeof(tFlat);
                    fseek(flat, count, SEEK_SET);    
                }
        }
		count = 0;
        rewind(studio);
        while(1){
                fread(&studios, 1, sizeof(tStudio),studio);
                if(feof(studio)) break;
                if(studios.dado.disponivelAluVen != 'N' && studios.dado.disponivelAluVen != 'n'){
                    ImprimeStudio(studios, studio,count);
                    count = count + sizeof(tStudio);
                    fseek(studio, count, SEEK_SET);
                }
        }
}

void DescricaoImoveisDisponiveis(tCasa casas, tApartamento apartamentos, tTerreno terrenos, tFlat flats,
                        tStudio studios, FILE *casa, FILE *apartamento, FILE *terreno, FILE *flat,
                        FILE *studio){
	int count = 0;
        rewind(casa);
        while(1){
                fread(&casas, 1, sizeof(tCasa),casa);
                if(feof(casa)) break;
                        ImprimeCasa(casas, casa, count);
                        ImprimeDescricaoCasa(casas, casa, count);
			count = count + sizeof(tCasa);
                    	fseek(casa, count, SEEK_SET);
        }

	count = 0;
        rewind(apartamento);
        while(1){
                fread(&apartamentos, 1, sizeof(tApartamento),apartamento);
                if(feof(apartamento)) break;
                        ImprimeApartamento(apartamentos, apartamento, count);
                        ImprimeDescricaoApartamento(apartamentos, apartamento, count);
			count = count + sizeof(tApartamento);
                    	fseek(apartamento, count, SEEK_SET);
        }

	count = 0;
        rewind(terreno);
        while(1){
                fread(&terrenos, 1, sizeof(tTerreno),terreno);
                if(feof(terreno)) break;
                        ImprimeTerreno(terrenos, terreno, count);
                        ImprimeDescricaoTerreno(terrenos, terreno, count);
			count = count + sizeof(tTerreno);
                    	fseek(terreno, count, SEEK_SET);
        }

	count = 0;
        rewind(flat);
        while(1){
                fread(&flats, 1, sizeof(tFlat),flat);
                if(feof(flat)) break;
                        ImprimeFlat(flats, flat, count);
                        ImprimeDescricaoFlat(flats, flat, count);
			count = count + sizeof(tFlat);
                    	fseek(flat, count, SEEK_SET);
        }

	count = 0;
        rewind(studio);
        while(1){
                fread(&studios, 1, sizeof(tStudio),studio);
                if(feof(studio)) break;
                        ImprimeStudio(studios, studio, count);
                        ImprimeDescricaoStudio(studios, studio, count);
			count = count + sizeof(tStudio);
                    	fseek(studio, count, SEEK_SET);
        }
}


// Consulta de casas diponveis para alugar e vender

void CasasDisponiveisVenda(tCasa casas, FILE *imoveis){
	int count = 0;
        rewind(imoveis);
        while(1){
                fread(&casas, 1, sizeof(tCasa),imoveis);
                if(feof(imoveis)) break;
                if(casas.dados.disponivelAluVen == 'V' || casas.dados.disponivelAluVen == 'v'){
                        ImprimeCasa(casas, imoveis, count);
                        ImprimeDescricaoCasa(casas, imoveis, count);
                        count = count + sizeof(tCasa);
                    	fseek(imoveis, count, SEEK_SET);
                }
        }
}

void CasasDisponiveisAlugar(tCasa casas, FILE *imoveis){
	int count = 0;
        rewind(imoveis);
        while(1){
                fread(&casas, 1, sizeof(tCasa),imoveis);
                if(feof(imoveis)) break;
                if(casas.dados.disponivelAluVen == 'A' || casas.dados.disponivelAluVen == 'a'){
                        printf("Teste %c\n", casas.dados.disponivelAluVen);
                        ImprimeCasa(casas, imoveis, count);
                        ImprimeDescricaoCasa(casas, imoveis,count);
                        count = count + sizeof(tCasa);
                    	fseek(imoveis, count, SEEK_SET);
                }
        }
}



// Consulta de apartamentos diponveis para alugar e vender


void ApartamentosDisponiveisVenda(tApartamento apartamentos, FILE *imoveis){
	int count = 0;
        rewind(imoveis);
        while(1){
                fread(&apartamentos, 1, sizeof(tApartamento),imoveis);
                if(feof(imoveis)) break;
                if(apartamentos.dado.disponivelAluVen == 'V' || apartamentos.dado.disponivelAluVen == 'v'){
                        ImprimeApartamento(apartamentos, imoveis, count);
                        ImprimeDescricaoApartamento(apartamentos, imoveis, count);
			count = count + sizeof(tApartamento);
                    	fseek(imoveis, count, SEEK_SET);
                }
        }
}


void ApartamentosDisponiveisAlugar(tApartamento apartamentos, FILE *imoveis){
	int count = 0;
        rewind(imoveis);
        while(1){
                fread(&apartamentos, 1, sizeof(tApartamento),imoveis);
                if(feof(imoveis)) break;
  	              if(apartamentos.dado.disponivelAluVen == 'A' || apartamentos.dado.disponivelAluVen == 'a'){
                        ImprimeApartamento(apartamentos, imoveis, count);
                        ImprimeDescricaoApartamento(apartamentos, imoveis, count);
			count = count + sizeof(tApartamento);
                   	fseek(imoveis, count, SEEK_SET);
                }
        }
}


// Consulta de Terrenos diponveis para alugar e vender


void TerrenosDisponiveisVenda(tTerreno terrenos, FILE *imoveis){
	int count = 0;
        rewind(imoveis);
        while(1){
                fread(&terrenos, 1, sizeof(tTerreno),imoveis);
                if(feof(imoveis)) break;
                if(terrenos.dadoo.disponivelAluVen == 'V' || terrenos.dadoo.disponivelAluVen == 'v'){
                        ImprimeTerreno(terrenos, imoveis, count);
                        ImprimeDescricaoTerreno(terrenos,imoveis, count);
			count = count + sizeof(tTerreno);
                    	fseek(imoveis, count, SEEK_SET);
                }
        }
}

void TerrenosDisponiveisAlugar(tTerreno terrenos, FILE *imoveis){
	int count = 0;
        rewind(imoveis);
        while(1){
                fread(&terrenos, 1, sizeof(tTerreno),imoveis);
                if(feof(imoveis)) break;
                if(terrenos.dadoo.disponivelAluVen == 'A' || terrenos.dadoo.disponivelAluVen == 'a'){
                        ImprimeTerreno(terrenos, imoveis, count);
                        ImprimeDescricaoTerreno(terrenos,imoveis, count);
			count = count + sizeof(tTerreno);
                    	fseek(imoveis, count, SEEK_SET);
                }
        }
}

void FlatsDisponiveisVenda(tFlat flats, FILE *imoveis){
	int count = 0;
        rewind(imoveis);
        while(1){
                fread(&flats, 1, sizeof(tFlat),imoveis);
                if(feof(imoveis)) break;
                if(flats.dado.disponivelAluVen == 'V' || flats.dado.disponivelAluVen == 'v'){
                        ImprimeFlat(flats, imoveis, count);
                        ImprimeDescricaoFlat(flats, imoveis, count);
			count = count + sizeof(tFlat);
                    	fseek(imoveis, count, SEEK_SET);
                }
        }
}

void FlatsDisponiveisAlugar(tFlat flats, FILE *imoveis){
	int count = 0;
        rewind(imoveis);
        while(1){
                fread(&flats, 1, sizeof(tFlat),imoveis);
                if(feof(imoveis)) break;
                if(flats.dado.disponivelAluVen == 'A' || flats.dado.disponivelAluVen == 'a'){
                        ImprimeFlat(flats, imoveis, count);
                        ImprimeDescricaoFlat(flats,imoveis, count);
			count = count + sizeof(tFlat);
                    	fseek(imoveis, count, SEEK_SET);
                }
        }
}

void StudiosDisponiveisVenda(tStudio studios, FILE *imoveis){
	int count = 0;
        rewind(imoveis);
        while(1){
                fread(&studios, 1, sizeof(tStudio),imoveis);
                if(feof(imoveis)) break;
                if(studios.dado.disponivelAluVen == 'V' || studios.dado.disponivelAluVen == 'v'){
                        ImprimeStudio(studios, imoveis, count);
                        ImprimeDescricaoStudio(studios,imoveis, count);
                        count = count + sizeof(tStudio);
                        fseek(imoveis, count, SEEK_SET);
                }
        }
}

void StudiosDisponiveisAlugar(tStudio studios, FILE *imoveis){
	int count = 0;
        rewind(imoveis);
        while(1){
                fread(&studios, 1, sizeof(tStudio),imoveis);
                if(feof(imoveis)) break;
                if(studios.dado.disponivelAluVen == 'A' || studios.dado.disponivelAluVen == 'a'){
                        ImprimeStudio(studios, imoveis, count);
                        ImprimeDescricaoStudio(studios,imoveis, count);
                        count = count + sizeof(tStudio);
                    	fseek(imoveis, count, SEEK_SET);
                }
        }
}

// Consulta de casas diponveis para alugar e vender por bairro

void CasasDisponiveisVendaBairro(tCasa casas, FILE *imoveis, const char *bairro){
	int count = 0;
        rewind(imoveis);
        while(1){
                fread(&casas, 1, sizeof(tCasa),imoveis);
                if(feof(imoveis)) break;
                if((casas.dados.disponivelAluVen == 'V' || casas.dados.disponivelAluVen == 'v') && !strcmp(casas.dados.bairro, bairro)){
                        ImprimeCasa(casas, imoveis, count);
                        ImprimeDescricaoCasa(casas, imoveis, count);
			count = count + sizeof(tCasa);
                    	fseek(imoveis, count, SEEK_SET);
                }
        }
}

void CasasDisponiveisAlugarBairro(tCasa casas, FILE *imoveis, const char *bairro){
	int count = 0;
        rewind(imoveis);
        while(1){
                fread(&casas, 1, sizeof(tCasa),imoveis);
                if(feof(imoveis)) break;
                if((casas.dados.disponivelAluVen == 'A' || casas.dados.disponivelAluVen == 'a') && !strcmp(casas.dados.bairro, bairro)){
                        ImprimeCasa(casas, imoveis, count);
                        ImprimeDescricaoCasa(casas, imoveis, count);
			count = count + sizeof(tCasa);
                    	fseek(imoveis, count, SEEK_SET);
                }
        }
}



// Consulta de apartamentos diponveis para alugar e vender por bairro


void ApartamentosDisponiveisVendaBairro(tApartamento apartamentos, FILE *imoveis, const char *bairro){
	int count = 0;
        rewind(imoveis);
        while(1){
                fread(&apartamentos, 1, sizeof(tApartamento),imoveis);
                if(feof(imoveis)) break;
                if((apartamentos.dado.disponivelAluVen == 'V' || apartamentos.dado.disponivelAluVen == 'v') && !strcmp(apartamentos.dado.bairro, bairro)){
                        ImprimeApartamento(apartamentos, imoveis, count);
                        ImprimeDescricaoApartamento(apartamentos, imoveis, count);
			count = count + sizeof(tApartamento);
                    	fseek(imoveis, count, SEEK_SET);
                }
        }
}


void ApartamentosDisponiveisAlugarBairro(tApartamento apartamentos, FILE *imoveis, const char *bairro){
	int count = 0;
        rewind(imoveis);
        while(1){
                fread(&apartamentos, 1, sizeof(tApartamento),imoveis);
                if(feof(imoveis)) break;
                  if((apartamentos.dado.disponivelAluVen == 'A' || apartamentos.dado.disponivelAluVen == 'a')  && !strcmp(apartamentos.dado.bairro, bairro)){
                        ImprimeApartamento(apartamentos, imoveis, count);
                        ImprimeDescricaoApartamento(apartamentos, imoveis, count);
			count = count + sizeof(tApartamento);
                    	fseek(imoveis, count, SEEK_SET);
                }
        }
}


// Consulta de Terrenos diponveis para alugar e vender bairro


void TerrenosDisponiveisVendaBairro(tTerreno terrenos, FILE *imoveis, const char *bairro){
	int count = 0;
        rewind(imoveis);
        while(1){
                fread(&terrenos, 1, sizeof(tTerreno),imoveis);
                if(feof(imoveis)) break;
                if((terrenos.dadoo.disponivelAluVen == 'V' || terrenos.dadoo.disponivelAluVen == 'v') && !strcmp(terrenos.dadoo.bairro, bairro)){
                        ImprimeTerreno(terrenos, imoveis, count);
                        ImprimeDescricaoTerreno(terrenos,imoveis, count);
			count = count + sizeof(tTerreno);
                    	fseek(imoveis, count, SEEK_SET);
                }
        }
}

void TerrenosDisponiveisAlugarBairro(tTerreno terrenos, FILE *imoveis, const char *bairro){
	int count = 0;
        rewind(imoveis);
        while(1){
                fread(&terrenos, 1, sizeof(tTerreno),imoveis);
                if(feof(imoveis)) break;
                if((terrenos.dadoo.disponivelAluVen == 'A' || terrenos.dadoo.disponivelAluVen == 'a') && !strcmp(terrenos.dadoo.bairro, bairro)){
                        ImprimeTerreno(terrenos, imoveis, count);
                        ImprimeDescricaoTerreno(terrenos,imoveis, count);
			count = count + sizeof(tTerreno);
                    	fseek(imoveis, count, SEEK_SET);
                }
        }
}

void FlatsDisponiveisVendaBairro(tFlat flats, FILE *imoveis, const char *bairro){
	int count = 0;
        rewind(imoveis);
        while(1){
                fread(&flats, 1, sizeof(tFlat),imoveis);
                if(feof(imoveis)) break;
                if((flats.dado.disponivelAluVen == 'V' || flats.dado.disponivelAluVen == 'v') && !strcmp(flats.dado.bairro, bairro)){
                        ImprimeFlat(flats, imoveis, count);
                        ImprimeDescricaoFlat(flats, imoveis, count);
			count = count + sizeof(tFlat);
                    	fseek(imoveis, count, SEEK_SET);
                }
        }
}

void FlatsDisponiveisAlugarBairro(tFlat flats, FILE *imoveis, const char *bairro){
	int count = 0;
        rewind(imoveis);
        while(1){
                fread(&flats, 1, sizeof(tFlat),imoveis);
                if(feof(imoveis)) break;
                if((flats.dado.disponivelAluVen == 'A' || flats.dado.disponivelAluVen == 'a') && !strcmp(flats.dado.bairro, bairro)){
                        ImprimeFlat(flats, imoveis, count);
                        ImprimeDescricaoFlat(flats,imoveis, count);
			count = count + sizeof(tFlat);
                    	fseek(imoveis, count, SEEK_SET);
                }
        }
}

void StudiosDisponiveisVendaBairro(tStudio studios, FILE *imoveis, const char *bairro){
	int count = 0;
        rewind(imoveis);
        while(1){
                fread(&studios, 1, sizeof(tStudio),imoveis);
                if(feof(imoveis)) break;
                if((studios.dado.disponivelAluVen == 'V' || studios.dado.disponivelAluVen == 'v') && !strcmp(studios.dado.bairro, bairro)){
                        ImprimeStudio(studios, imoveis, count);
                        ImprimeDescricaoStudio(studios,imoveis, count);
			count = count + sizeof(tStudio);
                    	fseek(imoveis, count, SEEK_SET);
                }
        }
}

void StudiosDisponiveisAlugarBairro(tStudio studios, FILE *imoveis, const char *bairro){
	int count = 0;
        rewind(imoveis);
        while(1){
                fread(&studios, 1, sizeof(tStudio),imoveis);
                if(feof(imoveis)) break;
                if((studios.dado.disponivelAluVen == 'A' || studios.dado.disponivelAluVen == 'a') && !strcmp(studios.dado.bairro, bairro)){
                        ImprimeStudio(studios, imoveis, count);
                        ImprimeDescricaoStudio(studios,imoveis, count);
                        count = count + sizeof(tStudio);
                    	fseek(imoveis, count, SEEK_SET);
                }
        }
}

// Consulta de casas diponveis para alugar e vender por bairro

void CasasDisponiveisCidade(tCasa casas, FILE *imoveis, const char *cidade){
	int count = 0;
        rewind(imoveis);
        while(1){
                fread(&casas, 1, sizeof(tCasa),imoveis);
                if(feof(imoveis)) break;
                if((casas.dados.disponivelAluVen != 'N' && casas.dados.disponivelAluVen != 'n') && !strcmp(casas.dados.cidade, cidade)){
                        ImprimeCasa(casas, imoveis, count);
                        ImprimeDescricaoCasa(casas, imoveis, count);
                        count = count + sizeof(tCasa);
                    	fseek(imoveis, count, SEEK_SET);
                }
        }
}

// Consulta de apartamentos diponveis para alugar e vender por bairro


void ApartamentosDisponiveisCidade(tApartamento apartamentos, FILE *imoveis, const char *cidade){
	int count = 0;
        rewind(imoveis);
        while(1){
                fread(&apartamentos, 1, sizeof(tApartamento),imoveis);
                if(feof(imoveis)) break;
                if((apartamentos.dado.disponivelAluVen != 'N' && apartamentos.dado.disponivelAluVen != 'n') && !strcmp(apartamentos.dado.cidade, cidade)){
                        ImprimeApartamento(apartamentos, imoveis, count);
                        ImprimeDescricaoApartamento(apartamentos, imoveis, count);
                        count = count + sizeof(tApartamento);
                    	fseek(imoveis, count, SEEK_SET);
                }
        }
}

// Consulta de Terrenos diponiveis bairro


void TerrenosDisponiveisCidade(tTerreno terrenos, FILE *imoveis, const char *cidade){
	int count = 0;
        rewind(imoveis);
        while(1){
                fread(&terrenos, 1, sizeof(tTerreno),imoveis);
                if(feof(imoveis)) break;
                if((terrenos.dadoo.disponivelAluVen != 'N' && terrenos.dadoo.disponivelAluVen != 'n') && !strcmp(terrenos.dadoo.cidade, cidade)){
                        ImprimeTerreno(terrenos, imoveis, count);
                        ImprimeDescricaoTerreno(terrenos,imoveis, count);
			             count = count + sizeof(tTerreno);
                    	fseek(imoveis, count, SEEK_SET);
                }
        }
}

// Consulta de Flats diponiveis bairro

void FlatsDisponiveisCidade(tFlat flats, FILE *imoveis, const char *cidade){
	int count = 0;
        rewind(imoveis);
        while(1){
                fread(&flats, 1, sizeof(tFlat),imoveis);
                if(feof(imoveis)) break;
                if((flats.dado.disponivelAluVen != 'N' && flats.dado.disponivelAluVen != 'n') && !strcmp(flats.dado.cidade, cidade)){
                        ImprimeFlat(flats, imoveis, count);
                        ImprimeDescricaoFlat(flats, imoveis, count);
			count = count + sizeof(tFlat);
                    	fseek(imoveis, count, SEEK_SET);
                }
        }
}

// Consulta de Sttudios diponiveis bairro

void StudiosDisponiveisCidade(tStudio studios, FILE *imoveis, const char *cidade){
	int count = 0;
        rewind(imoveis);
        while(1){
                fread(&studios, 1, sizeof(tStudio),imoveis);
                if(feof(imoveis)) break;
                if((studios.dado.disponivelAluVen != 'N' && studios.dado.disponivelAluVen != 'n') && !strcmp(studios.dado.cidade, cidade)){
                        ImprimeStudio(studios, imoveis, count);
                        ImprimeDescricaoStudio(studios,imoveis, count);
			             count = count + sizeof(tStudio);
                    	fseek(imoveis, count, SEEK_SET);
                }
        }
}

#endif
