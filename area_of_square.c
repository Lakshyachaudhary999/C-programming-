#include <stdio.h>
int area_of_square(int a){
   return a*a;
}
void main(){
    int a;
    printf("Enter the side of the square = ");
    scanf("%d",&a);
    printf("Area of the square = %d" , area_of_square(a));
}