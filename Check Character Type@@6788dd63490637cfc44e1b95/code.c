#include <stdio.h>
#include<math.h>
int main(){
    char a;
    scanf("%c",&a);
    if(isint(a)){
        printf("Digit");
    }
    else if(ischar(a)){
        if(a=='a','e','i','o','u'){
            printf("Vowel");
        }
        else{printf("Consonent");}
    }
    else{printf("Special Character");}
    return 0;

}