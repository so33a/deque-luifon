#ifndef FILA_H
#define FILA_H

typedef struct node * link;
struct node {
  int item;
  link next;
};

typedef struct {
  link maisAntigo;
  link maisNovo;
} * FILA;

link novoNo(int item, link next);
FILA novaFila();
void inserir_FIM(FILA f, int e);
void inserir_COMECO(FILA f, int e);
int remover_COMECO(FILA f);
int remover_FIM(FILA f);
void imprimirFila(FILA f);
void destroiFila(FILA f);
int filaVazia(FILA f); 

#endif 
