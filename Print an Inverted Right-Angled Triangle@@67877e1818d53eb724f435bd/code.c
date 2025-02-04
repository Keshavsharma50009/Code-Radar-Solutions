#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    char x='*';
    for(int i=a; i>0; i--)
    {for(int j=0;j<i;j++){printf(" %c",x);}
    printf("\n");}
    return 0;
}