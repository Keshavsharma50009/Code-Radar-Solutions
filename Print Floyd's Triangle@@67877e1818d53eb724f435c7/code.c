#include <stdio.h>
#include<math.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        for(int j=0;j<=i;j++){
            printf(" %d",j+1);
        }
        printf("\n");
    }
    return 0;
}