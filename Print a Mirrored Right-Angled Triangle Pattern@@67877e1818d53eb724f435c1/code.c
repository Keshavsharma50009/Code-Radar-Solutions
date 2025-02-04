#include <stdio.h>
#include<math.h>
int main(){
    int a;
    scanf("%d",&a);
    char X='*';
    for(int i=1;i<=a;i++){
        for(int j=a;j<=0;j--){
            printf("%c",X);
        }
        printf("\n");
    }
    return 0;
}