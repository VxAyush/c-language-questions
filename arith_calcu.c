#include<stdio.h>
int add(int A,int B){
    return A+B;
}
int sub(int A,int B){
    return A-B;
}

long long multi(int A,int B){
    return 1LL*A*B;
}

int div(int A,int B){
    return A/B;
}
int main(){
    int A,B;
    printf("enter a & b: ");
    scanf("%d %d",&A,&B);
    printf("%d\n",A+B);
    printf("%d\n",A-B);
    printf("%d\n",A*B);
    printf("%d\n",A/B);

}




