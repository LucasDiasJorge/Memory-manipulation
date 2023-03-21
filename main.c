#include <stdio.h>
#include <stdlib.h>

void stack_example() {
    int a = 42;
    char b[1024]; // aloca 1024 bytes na stack
    printf("a: %d\n", a);
    printf("b: %p\n", b); // imprime o endereço na memória do array
}

void heap_example() {
    int* c = malloc(sizeof(int)); // aloca um inteiro na heap
    char* d = malloc(1024); // aloca 1024 bytes na heap
    *c = 42;
    printf("*c: %d\n", *c);
    printf("d: %p\n", d); // imprime o endereço na memória do array
    free(c);
    free(d);
}

int main() {
    stack_example();
    heap_example();
    return 0;
}
