#include <stdio.h>

int sum(int a);

void main(){
    int n;
    printf("enter the value for n = ");
    scanf("%d",&n);
    printf("%d",sum(n));
}

int sum(int a){
    int result;
    if(a<0){
        return 0;
    }
    else{
        return a+sum(a-1);
    }
}