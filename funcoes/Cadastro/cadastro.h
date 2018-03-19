#ifndef CADASTRO_H
#define CADASTRO_H
#include "estruturas/estruturas.h"

void CadastraCasa(tCasa *casas){
    static int count = 0;

    ++count;
    printf("\nCadastro da casa %d:\n", count -1);
    printf("Digite o nome da rua da casa: ");
    getchar();
    fgets(casas[count - 1].dados.endereco, 100, stdin);
    casas[count - 1].dados.endereco[strlen(casas[count - 1].dados.endereco) - 1] = '\0';

    printf("Digite o numero da casa: ");
    scanf("%d", &casas[count-1].dados.numero);

    printf("Digite o nome do bairro da casa: ");
    getchar();
    fgets(casas[count - 1].dados.bairro, 100, stdin);
    casas[count - 1].dados.bairro[strlen(casas[count - 1].dados.bairro) - 1] = '\0';

    printf("Digite o cep da rua da casa no formato 00000-000: ");
    //getchar();
    fgets(casas[count - 1].dados.cep, 9, stdin);
    casas[count - 1].dados.cep[strlen(casas[count - 1].dados.cep) - 1] = '\0';

    printf("Digite o nome da cidade da casa: ");
    //getchar();
    fgets(casas[count - 1].dados.cidade, 100, stdin);
    casas[count - 1].dados.cidade[strlen(casas[count - 1].dados.cidade) - 1] = '\0';

    printf("Digite o valor da casa: ");
    scanf("%lf", &casas[count - 1].dados.valor);

    printf("Digite se a casa esta disponivel para venda ou aluguel (V - para venda/ A - para aluguel/\n"
            "N - para nao disponivel: ");
    scanf("%c%*c", &casas[count - 1].dados.disponivelAluVen);

    printf("Digite o numero de pavimentos da casa: ");
    scanf("%d", &casas[count - 1].numPavimentos);

    printf("Digite o numero de quartos da casa: ");
    scanf("%d", &casas[count - 1].numQuartos);

    printf("Digite a area o terreno da casa: ");
    scanf("%lf", &casas[count - 1].areaTerreno);

    printf("Digite a area construida da casa: ");
    scanf("%lf", &casas[count - 1].areaConstruida);
}

void CadastraApartamento(tApartamento *apartamentos){
    static int count = 0;

    ++count;
    printf("\nCadastro do apartamento %d:\n", count -1);
    printf("Digite o nome da rua do apartamento: ");
    getchar();
    fgets(apartamentos[count - 1].dado.endereco, 100, stdin);
    apartamentos[count - 1].dado.endereco[strlen(apartamentos[count - 1].dado.endereco) - 1] = '\0';

    printf("Digite o numero do apartamento: ");
    scanf("%d", &apartamentos[count-1].dado.numero);

    printf("Digite o nome do bairro do apartamento: ");
    getchar();
    fgets(apartamentos[count - 1].dado.bairro, 100, stdin);
    apartamentos[count - 1].dado.bairro[strlen(apartamentos[count - 1].dado.bairro) - 1] = '\0';

    printf("Digite o cep da rua do apartamento no formato 00000-000: ");
    //getchar();
    fgets(apartamentos[count - 1].dado.cep, 9, stdin);
    apartamentos[count - 1].dado.cep[strlen(apartamentos[count - 1].dado.cep) - 1] = '\0';

    printf("Digite o nome da cidade do apartamento: ");
    //getchar();
    fgets(apartamentos[count - 1].dado.cidade, 100, stdin);
    apartamentos[count - 1].dado.cidade[strlen(apartamentos[count - 1].dado.cidade) - 1] = '\0';

    printf("Digite o valor do apartamento: ");
    scanf("%lf", &apartamentos[count - 1].dado.valor);

    printf("Digite se o apartamento esta disponivel para venda ou aluguel (V - para venda/ A - para aluguel): ");
    scanf("%c%*c", &apartamentos[count - 1].dado.disponivelAluVen);

    printf("Digite a area do apartamento: ");
    scanf("%lf", &apartamentos[count - 1].area);

    printf("Digite o numero de quartos do apartamento: ");
    scanf("%d", &apartamentos[count - 1].numQuartos);

    printf("Digite a posicao em que o apartamento esta localizado: ");
    getchar();
    fgets(apartamentos[count -1].posicao, 100, stdin);
    apartamentos[count - 1].posicao[strlen(apartamentos[count - 1]. posicao) - 1] = '\0';

    printf("Digite o valor do condominio do apartamentos: ");
    scanf("%lf", &apartamentos[count - 1].condominio);

    printf("Digite o numero de vagas de estacionamento do apartamento: ");
    scanf("%d", &apartamentos[count - 1].vagasGaragem);
}

void CadastraTerreno(tTerreno *terrenos){
    static int count = 0;

    ++count;
    printf("\nCadastro do terreno %d:\n", count -1);
    printf("Digite o nome da rua do terreno: ");
    getchar();
    fgets(terrenos[count - 1].dadoo.endereco, 100, stdin);
    terrenos[count - 1].dadoo.endereco[strlen(terrenos[count - 1].dadoo.endereco) - 1] = '\0';

    printf("Digite o numero do terreno: ");
    scanf("%d", &terrenos[count-1].dadoo.numero);

    printf("Digite o nome do bairro do terreno: ");
    getchar();
    fgets(terrenos[count - 1].dadoo.bairro, 100, stdin);
    terrenos[count - 1].dadoo.bairro[strlen(terrenos[count - 1].dadoo.bairro) - 1] = '\0';

    printf("Digite o cep da rua do terreno no formato 00000-000: ");
    //getchar();
    fgets(terrenos[count - 1].dadoo.cep, 9, stdin);
    terrenos[count - 1].dadoo.cep[strlen(terrenos[count - 1].dadoo.cep) - 1] = '\0';

    printf("Digite o nome da cidade do terreno: ");
    //getchar();
    fgets(terrenos[count - 1].dadoo.cidade, 100, stdin);
    terrenos[count - 1].dadoo.cidade[strlen(terrenos[count - 1].dadoo.cidade) - 1] = '\0';

    printf("Digite o valor do terreno: ");
    scanf("%lf", &terrenos[count - 1].dadoo.valor);

    printf("Digite se o terreno esta disponivel para venda ou aluguel (V - para venda/ A - para aluguel): ");
    scanf("%c%*c", &terrenos[count - 1].dadoo.disponivelAluVen);

    printf("Digite a area do terreno: ");
    scanf("%lf", &terrenos[count - 1].area);

}

#endif
