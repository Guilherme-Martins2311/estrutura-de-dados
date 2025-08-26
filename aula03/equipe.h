#ifndef EQUIPE_H
#define EQUIPE_H

typedef struct {
    int Pos; // Posicao final da enquipe no CB2024
    char Estado[30];
    char Equipe[50]; // Nome do time
    int Pts;
    int J;
    int V;
    int E;
    int D;
    int GP; // Gols pro
    int GC; // Gols sofridos
    int SG; // Saldo de gols
}Time;

Time * LerDados(char * Arquivo);

#endif
