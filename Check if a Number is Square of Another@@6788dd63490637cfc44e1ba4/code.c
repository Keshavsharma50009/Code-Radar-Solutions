#include <stdio.h>
#include<math.h>
int main(){
    double a,b;
    scanf("%ld %ld",&a,&b);
    if(pow(a, 2)==b&&pow(b, 2)==a){printf("Yes");}
    else{printf("No");}
    return 0;
}