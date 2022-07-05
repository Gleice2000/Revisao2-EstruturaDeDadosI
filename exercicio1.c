//Considerando uma lista encadeada, implemente a função: pesquisa() retornando 1 se o dado foi encontrada e 0 caso contrário.

#include <stdio.h>

int pesquisa(tlista l, tdado dado){
    l->fim= l->ini;
    
	if(l->fim!=NULL){
		if(l->fim == dado){
	     return 1;	
	    } else{
	     	l->fim = l->fim->prox;
		    
	}
  }
  return 0; 
}
