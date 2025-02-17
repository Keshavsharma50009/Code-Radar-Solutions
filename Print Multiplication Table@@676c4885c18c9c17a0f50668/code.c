#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    
    for(int i=1;i<=10;i++){
        int pro=a*i;
        printf("%d x %d = %d",a,i,pro);
        printf("\n");
    }
    return 0;
}