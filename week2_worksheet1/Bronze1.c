#include <stdio.h>

int main(){
    float a;

    printf("Please enter a number to check: ");
    scanf("%f", &a);

    if (a == 0){
        printf("The number you chose is zero\n");
    }

    else if (a < 0){
        printf("The number you chose is negative\n");
    }

    else{
        printf("The number you chose is positive\n");
    }
}