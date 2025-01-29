#include <stdio.h>

void function(){
    int a;
    scanf("%ld",&a);
    if(a||1){
        printf("Set");
    }
    else{printf("Not Set");}
    return 0;
}
int main(){
    function()
}