/*
Algoritmo de Ordenação QuickSort presenta na página 15
do pdf da aula 2 de Estruta de Dados e Algoritmos
*/

#include <stdio.h>
#include <stdlib.h>

void troca(int x[], int i, int j) {
    int aux;

    // Changes with auxiliar variable
    aux = x[i];
    x[i] = x[j];
    x[j] = aux;
}

int particao(int x[], int inicio, int fim) {
    // Declare variables
    int pos_pivo, pivo, i, j;

    // Calculates pivot position
    pos_pivo = (int)(inicio + fim)/2;

    // Atributes pivot value to the auxiliar variable
    pivo = x[pos_pivo];

    // Defines the start and end for the while loop
    i = inicio - 1;
    j = fim + 1;

    while (i < j) {
        // Searchs for smaller values to the pivot's right
        do {
            j -= 1;
        }            
        while (x[j] <= pivo);

        // Searchs for bigger values to the povit's left
        do {
            i += 1;
        }
        while (x[i] >= pivo);

        // Exchanges the bigger and smaller value's position
        if (i < j) {
            troca(x, i, j);
        }
    }

    return j;
}

void quickSort(int x[], int inicio, int fim){
    int div;
    if (inicio < fim){
        div = particao(x, inicio, fim);
        quickSort(x, inicio, div);
        quickSort(x, div+1, fim);
    }
}


int main() {
    int x[10] = {5, 9, 4, 6, 8, 1, 3, 11, 15, 7};
    int i;

    // 
    for (i=0; i < (int)(sizeof(x)/4); i++) {
        printf("%d", x[i]);
    }

    // Calls quicksort function
    quickSort(x, 0, (int)sizeof(x)/4);

    for (i=0; i < (int)(sizeof(x)/4); i++) {
        printf("%d", x[i]);

    return 0;
    }
}
