#include <stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    if(isdigit(a)){
        printf("Digit");
    }
    else if(isalpha(a)){
        if(a=='a','e','i','o','u'){
            printf("Vowel");
        }
        else{printf("Consonent");}
    }
    else{printf("Special Character");}
    return 0;

}