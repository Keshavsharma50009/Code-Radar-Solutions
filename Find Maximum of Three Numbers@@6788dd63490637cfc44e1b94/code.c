#include <stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    sacnf("%d %d %d",&a, &b, &c);
    if (a>b,c){
        printf("%d",a);
    }
    else if (b>a,c){
        printf("%d",b);
    }
    else{printf("%d",c)}
    return 0;
}