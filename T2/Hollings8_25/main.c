#include <stdio.h>
#include <stdlib.h>

void intercambiar(char **x, char **y)
{

    char *aux = *x;
    *x=*y;
    *y=*x;

    *y=aux;


}

void array_de_cadenas(char ** vector, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (strcmp(vector[j],vector[j+1])<0)
            {
                intercambiar(&vector[j], &vector[j+1]);

            }
        }
    }

}

int main()
{
    printf("Hello world!\n");
    return 0;
}
