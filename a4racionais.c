#include <stdio.h>
#include <stdlib.h>
#include "a4racionais.h"

Racional *Cria(int N, int D){
	Racional *r = (Racional*) malloc(sizeof(Racional));
	
	if(D == 0){
		printf("Indeterminacao Matematica!\n");
		exit(1);
	}
	
	r->num = N;
	r->den = D;
	
	return r;
}

void exibir(Racional *r){
	printf("\n----\nNumerador: %d\nDenominador: %d\n----\n", r->num, r->den);
}

Racional *Soma(Racional *R1, Racional *R2){
	Racional *r = (Racional*) malloc(sizeof(Racional));
	
	r->num = R2->den * R1->num + R1->den * R2->num;
	r->den = R2->den * R1->den;
	
	return r;
}

Racional *Multiplica(Racional *R1, Racional *R2){
	Racional *r = (Racional*) malloc(sizeof(Racional));
	
	r->num = R2->num * R1->num;
	r->den = R2->den * R1->den;
	
	return r;
}

int TestaIgualdade(Racional *R1, Racional *R2){
	if(R1->den == R2->den && R1->num == R2->num){
		return 1;
	}
	else{
		return 0;
	}
}