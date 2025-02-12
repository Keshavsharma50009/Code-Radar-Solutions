#include <stdio.h>
#include<math.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=a-1;i>=0;i--){
        printf(" ");
        for(int i=1;i<=a;i++){
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}