#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int GCD;
    int arra[50] = {};
    int sizeOfarra = 0;
    int arrb[50] = {};
    int sizeOfarrb = 0;

    int d;
    int i;
start:
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    i = 0;
    d = 1;
    while(d<=a){
        if(a % d == 0){
            arra[i] = d;
            sizeOfarra++;
            i++;
        }
        d++;
    }

    i = 0;
    d = 1;
    while(d<=b){
        if(b % d == 0){
            arrb[i] = d;
            sizeOfarrb++;
            i++;
        }
        d++;
    }

    for(i = 0; i<sizeOfarra; i++){
        for(int j = 0; j<sizeOfarrb; j++){
            if(arra[i] == arrb[j])
                GCD = arra[i];
        }
    }

    printf("GCD of %d and %d is %d.\n", a, b, GCD);
    goto start;
    return 0;
}
