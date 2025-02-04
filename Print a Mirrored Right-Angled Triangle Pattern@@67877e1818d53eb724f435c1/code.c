#include <stdio.h>
#include<math.h>
int main(){
    int a;
    scanf("%d",&a);
    char X='*';
    for(int k=a;k>=0;k--){
        printf(" ");
    }
    for(int i=1;i<=a;i++){
        for(int j=1;j<=a;j++){
            printf("%c",X);
        }
        printf("\n");
    }
    return 0;
}