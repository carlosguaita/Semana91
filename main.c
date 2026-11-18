#include <stdio.h>
#include "funciones.h"

int main (int argc, char *argv[]) {

    Libro libros[10];
    int opc, opc2;
    int cont=0;

    do{

        printf("Seleccione una opcion: \n");
        printf("1.Registrar libro\n");
        printf("2.Mostrar libros\n");
        printf("3.Buscar libro\n");
        printf("4.Prestar/devolver libro\n");
        printf("5.Eliminar libro\n");
        printf(">> ");
        opc = validarFloatRango(1,5);

        switch (opc)
        {
        case 1:
            registrarLibro(libros,&cont);
            break;
        case 2:
            mostrarLibro(libros,0,cont);
            break;
        case 3:
            int posicion = buscarLibro(libros,cont);
            if (posicion == -1){
                printf("No existe el libro buscado\n");
            }
            break;
        case 4:
            cambiarEstado(libros,cont);
            break;
        case 5:
            borrarLibro(libros,cont);
            break;
        default:
            break;
        }
        printf("Desea seleccionar otra opcion 1.Si/2.No: ");
        opc2 = validarFloatRango(1,2);
    }while(opc2==1);




    return 0;
}