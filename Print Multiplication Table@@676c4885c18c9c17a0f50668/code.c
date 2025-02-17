#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int pro=1;
    for(int i=1;i<=10;i++){
        int pro=pro*a;
        printf("%d x %d = %d",a,i,pro);
        printf("\n");
    }
    return 0;
}