#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    char x='*';
    for(int i=1;i<a+1;i++){
        for(int j=1;j<=i-j;j++){
            printf(" ");
        }
        for(int k=1;k<=2*j-1;k++){
            printf(" %c",x);
        
        }
        printf("\n");
    }
    return 0;
}