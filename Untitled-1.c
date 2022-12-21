#include <stdio.h>
#include <stdlib.h>

int main(void){
    int a;
    printf("Introduce un numero: ");
    while(scanf("%d", &a) != 1){
        // la entrada no fue un número? pregunta de nuevo:
        printf("Introduce un numero: ");
    }
    printf("Introduciste %d.\n", a);

    return EXIT_SUCCESS;
}
