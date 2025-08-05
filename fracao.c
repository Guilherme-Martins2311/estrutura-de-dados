#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int numerador;
    int denominador;
} Fracao;

Fracao criarFracao(int N, int D){
    Fracao F;
    F.numerador = N;
    F.denominador = D;
    return F;
}

int main() {
    
    Fracao F1 = criarFracao(7, 2);
    printf("O valor de f1 eh: %2.f.\n", (float)F1.numerador/F1.denominador);

    return 0;
}

