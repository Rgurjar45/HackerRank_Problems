#include <stdio.h>

int main() {

    float n;
    scanf("%f",&n);
    if(n>0 && n<=100){
        printf("The electricity bill is: %.2f.",(n*5)-(n*5)*10/100);       
    }
    else if(n>100 && n<=300){
        if(n<=200){
            printf("The electricity bill is: %.2f.",450+((n-100)*7-((n-100)*7)*10/100));
        }
        
        else{
            printf("The electricity bill is: %.2f.",500+((n-100)*7));
        }
    }
    
    else if(n>300){
        printf("The electricity bill is: %.2f.",1900+((n-300)*10));
    }
    
    else{
        printf("Invalid Input!");
    }
    return 0;
}