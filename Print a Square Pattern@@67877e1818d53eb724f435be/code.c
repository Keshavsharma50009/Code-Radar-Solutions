#include <stdio.h>
#include<math.h>
int main(){
    int a;
    scanf("%d",&a);
    char x='*';
    for(int i=a;i<a+1;i++){
        for(int j=a;j<a+1;j++){
            printf("%c",x);
        }
        printf("\n");
    }
    return 0;
    }