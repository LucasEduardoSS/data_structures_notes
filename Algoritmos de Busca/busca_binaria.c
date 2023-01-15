#include <stdio.h>
#include <stdbool.h>

int main(){
    int lista[] = {4, 7, 14, 59, 78, 93, 99} ;
    int i = 0, busca = 93, cont = 0, inicio = 0, fim ;
    bool achou = false ;

    fim = sizeof(lista)/sizeof(lista[0]); // Calcula o tamanho da lista
    int metade = (int)(fim - inicio)/2 ; // Calcula o meio da lista

    while (i <= sizeof(lista) && achou == false) {
        // Compara o numero procurado com a metade do intervalo
        if (busca == lista[metade]) {
            achou = true ;
        }
        else {
            // Verifica se o numero procurado é menor que a metade
            // e atualiza o intervalo
            if (busca < lista[metade]) {
                fim = metade - 1;
                metade = (int)(fim - inicio)/2 ;
            }
            // Atualiza o intervalo
            else {
                inicio = metade + 1;
                metade = (int)(inicio + fim)/2 ;
            }
        }
        cont += 1 ;
    }

    printf("O valor %d foi encontrado na posição %d depois de %d iterações.", busca, metade, cont) ;

    return 0 ;
}
