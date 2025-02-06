#include <stdio.h>
#include<nath.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=1;i<a+1;i++){
        for(int j=1;j<=a-i;j++){
            printf(" %d",j);
        }
        printf("\n");
    }
    return 0;
}