#ifndef ESTRUTURAS_H
#define ESTRUTURAS_H

typedef struct{
    char endereco[100];
    int numero;
    char bairro[100];
    char cep[9];
    char cidade[100];
    double valor;
    char disponivelAluVen;
}tImovel;

typedef struct{
    tImovel dados;
    int numPavimentos;
    int numQuartos;
    double areaTerreno;
    double areaConstruida;
}tCasa;

typedef struct{
    tImovel dados;
    double area;
    int numQuartos;
    char posicao[100];
    double condominio;
    int vagasGaragem;
}tApartamento;

typedef struct{
    tImovel dadoo;
    double area;
}tTerreno;

#endif
