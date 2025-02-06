#include <stdio.h>
#include<nath.h>
int main(){
    int a;
    scanf("%d",&a);
    for(i=1;i<a+1;i++){
        for(j=1;j<=a-i;j++){
            printf(" %d",j);
        }
        printf("\n");
    }
    return 0;
}