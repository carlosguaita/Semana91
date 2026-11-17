#include <stdio.h>
#include <string.h>
#include "funciones.h"

float validarFloatRango(float a, float b){
    float num;
    int val;
    do{
        val = scanf("%f",&num);
        while ((getchar()!='\n'))
        if (num < a || num > b || val != 1)
        {
            printf("Error: el valor ingresado es incorrecto\n");
        }
        
    }while(num < a || num > b || val != 1);
    return num;
}

void leerCadena(char *cadena, int n){
    fgets(cadena,n,stdin);
    int len = strlen(cadena) - 1;
    cadena[len] = '\0';
}

void registrarLibro(Libro *libros, ){
    
}