// implementando o algoritimo de pesquisa sequencial

#include <stdio.h>
#include <stdlib.h>

#define ERRO -1

int PesquisaSequencial(int * V, int N, int Chave);

int main() {
    int numeros[] = {
        14, 29, 37, 11, 43, 25, 19, 32, 16, 22,
        40, 13, 28, 35, 10, 45, 20, 38, 17, 24,
        30, 41, 15, 27, 33, 18, 26, 39, 12, 21
    };

    int tamanho = sizeof(numeros)/sizeof(int);
    int elemento = 35;
    int posicao = PesquisaSequencial(numeros, tamanho, elemento);
    printf("%d\n", posicao);

    

    return 0;
}

// Implementação...

int PesquisaSequencial(int * V, int N, int Chave){

int i;
for(i = 0; i < N; i++){
    if(V[i] == Chave){
        return i; // O elemento chave foi encontrado no vetor
    }
}
return ERRO;
}