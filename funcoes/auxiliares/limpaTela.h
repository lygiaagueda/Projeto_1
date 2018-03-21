int limpaTela(){
    #ifdef OS_Windows
     /* Codigo Windows */
        system("cls");
    #else
     /* Codigo GNU/Linux */
        system("clear");
    #endif
}
