#include <stdio.h>

int main(){
    double length;
    scanf("What is the length of the rectangle?: %f\n", &length);
    double width;
    scanf("What is the width of the rectange?: %f\n", &width);
    printf(length * width);
}
