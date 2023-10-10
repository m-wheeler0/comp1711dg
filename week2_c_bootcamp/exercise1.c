#include <stdio.h>

int main(){
    printf("What is the length of the rectangle?: ");
    double length;
    scanf("%lf\n", &length);

    printf("What is the width of the rectange?: ");
    double width;
    scanf("%lf\n", &width);

    printf("The area of the rectangle is: %f\n",length * width);
}
