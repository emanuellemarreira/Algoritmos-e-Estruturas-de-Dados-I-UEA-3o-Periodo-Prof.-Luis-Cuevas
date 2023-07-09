#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hashlista2.h"

int main(){
	tbhash hash;
	PACIENTE p;
	inicializarHash(hash);
	p.cod_pac = 123;
	strcpy(p.nome, "Andreia");
	p.idade = 31;
	strcpy(p.CPF, "01234567810");
	inserirHash(hash, p);
	
	p.cod_pac = 225;
	strcpy(p.nome, "Andreia 2");
	p.idade = 32;
	strcpy(p.CPF, "11234567810");
	inserirHash(hash, p);

	p.cod_pac = 111;
	strcpy(p.nome, "Alexandre");
	p.idade = 32;
	strcpy(p.CPF, "05634567810");
	inserirHash(hash, p);
	
	p.cod_pac = 165;
	strcpy(p.nome, "Marcus");
	p.idade = 45;
	strcpy(p.CPF, "06543217810");
	inserirHash(hash, p);
	
	imprimeHash(hash);
	
	printf("\nresultado busca = %s", busca(hash, 111)->nome);
	excluir(hash, 123);
	
	imprimeHash(hash);
	return 0;
}


