#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(char i=1;i<=a;i++){
        for(char j=1;j<=i;j++){
            printf("%c ",'A'+j-1);
        }
        printf("\n");
    }
    return 0;
}