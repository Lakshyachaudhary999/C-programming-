#include <stdio.h>
void main(){
    int n=0,limit;
    printf("Enter the limit till you want to check the natural numbers = ");
    scanf("%d",&limit);
    do{
        printf("Natural Numbers %d\n",n);
        n++;
    }while (n<=limit);
    
}