#include<stdio.h>
#include<math.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        int start=i%2;
        for(int j=0;j<=i;j++){
            printf(" %d",1-start);
            start=1-start;
        }
printf("\n");
    }
    return 0;
}