/*
* @Author: Quynh Do-Ngoc
* @Date:   2025/03/04 20:58
* @Last Modified by:   vbe_quynhdon
* @Last Modified time: 2025/03/04 21:13
*/
#include <stdio.h>

int main() {
    int arr[4] = {10, 20, 30, 40};
    int *ptr;

    int size = sizeof(arr) / sizeof(arr[0]); // Get number of elements
    printf("Array size: %d\n", size);

    ptr = arr;

    int i;
    for(i = 0; i<size; i++){
    	printf("ptr [%d] = 0x%x \n", i, ptr[i]);
    }

    return 0;
}