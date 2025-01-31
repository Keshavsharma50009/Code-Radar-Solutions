#include <stdio.h>
#include<math.h>
int main(){
    int a;
    scanf("%d",&a);
    if(int(a)){
        printf("Digit");
    }
    else if(char(a)){
        if(a=='a','e','i','o','u'){
            printf("Vowel");
        }
        else{printf("Consonent");}
    }
    else{printf("Special Character");}
    return 0;

}