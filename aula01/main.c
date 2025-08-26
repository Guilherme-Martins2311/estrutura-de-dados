#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char Nome [150];
    char Telefone[20];
    char Endereco[200];
} Pessoa;

int main(int argc, char* argv[]){

    Pessoa X;

    strcpy(X.Nome, "Maria Alves");
 
    strcpy(X.Telefone, "(61) 12345-6789");

    strcpy(X.Endereco, "SHIS 12 23 13");

    printf("%s\n%s\n%s\n", X.Nome, X.Telefone, X.Endereco);

    return 0;
}