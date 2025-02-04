#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    char x='*';
    for(int i=1;i>a+1;i++){
        for(int j=a;j>1;j--){
            printf(" %c",x);
        }
        printf("\n");
    }
    return 0;
}