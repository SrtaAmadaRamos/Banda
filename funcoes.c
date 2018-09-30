void zeraBandas(Banda *bandas)
{
	for(int i = 0; i < MAX_BANDAS; i++)	{
		strcpy(bandas[i].nome, "Não cadastrada");
		strcpy(bandas[i].tipo, "Não cadastrada");
		bandas[i].n_integrantes = -1;
		bandas[i].posi_ranking = -1;
	}
}

void cadastraBanda(Banda *bandas)
{
	int i;

	printf("Posicão no Ranking: ");
	scanf("%d", &i);
	
	int posi = i - 1;
	bandas[posi].posi_ranking = i;

	getchar();

	printf("Nome da banda: ");
	gets(bandas[posi].nome);
	printf("Tipo da banda: ");
	gets(bandas[posi].tipo);
	printf("Numero de integrantes: ");
	scanf("%d", &bandas[posi].n_integrantes);
	printf("\n");
}

void mostrarBanda(Banda *bandas, int i)
{
	printf("Nome: %s\n", bandas[i].nome);
	printf("Tipo da banda: %s\n", bandas[i].tipo);
	printf("Numero de integrantes: %d\n", bandas[i].n_integrantes);
	printf("Posicão no Ranking: %d\n", bandas[i].posi_ranking);
	printf("\n\n");
}

void exibeBandaPorPosicao(Banda *bandas)
{
	int i;

	printf("Informe um ranking para a busca: ");
	scanf("%d", &i);
	printf("\n\n");
	i--;

	if(i > 0 && i < MAX_BANDAS) {
		mostrarBanda(bandas, i);
	} else {
		printf("Ranking inválido!\n");
	}

	pause();
}

void exibeBandasPorTipo(Banda * bandas)
{
	char tipo[80];
	int x = 0;
	getchar();
	printf("Informe um tipo para a busca: ");
	gets(tipo);
	printf("\n\n");
	for(int i = 0; i < MAX_BANDAS; i++){
		if( ! strcmp(bandas[i].tipo, tipo) ) {
			x = 1;
			mostrarBanda(bandas, i);
		}
	}

	if( !x ) {
		printf("Não foi encontrado bandas com o tipo informado!\n");
	}

	pause();
}

void buscarBanda(Banda *bandas)
{
	char nome[50];
	int encontrado = 0;
	getchar();
	printf("Informe um nome para a busca: ");	
	gets(nome);
	printf("\n\n");
	for(int i = 0; i < MAX_BANDAS; i++) {
		if( ! strcmp(bandas[i].nome, nome) ) {
			encontrado = 1;
			mostrarBanda(bandas, i);
			break;
		}
	}

	if( ! encontrado)
		printf("Essa banda não está entre suas favoritas!\n");
}

void mostrarBandas(Banda * bandas)
{
	for(int i = 0; i < MAX_BANDAS; i++)	{
		printf("Banda %d:\n", (i+1));
		printf("Nome: %s\n", bandas[i].nome);
		printf("Tipo da banda: %s\n", bandas[i].tipo);
		printf("Numero de integrantes: %d\n", bandas[i].n_integrantes);
		printf("Posicão no Ranking: %d\n", bandas[i].posi_ranking);
		printf("\n");
	}

	pause();
}

void pause()
{
	printf("Pressione qualquer tecla para continuar...\n");
	getchar();
}