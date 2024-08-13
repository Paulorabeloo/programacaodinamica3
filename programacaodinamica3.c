#include<stdio.h>
#include<stdlib.h>

typedef struct no
{
    int codigo;
    char nome[30];
    struct no *next;
} no;
    struct no *A, *B, *inicio;

int main()
{
    A = NULL;
    B = NULL;
    inicio = NULL;

    // lista simplesmente encadeada
    for(int i=0; i<10; i++)
    {
        if(inicio == NULL)
        {
            A = (no*)malloc(sizeof(no));
            printf("Informe o codigo\n");
            scanf("%d", &A -> codigo);
            printf("Informe o nome\n");
            scanf("%s", &A -> nome);

            inicio = A;
            B = A;
            A -> next = NULL;
        }
        else
        {
            A = (no*)malloc(sizeof(no));
            printf("Informe o codigo:\n");
            scanf("%d", &A -> codigo);
            printf("Informe o nome:\n");
            scanf("%s", &A -> nome);

            B -> next = A;
            B = A;
            A -> next = NULL;
        }
    }
    B= inicio; // ponteiro sentinela
    while (B != NULL)
    {
        printf("\n Codigo: %d", B -> codigo);
        printf("\n nome: %s\n", B -> nome);
        printf("%p Endereço do Ponteiro\n", B); //p só endereço
        B = B -> next;
    }
return 0;
}
