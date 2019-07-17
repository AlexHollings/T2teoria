#include <stdio.h>
#include <stdlib.h>

// Comparar cada columna con la otra columna restando 1. for and if.


int vector(int arr[], int n)
{
    int i;
    int dup;
    int cont = 0;

    for (i = 0; i < n; i++)
    {
        for (j = i+1; j<n; j++)
            if(arr[i]== arr[j])
            {
                arr[i]= -5;
                arr[j]= -5;
                cont = cont +2;
            }
    }

    return cont;


}



int main()
{
    printf("Hello world!\n");
    return 0;
}
