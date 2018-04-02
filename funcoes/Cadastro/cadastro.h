#ifndef CADASTRO_H
#define CADASTRO_H
//#include "../../estruturas/estruturas.h"

void CadastraCasa(tCasa casas, FILE *imoveis){
    int verificador;

    //Cadastrando casa
    printf("\nCadastro da casa\n\n");
    printf("Digite o nome da rua da casa: ");
    getchar();
    fgets(casas.dados.endereco, 100, stdin);
    casas.dados.endereco[strlen(casas.dados.endereco) - 1] = '\0';

    printf("Digite o numero da casa: ");
    scanf("%d", &casas.dados.numero);

    printf("Digite o nome do bairro da casa: ");
    getchar();
    fgets(casas.dados.bairro, 100, stdin);
    casas.dados.bairro[strlen(casas.dados.bairro) - 1] = '\0';

    printf("Digite o cep da rua da casa no formato 00000-000: ");
    fgets(casas.dados.cep, 10, stdin);
    //casas.dados.cep[strlen(casas.dados.cep) - 1] = '\0';
    getchar();

    printf("Digite o nome da cidade da casa: ");
    getchar();
    fgets(casas.dados.cidade, 100, stdin);
    casas.dados.cidade[strlen(casas.dados.cidade) - 1] = '\0';

    printf("Digite o valor da casa: ");
    scanf("%lf", &casas.dados.valor);

    printf("Digite se a casa esta disponivel para venda ou aluguel (V - para venda/ A - para aluguel/\n"
            "N - para nao disponivel: ");
    scanf(" %c", &casas.dados.disponivelAluVen);

    printf("Digite o numero de pavimentos da casa: ");
    scanf("%d", &casas.numPavimentos);

    printf("Digite o numero de quartos da casa: ");
    scanf("%d", &casas.numQuartos);

    printf("Digite a area o terreno da casa: ");
    scanf("%lf", &casas.areaTerreno);

    printf("Digite a area construida da casa: ");
    scanf("%lf", &casas.areaConstruida);

    //Registrando estrutura no arquivo
    verificador = fwrite(&casas, 1, sizeof(tCasa), imoveis);
    limpaTela();
    if(verificador == sizeof(casas)){
        puts("\nCasa cadastrada com sucesso!\n");
    } else {
        puts("Erro ao cadastrar casa!");
    }
}

void CadastraApartamento(tApartamento apartamentos, FILE *imoveis){
    int verificador;

    //Cadastrando apartamento
    printf("\nCadastro do apartamento\n\n");
    printf("Digite o nome da rua do apartamento: ");
    getchar();
    fgets(apartamentos.dado.endereco, 100, stdin);
    apartamentos.dado.endereco[strlen(apartamentos.dado.endereco) - 1] = '\0';

    printf("Digite o numero do apartamento: ");
    scanf("%d", &apartamentos.dado.numero);

    printf("Digite o nome do bairro do apartamento: ");
    getchar();
    fgets(apartamentos.dado.bairro, 100, stdin);
    apartamentos.dado.bairro[strlen(apartamentos.dado.bairro) - 1] = '\0';

    printf("Digite o cep da rua do apartamento no formato 00000-000: ");
    fgets(apartamentos.dado.cep, 10, stdin);
    //apartamentos.dado.cep[strlen(apartamentos.dado.cep) - 1] = '\0';
    getchar();

    printf("Digite o nome da cidade do apartamento: ");
    getchar();
    fgets(apartamentos.dado.cidade, 100, stdin);
    apartamentos.dado.cidade[strlen(apartamentos.dado.cidade) - 1] = '\0';

    printf("Digite o valor do apartamento: ");
    scanf("%lf", &apartamentos.dado.valor);

    printf("Digite se o apartamento esta disponivel para venda ou aluguel (V - para venda/ A - para aluguel\n"
            "N - nao disponivel para aluguel ou venda):");
    scanf(" %c", &apartamentos.dado.disponivelAluVen);

    printf("Digite a area do apartamento: ");
    scanf("%lf", &apartamentos.area);

    printf("Digite o numero de quartos do apartamento: ");
    scanf("%d", &apartamentos.numQuartos);

    printf("Digite a posicao em que o apartamento esta localizado: ");
    getchar();
    fgets(apartamentos.posicao, 100, stdin);
    apartamentos.posicao[strlen(apartamentos. posicao) - 1] = '\0';

    printf("Digite o andar em que o apartamento se localiza: ");
    scanf("%d", &apartamentos.numAndar);

    printf("Digite o valor do condominio do apartamentos: ");
    scanf("%lf", &apartamentos.condominio);

    printf("Digite o numero de vagas de estacionamento do apartamento: ");
    scanf("%d", &apartamentos.vagasGaragem);

    //Registrando apartamento no arquivo
    verificador = fwrite(&apartamentos, 1, sizeof(tApartamento), imoveis);

    limpaTela();

    if(verificador == sizeof(apartamentos)){
        puts("\nApartamento cadastrada com sucesso!\n");
    } else {
        puts("Erro ao cadastrar apartamento!");
    }
}

