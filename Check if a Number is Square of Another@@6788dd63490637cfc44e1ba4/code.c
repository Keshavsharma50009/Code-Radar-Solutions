#include <stdio.h>
#include<math.h>
int main(){
    int a,b;
    scanf("%ld %ld",&a,&b);
    if((a*a)==b&&(b*b)==a){printf("Yes");}
    else{printf("No");}
    return 0;
}