#include <stdio.h>

float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}   

float multiply(float a, float b) {
    return a * b;
}


int main() {
    float firstNum;
    float secondNum;
    float sum;

    printf("Enter first number: ");
    scanf("%f", &firstNum);

    printf("Enter second number: ");
    scanf("%f", &secondNum);        

    
    printf("The sum of the numbers %f\n", add(firstNum, secondNum));
    printf("The numbers multiplied %f\n", multiply(firstNum,secondNum));
    printf("The numbers subtracted %f\n", subtract(firstNum,secondNum));

    return 0;

}