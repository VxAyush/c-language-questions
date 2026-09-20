#include<stdio.h>
char grade(int marks){
    if(marks>=90){
        return'A';
    }
    else if(marks>=85){
        return'B';
    }
    else if(marks>=75){
        return'c';
    }
    else if(marks>=65){
        return'D';
    }
    else if(marks>=55){
        return'E';
    }
    else{
        return'F';
    }
    }
int main(){
    int marks;
    printf("enter marks: ",marks);
    scanf("%d",&marks);
    printf("%c\n",grade(marks));
}
