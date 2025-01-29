#include <stdio.h>

void function(){
    int a;
    scanf("%d",&a);
    if(a >> 31 & 1){
        printf("Set");
    }
    else{printf("Not Set");}
    return 0;
}
int main(){
    function();
}