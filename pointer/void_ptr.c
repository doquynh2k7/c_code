/*
* @Author: Quynh Do-Ngoc
* @Date:   2025/03/04 20:58
* @Last Modified by:   vbe_quynhdon
* @Last Modified time: 2025/03/04 21:34
*/
#include <stdio.h>
#include <stdlib.h>


void printValue(void *ptr, char type) {
    if (type == 'i')
        printf("Integer: %d\n", *(int *)ptr);
    else if (type == 'f')
        printf("Float: %.2f\n", *(float *)ptr);
    else if (type == 'c')
        printf("Character: %c\n", *(char *)ptr);
}


int main() {
    int num = 42;
    void *ptr = &num; // `void *` can point to any type, Store address of `num`

    printf("Address: %p\n", ptr);
    printf("Value: %d\n", *(int *)ptr); // Cast before dereferencing


    float pi = 3.14;
    char ch = 'A';

    //`void *` can point to any type
    printValue(&num, 'i');
    printValue(&pi, 'f');
    printValue(&ch, 'c');


    //dynamic allocation, int type
    void *dyn_ptr = malloc(sizeof(int)); // Allocate memory for an integer

    if (dyn_ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    *(int *)dyn_ptr = 100; // Store value
    printf("Dynamically allocated value: %d\n", *(int *)dyn_ptr);

    free(dyn_ptr); // Free memory

    //long type
    dyn_ptr = malloc(sizeof(long));

    if (dyn_ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    *(long *)dyn_ptr = 0x1234567890123; // Store value
    printf("Dynamically allocated value: 0x%lx\n", *(long *)dyn_ptr);

    free(dyn_ptr); // Free memory

    return 0;
}

