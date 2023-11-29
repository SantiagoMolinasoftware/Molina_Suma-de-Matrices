#include <stdio.h>
#include <stdlib.h>  // Para utilizar la funcion rand()

// Funcion para inicializar una matriz con numeros aleatorios entre 0 y 100
void inicializarMatriz(int filas, int columnas, int matriz[filas][columnas]) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz[i][j] = rand() % 101;  // Numeros aleatorios entre 0 y 100
        }
    }
}

// Funcion para sumar dos matrices y almacenar el resultado en otra matriz
void sumarMatrices(int filas, int columnas, int matriz1[filas][columnas], int matriz2[filas][columnas], int resultado[filas][columnas]) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

// Funcion para imprimir una matriz
void imprimirMatriz(int filas, int columnas, int matriz[filas][columnas], const char *nombre) {
    printf("\n%s:\n", nombre);
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int filas, columnas;

    // Obtener dimensiones de la matriz
    printf("Ingrese el numero de filas de las matrices: ");
    scanf("%d", &filas);
    printf("Ingrese el numero de columnas de las matrices: ");
    scanf("%d", &columnas);

    // Declarar matrices
    int matriz1[filas][columnas];
    int matriz2[filas][columnas];
    int resultado[filas][columnas];

    // Inicializar matrices con numeros aleatorios
    inicializarMatriz(filas, columnas, matriz1);
    inicializarMatriz(filas, columnas, matriz2);

    // Imprimir matrices originales
    imprimirMatriz(filas, columnas, matriz1, "Matriz 1");
    imprimirMatriz(filas, columnas, matriz2, "Matriz 2");

    // Sumar matrices
    sumarMatrices(filas, columnas, matriz1, matriz2, resultado);

    // Imprimir matriz resultante
    imprimirMatriz(filas, columnas, resultado, "Matriz Resultante");

    return 0;
}