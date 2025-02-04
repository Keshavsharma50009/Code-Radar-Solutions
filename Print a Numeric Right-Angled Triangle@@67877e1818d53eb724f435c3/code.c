#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    int x;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=a-i; j++){
            printf("%d",x);
        }
        printf("\n");
    }
    return 0;
}