#include <stdlib.h>
#include "main.h"

int* allocateArray(int size) {
    int* arr = (int*)malloc(size * sizeof(int));
    if (arr == NULL) { 
        printf("Memory allocation failed.\n");
        exit(1); 
    }
    return arr; 
}

int main() {
    int size = 5;
    int* arr = allocateArray(size);
    printf("Memory allocated successfully.\n");


    free(arr);
    printf("Memory deallocated successfully.\n");

    return 0;
}