void CadastraTerreno(tTerreno terrenos, FILE *imoveis){
    int verificador;

    //Cadastrando terreno
    printf("\nCadastro do terreno\n\n");
    printf("Digite o nome da rua do terreno: ");
    getchar();
    fgets(terrenos.dadoo.endereco, 100, stdin);
    terrenos.dadoo.endereco[strlen(terrenos.dadoo.endereco) - 1] = '\0';

    printf("Digite o numero do terreno: ");
    scanf("%d", &terrenos.dadoo.numero);

    printf("Digite o nome do bairro do terreno: ");
    getchar();
    fgets(terrenos.dadoo.bairro, 100, stdin);
    terrenos.dadoo.bairro[strlen(terrenos.dadoo.bairro) - 1] = '\0';

    printf("Digite o cep da rua do terreno no formato 00000-000: ");
    fgets(terrenos.dadoo.cep, 10, stdin);
    //terrenos.dadoo.cep[strlen(terrenos.dadoo.cep) - 1] = '\0';
    getchar();

    printf("Digite o nome da cidade do terreno: ");
    getchar();
    fgets(terrenos.dadoo.cidade, 100, stdin);
    terrenos.dadoo.cidade[strlen(terrenos.dadoo.cidade) - 1] = '\0';

    printf("Digite o valor do terreno: ");
    scanf("%lf", &terrenos.dadoo.valor);

    printf("Digite se o terreno esta disponivel para venda ou aluguel (V - para venda/ A - para aluguel\n"
            "N - nao disponivel para aluguel ou venda):");
    scanf(" %c", &terrenos.dadoo.disponivelAluVen);

    printf("Digite a area do terreno: ");
    scanf("%lf", &terrenos.area);

    //Registrando terreno no arquivo
    verificador = fwrite(&terrenos, 1, sizeof(tTerreno), imoveis);

    limpaTela();

    if(verificador == sizeof(terrenos)){
        puts("\nTerreno cadastrada com sucesso!\n");
    } else {
        puts("Erro ao cadastrar terreno!");
    }
}

void CadastraFlat(tFlat flats, FILE *imoveis){
    int verificador;

    //Cadastrando flat
    printf("\nCadastro do flat\n\n");
    printf("Digite o nome da rua do flat: ");
    getchar();
    fgets(flats.dado.endereco, 100, stdin);
    flats.dado.endereco[strlen(flats.dado.endereco) - 1] = '\0';

    printf("Digite o numero do flat: ");
    scanf("%d", &flats.dado.numero);

    printf("Digite o nome do bairro do flat: ");
    getchar();
    fgets(flats.dado.bairro, 100, stdin);
    flats.dado.bairro[strlen(flats.dado.bairro) - 1] = '\0';

    printf("Digite o cep da rua do flat no formato 00000-000: ");
    fgets(flats.dado.cep, 10, stdin);
    //flats.dado.cep[strlen(flats.dado.cep) - 1] = '\0';
    getchar();

    printf("Digite o nome da cidade do flat: ");
    getchar();
    fgets(flats.dado.cidade, 100, stdin);
    flats.dado.cidade[strlen(flats.dado.cidade) - 1] = '\0';

    printf("Digite o valor do flat: ");
    scanf("%lf", &flats.dado.valor);

    printf("Digite se o flat esta disponivel para venda ou aluguel (V - para venda/ A - para aluguel)\n"
            "N - para nao disponivel: ");
    scanf(" %c", &flats.dado.disponivelAluVen);

    printf("Digite a area do flat: ");
    scanf("%lf", &flats.areaFlat);

    printf("Digite oo valor do condominio do flat:");
    scanf("%lf", &flats.valorCondominio);

    printf("Digite se o flat possui ar condicionado (S - para possui/ N - para nao possui):");
    scanf(" %c", &flats.arCondicionado);

    printf("Digite se o flat possui internet (S - para possui/ N - para nao possui):");
    scanf(" %c", &flats.internet);

    printf("Digite se o flat possui TV a cabo (S - para possui/ N - para nao possui):");
    scanf(" %c", &flats.tvACabo);

    printf("Digite se o flat possui servico de lavanderia (S - para possui/ N - para nao possui):");
    scanf(" %c", &flats.lavanderia);

    printf("Digite se o flat possui servico de arrumacao/limpeza (S - para possui/ N - para nao possui):");
    scanf(" %c", &flats.limpeza);

    printf("Digite se o flat possui servico de recepcao 24 horas (S - para possui/ N - para nao possui):");
    scanf(" %c", &flats.recepcao24);

    limpaTela();

    if(verificador == sizeof(flats)){
        puts("\nFlat cadastrada com sucesso!\n");
    } else {
        puts("Erro ao cadastrar flat!");
    }
}

