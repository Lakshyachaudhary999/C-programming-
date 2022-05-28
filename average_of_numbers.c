#include <stdio.h>

int average();

void main(){
    printf("%d",average());
}

int average(){
    int i,a,n,average,sum=0;
    printf("How many numbers you'll enter = ");
    scanf("%d",&a);
    for(i=0;i<a;i++){
        printf("Enter number = ");
        scanf("%d",&n);
        sum+=n;
    }
   return sum/a;
}