#ifndef ESTRUTURAS_H

#define ESTRUTURAS_H

typedef struct{
    char endereco[100];
    int numero;
    char bairro[100];
    char cep[10];
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
    tImovel dado;
    double area;
    int numQuartos;
    char posicao[100];
    int numAndar;
    double condominio;
    int vagasGaragem;
}tApartamento;

typedef struct{
    tImovel dadoo;
    double area;
}tTerreno;

typedef struct{
    tImovel dado;
    double areaFlat;
    double valorCondominio;
    char arCondicionado;
    char internet;
    char tvACabo;
    char lavanderia;
    char limpeza;
    char recepcao24;
}tFlat;

typedef struct{
    tImovel dado;
    double areaFlat;
    double valorCondominio;
    char arCondicionado;
    char internet;
    char tvACabo;
    char lavanderia;
    char limpeza;
    char recepcao24;
    char piscina;
    char sauna;
    char salaGinastica;
}tStudio;

#endif
