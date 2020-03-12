#include <stdlib.h>
#include <stdio.h>
#include "a4matriz.h"

struct matriz{
	int lin;
	int col;
	float *v;
};

void libera(Matriz *mat){
	free(mat->v);
	free(mat);
}

Matriz *cria(int m, int n){
	Matriz *mat = (Matriz*) malloc(sizeof(Matriz));
	
	if(mat == NULL){
		printf("Memória Insuficiente!\n");
	}
	
	mat->lin = m;
	mat->col = n;
	mat->v = (float*) malloc(m*n*(sizeof(float)));
	
	return mat;
}

float acessa(Matriz *mat, int i, int j){
	int k;
	
	if(i<1 || i>=mat->lin || j<1 || j>=mat->col){
		printf("Acesso Invalido!\n");
		exit(1);
	}
	
	k = (i-1)*mat->col + j-1;
	
	return mat->v[k];
}

int linhas(Matriz *mat){
	return mat->lin;
}

void atribui(Matriz *mat, int i, int j, float v){
	int k;
	
	if(i<1 || i>=mat->lin || j<1 || j>=mat->col){
		printf("Acesso Invalido!\n");
		exit(1);
	}
	
	k = (i-1)*mat->col + j-1;
	
	mat->v[k] = v;
}

int colunas(Matriz *mat){
	return mat->col;
}
