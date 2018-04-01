#ifndef INTERFACE_H
#define INTERFACE_H


void ExibeMenuItem(){
    printf("-------------------------------------------------\n");
    printf("Main Menu\n");
    printf("-------------------------------------------------\n");
    printf("1 - Cadastrar imovel\n");
    printf("2 - Consutar imoveis disponiveis\n");
    printf("3 - Consultar descricao de todos os imoveis\n");
    printf("4 - Consultar imoveis disponiveis para venda\n");
    printf("5 - Consutar imoveis disponíveis para alugar\n");
    printf("6 - Consutar imoveis disponíveis para alugar por bairro\n");
    printf("7 - ??\n");
    printf("8 - ??\n");
    printf("9 - Sair\n");
    printf("-------------------------------------------------\n");

}

void ExibeMenuSubItem1(){
    printf("-------------------------------------------------\n");
    printf("Menu Cadastro\n");
    printf("-------------------------------------------------\n");
    printf("1 - Cadastrar casa\n");
    printf("2 - Cadastrar apartamento\n");
    printf("3 - Cadastrar terreno\n");
    printf("4 - Cadastrar flat\n");
    printf("5 - Cadastrar studio\n\n");
    printf("6 - Voltar\n");
    printf("-------------------------------------------------\n");
}

void ExibeMenuSubItem4(){
    printf("-------------------------------------------------\n");
    printf("Menu de imoveis disponveis para venda\n");
    printf("-------------------------------------------------\n");
    printf("1 - Casas disponveis\n");
    printf("2 - Apartamentos disponiveis\n");
    printf("3 - Terrenos disponveis\n");
    printf("4 - Flats disponiveis\n");
    printf("5 - Studio dispoiveis\n\n");
    printf("6 - Voltar\n");
    printf("-------------------------------------------------\n");
}

void ExibeMenuSubItem5(){
    printf("-------------------------------------------------\n");
    printf("Menu de imoveis disponveis para alugar\n");
    printf("-------------------------------------------------\n");
    printf("1 - Casas disponveis\n");
    printf("2 - Apartamentos disponiveis\n");
    printf("3 - Terrenos disponveis\n");
    printf("4 - Flats disponiveis\n");
    printf("5 - Studio dispoiveis\n\n");
    printf("6 - Voltar\n");
    printf("-------------------------------------------------\n");
}

void ExibeMenuSubSubItem5(){
    printf("-------------------------------------------------\n");
    printf("Menu de imoveis disponveis para alugar\n");
    printf("-------------------------------------------------\n");
    printf("1 - Todos os imoveis\n");
    printf("2 - Pesquisar por bairro\n\n");
    printf("3 - Voltar\n");
    printf("-------------------------------------------------\n");
}

#endif
