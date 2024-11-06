/*

git add calculator.c
git commit -m "Description of changes" - to update git project

gcc calculator.c -o calculator
./calculator                           - to compile


*/

#include <stdio.h>

float add(float a, float b)      { return a + b; }
float substract(float a, float b){ return a - b; }
float multiply(float a, float b) { return a * b; }
float devide(float a, float b)   { 
    if (b == 0) {
        printf("Error: Division by zero.\n");
        return 1;
    }
    return a / b;
}

int main(){

    int operation;
    float a, b;

    printf("This is a simple line based calculator\n");
    printf("Avaible operations: 0 - exit; 1 - add; 2 - substract; 3 - multiply; 4 - devide\n>_");

    scanf("%i", &operation);

    if(operation != 0){
        printf("A:\n");
        scanf("%f", &a);
        printf("B:\n");
        scanf("%f", &b);
    }
    

    switch(operation){

        case 0:
            exit(0);
            break;
        
        case 1:
            printf("output: %.2f", add(a, b));
            break;

        case 2:
            printf("output: %.2f", substract(a, b));
            break;

        case 3:
            printf("output: %.2f", multiply(a, b));
            break;

        case 4:
            printf("output: %.2f", devide(a, b));
            break;

        default:
            printf("invalid operation");
    }
    printf("\n");

    return 0;
}