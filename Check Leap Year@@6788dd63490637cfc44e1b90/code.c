#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if (a%4==0){printf("Leap Year");}
    else if (a%4!=0){
        printf("Not Leap Year");
    }
    else{printf("Leap Year");}
    return 0;
}