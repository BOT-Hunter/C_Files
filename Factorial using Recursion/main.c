#include <stdio.h>

int fibonacci(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    int num;
    god:
    printf("Please Enter a number: ");
    scanf("%d", &num);
    printf("The fibonacci series is: \n");
    for(int i=0;i<num;i++){
        printf("%d ", fibonacci(i));
    }
    printf("\n\n");
    goto god;
    return 0;
}
