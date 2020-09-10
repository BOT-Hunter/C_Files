#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* a = (int*)malloc(10 * sizeof(int));
    if(a == NULL){
        printf("Memory Allocation Failed!\n");
    }else{
        printf("Memory allocated successfully!\n");
    }
    free(a);
    if(a == NULL){
        printf("Memory Freed Successfully!\n");
    }else{
        printf("Memory not freed!\n");
    }
    return 0;
}


