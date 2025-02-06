#include <stdio.h>
#include<math.h>
int main(){
    int a;
    scanf("%d",&a);
    for (int i=0;i<a+1;i++){
        for(int j=1;j<=i;j++){
            printf(" %c",'A'+j-1);
        }
        printf("\n");
    }
    return 0;
}