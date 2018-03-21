// Bibliotecas padrões

#include <stdio.h>
#include <string.h>

//Bibliotecas auxiliares
#ifdef __unix__
    #include <unistd.h>
    #include <stdlib.h>

#elif defined(_WIN32) || defined(WIN32)

   #define OS_Windows
   #include <windows.h>

#endif

//Bibliotecas do Projeto

//Estruturas
#include "estruturas/estruturas.h"

//Funcoes de interface
#include "funcoes/interface/interface.h"

//Funcoes de cadastro
#include "funcoes/cadastro/cadastro.h"

//Funcoes de consulta
#include "funcoes/consulta/consulta.h"

//Funções auxiliares
#include "funcoes/auxiliares/limpaTela.h"

