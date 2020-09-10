#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 5;
    int* ptr = &a;
    printf("Memory Address of variable a: \n%x\n%X\n%p", ptr, ptr, ptr);
    return 0;
}
