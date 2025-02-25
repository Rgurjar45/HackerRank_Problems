#include <stdio.h>

int main() {

   float inc,br1,br2,br3,tax;
    br1 = 250000;
    br2 = 500000;
    br3 = 1000000;
    scanf("%f",&inc);
    
    if(inc <= br1){
        tax = 0;
    printf("%.2f",tax);
        }
    
    else if(inc <= br2){
        tax = ((inc-250000)*5/100);
        printf("%.2f",tax);
    }
    
    else if(inc <= br3){
        tax = (250000*5/100) + ((inc - 500000)*20/100);
        printf("%.2f",tax);
    }
    
    else if(inc > br3){
        tax = (250000*5/100) + (500000*20/100) + ((inc - 1000000)*30/100);
        printf("%.2f",tax);
        }
    
    else{
        printf("INVALID");
    }
    
    return 0;
}