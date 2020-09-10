#include <stdio.h>

int main(){
    char firstName[50], lastName[50];
    int age;
god:
    printf("Please enter your first name: ");
    scanf("%s", firstName);
    printf("Please enter your last name: ");
    scanf("%s", lastName);
    printf("Please enter your age: ");
    scanf("%d", &age);
    printf("\nYour name is %s %s.\n", firstName, lastName);
    printf("You are %d years old.\n\n", age);
    goto god;
    return 0;
}
