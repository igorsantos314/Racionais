#include <stdio.h>
#include "a4racionais.h"

int main(){
	Racional *r1, *r2, *r3, *r4;
	int igual;
	
	r1 = Cria(5, 4);
	r2 = Cria(7, 5);
	
	exibir(r1);
	exibir(r2);
	
	printf("\n--SOMA--\n");
	r3 = Soma(r1, r2);
	exibir(r3);
	
	printf("\n--MULT--\n");
	r4 = Multiplica(r1, r2);
	exibir(r4);
	
	printf("\n--IGUALDADE--\n");
	igual = TestaIgualdade(r1, r2);
	
	if(igual == 1){
		printf("\nIGUAIS");
	}
	else{
		printf("\nDIFERENTES");
	}
	
	return 0;
}