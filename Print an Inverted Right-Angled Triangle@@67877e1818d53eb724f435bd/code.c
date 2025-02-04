#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int x='*';
    for(int i=a; i>0; i--)
    {printf("%c",x*i);}
    return 0;
}