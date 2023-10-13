// Simular la herencia genética del tipo de sangre.

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Cada persona tiene dos padres y dos alelos
typedef struct persona
{
    struct persona *padres[2];
    char alelos[2];
}
persona;

const int GENERACIONES = 3;
const int LONGITUD_INDENTACION = 4;

persona *crear_familia(int generaciones);
void imprimir_familia(persona *p, int generacion);
void liberar_familia(persona *p);
char alelo_aleatorio();

int main(void)
{
    // Inicializar generador de números aleatorios
    srand(time(0));

    // Create a new family with three generations
    persona *p = crear_familia(GENERACIONES);

    // Imprimir el árbol genealógico de tipos de sangre.
    imprimir_familia(p, 0);

    // Liberar la memoria
    liberar_familia(p);
}

// Crear un nuevo individuo con `generaciones`
persona *crear_familia(int generaciones)
{
    // Por hacer: Asignar memoria para nueva persona

    // Generación con datos de padres
    if (generaciones > 1)
    {
        // Por hacer: Crear recursivamente historiales de tipos de sangre para padres.

        // Por hacer: Asigne aleatoriamente alelos infantiles según los padres
    }

    // Generación sin datos de padres
    else
    {
        // Por hacer: Asignar NULL a los punteros de los padres

        // Por hacer: Asignar alelos aleatoriamente
    }

    // Por hacer: Retornar la persona recién creada
    return NULL;
}

// Liberar a `p` y a todos los ancestros de `p`.
void liberar_familia(persona *p)
{
    // Por hacer: Manejar el caso base

    // Por hacer: Liberar a los padres

    // Por hacer: Liberar al hijo
}

// Imprimir cada miembro de la familia y sus alelos.
void imprimir_familia(persona *p, int generacion)
{
    // Manejar el caso base
    if (p == NULL)
    {
        return;
    }

    // Imprimir indentación
    for (int i = 0; i < generacion * LONGITUD_INDENTACION; i++)
    {
        printf(" ");
    }

    // Imprimir persona
    printf("Generacion %i, tipo de sangre %c%c\n", generacion, p->alelos[0], p->alelos[1]);
    print_family(p->padres[0], generacion + 1);
    print_family(p->padres[1], generacion + 1);
}

// Elige aleatoriamente un alelo de tipo sanguíneo.
char alelo_aleatorio()
{
    int r = rand() % 3;
    if (r == 0)
    {
        return 'A';
    }
    else if (r == 1)
    {
        return 'B';
    }
    else
    {
        return 'O';
    }
}
