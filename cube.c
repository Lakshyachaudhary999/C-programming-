#include <stdio.h>

int cube(int *a);

void main(){
    int a;
    printf("Enter any number = ");
    scanf("%d",&a);
    printf("%d",cube(&a));
}

int cube(int *a){
    int b,answer=1;
    scanf("%d",&b);
    for(int i=0;i<b;i++){
        answer = answer*(*a);
    }
    return answer;
}