/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseguti <joseguti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 15:20:51 by joseguti          #+#    #+#             */
/*   Updated: 2024/06/02 16:11:40 by joseguti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> // Para la función write

#define MAP_SIZE 4

// Función para imprimir el mapa
void printMap(int map[MAP_SIZE][MAP_SIZE]) {
    for (int i = 0; i < MAP_SIZE; ++i) {
        for (int j = 0; j < MAP_SIZE; ++j) {
            char c = map[i][j] + '0'; // Convertir a carácter
            write(STDOUT_FILENO, &c, 1); // Escribir en la salida estándar
            write(STDOUT_FILENO, " ", 1); // Espacio entre números
        }
        write(STDOUT_FILENO, "\n", 1); // Nueva línea
    }
}

// Función para verificar si una caja puede colocarse en una posición específica
int isValidPlacement(int map[MAP_SIZE][MAP_SIZE], int row, int col, int height) {
    // Verificar fila y columna
    for (int i = 0; i < MAP_SIZE; ++i) {
        if (map[row][i] == height || map[i][col] == height) {
            return 0; // Falso
        }
    }
    return 1; // Verdadero
}

// Función para resolver el problema
int solveMap(int map[MAP_SIZE][MAP_SIZE], int visibility[]) {
    // Base case: si hemos colocado todas las cajas
    if (visibility[0] == -1) {
        return 1; // Verdadero
    }

    int row = visibility[0] / 10;
    int col = visibility[0] % 10;

    for (int height = 1; height <= MAP_SIZE; ++height) {
        if (isValidPlacement(map, row, col, height)) {
            map[row][col] = height;
            visibility[0] = visibility[1]; // Siguiente punto de vista
            if (solveMap(map, visibility)) {
                return 1; // Verdadero
            }
            map[row][col] = 0; // Retroceder si no encontramos solución
        }
    }
    return 0; // Falso
}

int main(int argc, char* argv[]) {
    if (argc != 17) {
        write(STDOUT_FILENO, "Error\n", 6); // Escribir en la salida estándar
        return 1;
    }

    int map[MAP_SIZE][MAP_SIZE] = {0};
    int visibility[2]; // Dos puntos de vista (izquierda/derecha y arriba/abajo)

    for (int i = 0; i < 16; ++i) {
        visibility[i / 8] = atoi(argv[i + 1]); // Convertir argumentos a enteros
    }

    if (solveMap(map, visibility)) {
        printMap(map);
    } else {
        write(STDOUT_FILENO, "No solution found.\n", 19);
    }

    return 0;
}
