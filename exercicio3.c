//Escreva uma fun��o que remova todos os elementos com valores pares de uma lista encadeada.

int remover_pares(struct no **c){
struct no *p, *q;
if(*c==NULL){
    printf("LISTA VAZIA");
    return 0;
}
else{
    p=*c;
    q=*c;
    for(p=*c;p!=NULL;p=p->prox){
        if(p->dado%2==0){
            if(p==*c){
                *c=(*c)->prox;
                free(p);
                return 1;
            }
			else{
                q->prox=p->prox;
                free(p);
                
            }
        }
    }
}
