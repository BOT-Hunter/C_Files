#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a, b;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("Before Swapping:\n");
    printf("a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("After Swapping:\n");
    printf("a = %d, b = %d\n", a, b);
    return 0;
}
