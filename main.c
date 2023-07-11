#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

int main() {
    // Agregar productos establecidos al inicio
    FILE *archivo = fopen("productos.txt", "a");

    if (archivo == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return 1;
    }

    fprintf(archivo, "Agua,12,5.00\n");
    fprintf(archivo, "Jugo,11,6.00\n");

    fclose(archivo);

    int opcion;

    do {
        printf("\n----- MENU -----\n");
        printf("1. Ingresar producto\n");
        printf("2. Editar producto\n");
        printf("3. Eliminar producto\n");
        printf("4. Listar productos\n");
        printf("5. Salir\n");
        printf("Ingrese una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                ingresarProducto();
                break;
            case 2:
                editarProducto();
                break;
            case 3:
                eliminarProducto();
                break;
            case 4:
                listarProductos();
                break;
            case 5:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opcion invalida. Intente nuevamente.\n");
                break;
        }
    } while (opcion != 5);

    return 0;
}