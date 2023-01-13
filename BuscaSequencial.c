#include <stdio.h>
#include <stdbool.h>

int main(){

    // Algoritimo para vetor não ordenado
    int i = 0, busca = 9, x[] = {2, 9, 10, 15, 49, 39, 27} ;
    bool achou = false ;

    printf("Valores da Lista: ") ;
    int o = 0 ;
    for (o=0; o < sizeof(x); o++){
        printf("%i, ", x[o]) ;
    }

    while (i <= sizeof(x) && achou == 0) {
        if (busca == x[i]) {
            achou = true ;
        }
        else {
            i += 1;
        }
    };

    if (achou == true) {
        printf("\nValor encontrado na °%i posição\n", i+1) ;
    }
    else {
        printf("\nValor não encontrado.\n") ;
    }

    // Algoritimo para vetor ordenado
    int i = 0, busca = 9, x[] = {2, 9, 10, 15, 49, 39, 27} ;
    bool achou = false ;

    printf("Valores da Lista: ") ;
    int o = 0 ;
    for (o=0; o < sizeof(x); o++){
        printf("%i, ", x[o]) ;
    }

    while (i <= sizeof(x) && achou == 0 && busca >= x[i]) {
        if (busca == x[i]) {
            achou = true ;
        }
        else {
            i += 1;
        }
    };

    if (achou == true) {
        printf("\nValor encontrado na °%i posição\n", i+1) ;
    }
    else {
        printf("\nValor não encontrado.\n") ;
    }
}