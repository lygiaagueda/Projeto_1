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

