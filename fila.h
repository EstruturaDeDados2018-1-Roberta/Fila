typedef struct Fila fila;
typedef struct No no;
struct No {
	int item;
	no *proximo;
};
struct Fila {
	no *cabeca;
	no *cauda;
	int tamanho;
};

int vazia(fila* fila);
int tamanho(fila *fila);
fila* criaFila();
void enfileira(int item, fila *fila);
int desenfileira(fila *fila);
int proximo(fila *fila);
