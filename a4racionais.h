#include <stdio.h>

typedef struct{
	int num;
	int den;
}Racional;

Racional *Cria(int N, int D);

void exibir(Racional *r);

Racional *Soma(Racional *R1, Racional *R2);

Racional *Multiplica(Racional *R1, Racional *R2);

int TestaIgualdade(Racional *R1, Racional *R2);