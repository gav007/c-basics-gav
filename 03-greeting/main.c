#include <stdio.h>

int main(void) {
    char name[50];
    int age;

    printf("Enter your name: ");
    scanf("%49s", name); 

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Hello, %s! You are %d years old.\n", name, age);
    return 0;   
}