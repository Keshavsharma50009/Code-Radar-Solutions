#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    int x;
    for(int i=1;i<=a;i++){
        for(int j=a;j>0; j--){
            printf("%d",x);
        }
        printf("\n");
    }
    return 0;
}