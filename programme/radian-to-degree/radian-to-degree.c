// Write a program to convert radians to degrees. 
#include <stdio.h>
int main(){
    int radian; 
    printf("Radians: ");
    scanf("%d", &radian);
    printf("Degrees: %0.2f", radian*180/3.141592653589793);
    return 0;
}