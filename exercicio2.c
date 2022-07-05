//Escreva uma fun��o que verifique se uma lista encadeada que cont�m n�meros inteiros est� em ordem crescente(Menores no in�cio, maiores ao fim).

void inserirOrd (struct ListaSimplesEnc *pList, int v){
	struct Nodo *novo;
	novo = (struct Nodo*) malloc (sizeof (struct Nodo));
	novo -> info = v;
	
	struct Nodo *pAtu, *pAnt;

	pAnt = NULL;
	pAtu = pList -> prim;

	while ( pAtu != NULL && pAtu->info < v){

		pAnt = pAtu;
		pAtu = pAtu -> prox;
	}

	novo -> prox = pAtu -> prox;
	pAnt -> prox = novo;
}

