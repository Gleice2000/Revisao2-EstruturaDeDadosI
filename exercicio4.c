//Criar uma fun��o recursiva que retorne a soma dos elementos de um vetor de n elementos.

int soma(int v[], int tam){
    if(tam == 0) // caso base, vetor vazio
        return 0;
    else
        return v[tam - 1] + soma(v, tam - 1); // chamada recursiva
}

int main () {

    int vet[10] = {1,2,3,4,5,6,7,8,9,10};

    printf("Soma: %d\n", soma(vet, 10));

    return 0;
}
