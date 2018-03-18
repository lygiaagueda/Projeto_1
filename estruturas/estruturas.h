typedef struct{
    char endereco[100];
    int numero;
    char bairro[100];
    char cep[9];
    char cidade[100];
    double valor;
    char disponivelAluVen[2];
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
    double condominio;
    int vagasGaragem;
}tApartamento;

typedef struct{
    tImovel dadoo;
    double area;
}tTerreno;
