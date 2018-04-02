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
    printf("6 - Sair\n");
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

void ExibeMenuSubItem2(){
    //Sub item consultar imoveis disponiveis - 2
    printf("-------------------------------------------------\n");
    printf("Menu de imoveis disponveis\n");
    printf("-------------------------------------------------\n");
    printf("1 - Todos os imoveis\n");
    printf("2 - Pesquisar por cidade\n\n");
    printf("3 - Voltar\n");
    printf("-------------------------------------------------\n");
}

void ExibeMenuSubSubItem2(){
    //Sub item 2 de imoveis disponiveis (Pesquisar por cidade)
    printf("-------------------------------------------------\n");
    printf("Menu de imoveis disponveis por cidade\n");
    printf("-------------------------------------------------\n");
    printf("1 - Casas disponveis\n");
    printf("2 - Apartamentos disponiveis\n");
    printf("3 - Terrenos disponveis\n");
    printf("4 - Flats disponiveis\n");
    printf("5 - Studio dispoiveis\n\n");
    printf("6 - Voltar\n");
    printf("-------------------------------------------------\n");
}

void ExibeMenuSubItem4(){
    // Item imoveis disponveis para venda - 4
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

void ExibeMenuSubSubItem5(){
    //Sub item 2 de imoveis para alugar (Pesquisar por bairro)
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

void ExibeMenuSubItem5(){
    //Item imoveis disponiveis para alugar - 5
    printf("-------------------------------------------------\n");
    printf("Menu de imoveis disponveis para alugar\n");
    printf("-------------------------------------------------\n");
    printf("1 - Todos os imoveis\n");
    printf("2 - Pesquisar por bairro\n\n");
    printf("3 - Voltar\n");
    printf("-------------------------------------------------\n");
}

#endif
