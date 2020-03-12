#include <stdlib.h>
#include <stdio.h>
#include "a4matriz.h"

int main(){
	float a, b, c, d;
	Matriz *M;
	
	M = cria(5,5);
	atribui(M, 1,2,40);
	
	a = acessa(M, 1, 2);
	
	printf("M[1][2]: %4.2f \n", a);
	printf("M[2][3]: %4.2f \n", b);
	printf("M[3][5]: %4.2f \n", c);
	printf("M[5][1]: %4.2f \n", d);
	
	return 0;
}