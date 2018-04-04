#include <stdio.h>

#ifndef LIMPA_TELA_H
#define LIMPA_TELA_H

	#ifdef OS_Windows
	     /* Codigo Windows */
	 	int limpaTela(){
	 		system("cls");
	 	}
	 	void limpaB(void){

	 		fflush(stdin);
	 	}

	 #else
	 	/* Codigo GNU/Linux */
	 	int limpaTela(){
	 		system("clear");
	 	}

	 
	 	void limpaB(void){

	 		__fpurge(stdin);
	 	}
	 #endif

#endif