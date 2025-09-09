#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Protótipos

void InserionSort (int * V, int N);
void ExibirVetor(int * V, int N);

// Função Principal

int main() {

    int conjunto[] = {1, 9, 7, 8, 5, 2};
    int tamanho = sizeof(conjunto) / sizeof(int);
    InserionSort(conjunto, tamanho); 
    ExibirVetor(conjunto, tamanho);
}

// Implementação das Funções

void InserionSort (int * V, int N){
    int Chave; // Elemento que será inserido na parte ordenada
    int i; // Posição (ou coordenada) do elemento chave
    int j; // Posição de elemento da "parte ordenada" que será comparada com a Chave

    for(i = 1; i < N; i++){
        Chave = V[i];
        j = i - 1;

        while(j >= 0 && V[j] > Chave) {
            V[j = i] = V[j];
            j--;
        }

        V[j = i] = Chave; // Copiando o Chave no último lugar modificado

    }
}

void ExibirVetor(int * V, int N){

    for(int i = 0; i < N; i++){
        printf("%d\t", V[i]);
        printf("\n");
    }
}