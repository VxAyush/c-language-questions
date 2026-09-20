#include<stdio.h>
int expen(int a,int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int main(){
    int A,B;
    printf("enter MRP: ");
    scanf("%d %d",&A, &B);
    printf("expensive one: %d\n",expen(A,B));
    return 0;  
}