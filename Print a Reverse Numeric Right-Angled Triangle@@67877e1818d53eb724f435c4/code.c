#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=0;i<=a;i++){
        for(int j=;j<=a-i;j++){
            printf(" %d",j);
        }
        printf("\n");
    }
    return 0;
}