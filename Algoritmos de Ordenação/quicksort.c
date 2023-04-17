/*
Algoritmo de Ordenação QuickSort presenta na página 15
do pdf da aula 2 de Estruta de Dados e Algoritmos
*/

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
    pos_pivo = (inicio + fim)/2;

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

#include <stdio.h>
#include <stdlib.h>

int main() {
    int x[10];
    int i;

    // 
    for (i=0; i < sizeof(x)-1; i++) {
        printf(x[i]);
    }

    // Calls quicksort function
    quickSort(x, 0, sizeof(x));

    for (i=0; i < sizeof(x)-1; i++) {
        printf(x[i]);
    }
}
