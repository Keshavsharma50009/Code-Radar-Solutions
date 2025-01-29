#include <stdio.h>
int main(){
    int a,n;
    scanf("%d%d",&a, &n);
    if ((a >> n)& 1){
        printf("1");
    }
    else{printf("0");}
    return 0;
}