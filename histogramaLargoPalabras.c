#include <stdio.h>
/*
Histograma: representación gráfica de una variable en forma de barras

El programa imprime por pantalla un histograma del largo de las palabras del input

Esta version dibuja el gráfico de forma horizontal
*/

int main(){
    #define MAX_LONGITUD 12 // Defino tamaño maximo de las palabras siendo 20 el largo máximo de una palabra
    int histograma[MAX_LONGITUD];
    int c, cant_caracteres = 0;

    for (int i = 0; i < MAX_LONGITUD; ++i){      // Inicializo el array para que todos los valores iniciales sean 0
        histograma[i] = 0;
    }

    while ((c = getchar()) != EOF){
        if(c != ' ' && c != '\n' && c != '\t')
            ++cant_caracteres;
        else {
            if (cant_caracteres > 0){
                if (cant_caracteres <= MAX_LONGITUD){
                    ++histograma[cant_caracteres - 1];
                }
                else {
                    ++histograma[MAX_LONGITUD - 1];
                }
                cant_caracteres = 0;  // ← ahora sí, en el lugar correcto
            }           
        }

    }
 
    for (int i = 0; i < MAX_LONGITUD; ++i){

        if (i == MAX_LONGITUD - 1) {
            printf("%3d+: ", i + 1);
        }
        else{
            printf("%3d:  ", i + 1);
        }
        for(int j = 0; j < histograma[i]; ++j){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}