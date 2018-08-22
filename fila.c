#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int vazia(fila* fila) {
	return fila->tamanho == 0;
}
int tamanho(fila *fila) {
	return fila->tamanho;
}
no* criaNo(int item) {
	no *novoNo = (no*)malloc(sizeof(no));
	novoNo->item = item;
	novoNo->proximo = NULL;
	return novoNo;
}
fila* criaFila() {
	fila *novaFila = (fila*)malloc(sizeof(fila));
	novaFila->cabeca = NULL;
	novaFila->cauda = NULL;
	novaFila->tamanho = 0;
	return novaFila;
}
void enfileira(int item, fila *fila) {
	no *novoNo = criaNo(item);
	if(vazia(fila)) {
		fila->cauda = novoNo;
		fila->cabeca = fila->cauda;
	} else {
		fila->cauda->proximo = novoNo;
		fila->cauda = novoNo;
	}
	fila->tamanho++;
}
int desenfileira(fila *fila) {
	if(vazia(fila)) {
		return -1;
	} else {
		int item = fila->cabeca->item;
		no *no = fila->cabeca;
		fila->cabeca = fila->cabeca->proximo;
		free(no);
		return item;
	}
}
int proximo(fila *fila) {
	if(vazia(fila)) {
		return -1;
	} else {
		return fila->cabeca->item;
	}
}
