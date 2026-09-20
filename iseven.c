#include<stdio.h>
int iseven(int n){
    if(n%2 == 0){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int n;
    printf("enter to check even or not: ");
    scanf("%d",&n);
    if(iseven(n)){
        printf("yes\n");
    }
    else{
        printf("No\n");
    
    }
}
