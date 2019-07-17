#include <stdio.h>
#include <stdlib.h>

int main()
{

    int **matrix;

    printf("Introduzca el tamano de cada dimension de la matriz. \n");
    int n;
    int dim1;
    int dim2;
    printf("Dimension 1: ");
    scanf("%d", &dim1);
    printf("Dimension 2: ");
    scanf("%d", &dim2);

    matrix = (int **) malloc(dim1*sizeof(int*));

    for(int i=0; i<n; i++)
    {

        matrix[i]= (int*)malloc(dim2*sizeof(int));
    }

    for(int i=0; i<dim1; i++)
    {
        for(int j=0; j<dim2; j++)
        {
            matrix[i][j]= rand();
            //Usar funcion random
            if(matrix[i][j]>9||matrix[i][j]<0)
            {
                matrix[i][j]= rand();
            }
            //Este if define el rango del numero asignado al espacio en la matriz entre 0 y 9.
            printf(" %i ",&matrix[i][j]);
            //Imprime el numero de la matriz en cada espacio de la columna.
        }
        printf("\n");
        //Cambia de columna para escribir la otra
    }
    return 0;
}