void CadastraStudio(tStudio studios, FILE *imoveis){
    int verificador;

    //Cadastrando studio
    printf("\nCadastro do studio\n\n");
    printf("Digite o nome da rua do  studio: ");
    getchar();
    fgets(studios.dado.endereco, 100, stdin);
    studios.dado.endereco[strlen(studios.dado.endereco) - 1] = '\0';

    printf("Digite o numero do studio: ");
    scanf("%d", &studios.dado.numero);

    printf("Digite o nome do bairro do studio: ");
    getchar();
    fgets(studios.dado.bairro, 100, stdin);
    studios.dado.bairro[strlen(studios.dado.bairro) - 1] = '\0';

    printf("Digite o cep da rua do studio no formato 00000-000: ");
    fgets(studios.dado.cep, 10, stdin);
    //studios.dado.cep[strlen(studios.dado.cep) - 1] = '\0';
    getchar();

    printf("Digite o nome da cidade do studio: ");
    getchar();
    fgets(studios.dado.cidade, 100, stdin);
    studios.dado.cidade[strlen(studios.dado.cidade) - 1] = '\0';

    printf("Digite o valor do studio: ");
    scanf("%lf", &studios.dado.valor);

    printf("Digite se o studio esta disponivel para venda ou aluguel (V - para venda/ A - para aluguel)\n"
            "N - para nao disponivel: ");
    scanf(" %c", &studios.dado.disponivelAluVen);

    printf("Digite a area do studio:");
    scanf("%lf", &studios.areaFlat);

    printf("Digite oo valor do condominio do studio:");
    scanf("%lf", &studios.valorCondominio);

    printf("Digite se o studio possui ar condicionado (S - para possui/ N - para nao possui):");
    scanf(" %c", &studios.arCondicionado);

    printf("Digite se o studio possui internet (S - para possui/ N - para nao possui):");
    scanf(" %c", &studios.internet);

    printf("Digite se o studio possui TV a cabo (S - para possui/ N - para nao possui):");
    scanf(" %c", &studios.tvACabo);

    printf("Digite se o studio possui servico de lavanderia (S - para possui/ N - para nao possui):");
    scanf(" %c", &studios.lavanderia);

    printf("Digite se o studio possui servico de arrumacao/limpeza (S - para possui/ N - para nao possui):");
    scanf(" %c", &studios.limpeza);

    printf("Digite se o studio possui servico de recepcao 24 horas (S - para possui/ N - para nao possui):");
    scanf(" %c", &studios.recepcao24);

    printf("Digite se o studio possui piscina (S - para possui/ N - para nao possui):");
    scanf(" %c", &studios.piscina);

    printf("Digite se o studio possui sauna (S - para possui/ N - para nao possui):");
    scanf(" %c", &studios.sauna);

    printf("Digite se o studio possui sala de ginastica (S - para possui/ N - para nao possui):");
    scanf(" %c", &studios.salaGinastica);

    limpaTela();

    if(verificador == sizeof(studios)){
        puts("\nStudio cadastrada com sucesso!\n");
    } else {
        puts("Erro ao cadastrar studio!");
    }

}

#endif
