#include <stdio.h>

int greatest(int a,int b,int c,int d);

int greatest(int a,int b,int c,int d){
    int greatest;
    if(a>b){
        if(a>c){
            if(a>d){
                greatest = a;
            }
            else{
                greatest = d;
            }
        }
        else if(c>d){
            greatest = c;
        }
        else{
            greatest = d;
        }
    }
    else if(b>c){
        if(b>d){
            greatest = b;
        }
        else{
            greatest = d;
        }
    }
    return greatest;
}
int main(){
    int a,b,c,d;
    scanf("%d %d %d %d",&a, &b, &c, &d);
    printf("%d",greatest(a,b,c,d));
    return 0;
}
