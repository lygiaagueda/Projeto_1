#ifndef CADASTRO_H
#define CADASTRO_H
//#include "../../estruturas/estruturas.h"

void CadastraCasa(tCasa casas, FILE *imoveis){
    int verificador;

    //Cadastrando casa
    printf("\nCadastro da casa\n");
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
    //getchar();
    fgets(casas.dados.cep, 9, stdin);
    casas.dados.cep[strlen(casas.dados.cep) - 1] = '\0';

    printf("Digite o nome da cidade da casa: ");
    //getchar();
    fgets(casas.dados.cidade, 100, stdin);
    casas.dados.cidade[strlen(casas.dados.cidade) - 1] = '\0';

    printf("Digite o valor da casa: ");
    scanf("%lf", &casas.dados.valor);

    printf("Digite se a casa esta disponivel para venda ou aluguel (V - para venda/ A - para aluguel/\n"
            "N - para nao disponivel: ");
    scanf("%c%*c", &casas.dados.disponivelAluVen);

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

    if(verificador == sizeof(casas)){
        puts("Casa cadastrada com sucesso!");
    } else {
        puts("Erro ao cadastrar casa!");
    }
}

void CadastraApartamento(tApartamento apartamentos, FILE *imoveis){
    int verificador;

    //Cadastrando apartamento
    printf("\nCadastro do apartamento\n");
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
    //getchar();
    fgets(apartamentos.dado.cep, 9, stdin);
    apartamentos.dado.cep[strlen(apartamentos.dado.cep) - 1] = '\0';

    printf("Digite o nome da cidade do apartamento: ");
    //getchar();
    fgets(apartamentos.dado.cidade, 100, stdin);
    apartamentos.dado.cidade[strlen(apartamentos.dado.cidade) - 1] = '\0';

    printf("Digite o valor do apartamento: ");
    scanf("%lf", &apartamentos.dado.valor);

    printf("Digite se o apartamento esta disponivel para venda ou aluguel (V - para venda/ A - para aluguel): ");
    scanf("%c%*c", &apartamentos.dado.disponivelAluVen);

    printf("Digite a area do apartamento: ");
    scanf("%lf", &apartamentos.area);

    printf("Digite o numero de quartos do apartamento: ");
    scanf("%d", &apartamentos.numQuartos);

    printf("Digite a posicao em que o apartamento esta localizado: ");
    getchar();
    fgets(apartamentos.posicao, 100, stdin);
    apartamentos.posicao[strlen(apartamentos. posicao) - 1] = '\0';

    printf("Digite o valor do condominio do apartamentos: ");
    scanf("%lf", &apartamentos.condominio);

    printf("Digite o numero de vagas de estacionamento do apartamento: ");
    scanf("%d", &apartamentos.vagasGaragem);

    //Registrando apartamento no arquivo
    verificador = fwrite(&apartamentos, 1, sizeof(tApartamento), imoveis);

    if(verificador == sizeof(apartamentos)){
        puts("Apartamento cadastrada com sucesso!");
    } else {
        puts("Erro ao cadastrar apartamento!");
    }
}

void CadastraTerreno(tTerreno terrenos, FILE *imoveis){
    int verificador;

    //Cadastrando terreno
    printf("\nCadastro do terreno\n");
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
    //getchar();
    fgets(terrenos.dadoo.cep, 9, stdin);
    terrenos.dadoo.cep[strlen(terrenos.dadoo.cep) - 1] = '\0';

    printf("Digite o nome da cidade do terreno: ");
    //getchar();
    fgets(terrenos.dadoo.cidade, 100, stdin);
    terrenos.dadoo.cidade[strlen(terrenos.dadoo.cidade) - 1] = '\0';

    printf("Digite o valor do terreno: ");
    scanf("%lf", &terrenos.dadoo.valor);

    printf("Digite se o terreno esta disponivel para venda ou aluguel (V - para venda/ A - para aluguel): ");
    scanf("%c%*c", &terrenos.dadoo.disponivelAluVen);

    printf("Digite a area do terreno: ");
    scanf("%lf", &terrenos.area);

    //Registrando terreno no arquivo
    verificador = fwrite(&terrenos, 1, sizeof(tTerreno), imoveis);

    if(verificador == sizeof(terrenos)){
        puts("Terreno cadastrada com sucesso!");
    } else {
        puts("Erro ao cadastrar terreno!");
    }
}

#endif
