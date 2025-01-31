//#include <stdio.h>
//#include<ctype.h>
//int main(){
    char a;
    scanf("%c",&a);
    if(isdigit(a)){
        printf("Digit");
    }
    else if(isalpha(a)){
        if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'){
            printf("Vowel");
        }
        else{printf("Consonant");}
    }
    else{printf("Special Character");}
    return 0;

//}
#include <stdio.h>
#include <ctype.h>

int main() {
    char a;
    
    // Read a character, skipping any potential newline left in buffer
    scanf("%c", &a);
    
    if (isdigit(a)) {
        printf("Digit");
    }
    else if (isalpha(a)) {
        // Check if it's a vowel
        if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || 
            a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U') {
            printf("Vowel");
        }
        else {
            printf("Consonant");
        }
    }
    else {
        printf("Special Character");
    }

    return 0;
}











