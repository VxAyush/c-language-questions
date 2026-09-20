#include<stdio.h>
int isLeapyr(int year){
    if(year%400 == 0 ||(year%4 == 0 && year%100 != 0)){
        return 1;
    }
    else{
        return 0;
    }

}
int main(){
    int year;
    printf("enter the year: ",year);
    scanf("%d",&year);
    if(isLeapyr(year)){
        printf("Yes\n");
    }else{
        printf("No\n");
    }


}
