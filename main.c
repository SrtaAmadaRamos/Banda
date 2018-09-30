#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_BANDAS 5
#include "estruturas.c"
#include "prototipos.h"
#include "funcoes.c"

int main() {

	Banda bandas[MAX_BANDAS];
	int n, op;

	zeraBandas(bandas);

	while(1){		

		system("@cls|clear");

		printf("MENU\n");
		printf(" 1 - Cadastrar Banda\n");
		printf(" 2 - Buscar Banda por Tipo\n");
		printf(" 3 - Buscar Banda por Posição no Ranking\n");
		printf(" 4 - Buscar Banda\n");
		printf(" 5 - Mostrar todas as Bandas\n");
		printf(" 0 - Sair\n");

		printf(" => ");
		scanf("%d", &op);

		system("@cls|clear");
		switch(op){
			case 1:
				cadastraBanda(bandas);
				break;
			case 2:			
				exibeBandasPorTipo(bandas);
				break;
			case 3:
				exibeBandaPorPosicao(bandas);
				break;
			case 4:
				buscarBanda(bandas);
				break;
			case 5:
				mostrarBandas(bandas);
				break;
			case 0:
				printf("Encerrando...\n");
				exit(1);
				break;
			default:
				printf("Opção inválida!\n");
				pause();
				break;
		}

		getchar();

	}	

	return 1;
}