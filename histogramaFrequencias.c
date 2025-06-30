/*
Objetivo : Contar cuántas veces aparece cada carácter en el input y mostrar un histograma

Histograma: representación gráfica de una variable en forma de barras

El programa imprime por pantalla un histograma de la frecuencia de carácteres del input

Esta version dibuja el gráfico de forma horizontal

Los caracteres en C se representan con un valor ASCII correspondiente, los cuales son consecutivos
'A' = 65     → 'Z' = 90  
'a' = 97     → 'z' = 122  
'Diferencia = 32'

*/
#include <stdio.h>

int main(){
    #define MAX_LONGITUD 25 // Longitud maxima del array, representa la cantidad de letras del abecedario (sin ñ) 
    int histograma[MAX_LONGITUD];
    int c;

    for (int i = 0; i < MAX_LONGITUD; ++i){      // Inicializo el array para que todos los valores iniciales sean 0
        histograma[i] = 0;
    }

    while ((c = getchar()) != EOF){
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
            if (c >= 'A' && c <= 'Z'){
                c = c + 32;
            }
            ++histograma[c - 'a'];          //Incrementa el valor almacenado, donde el indice representa cada caracter
        }                                    // siendo a = 0, b = 1, ..., z = 24
    }

    for (int i = 0; i < MAX_LONGITUD; ++i){
        printf(" %d", histograma[i]);
    }
    printf("\n");
    return 0;
}
