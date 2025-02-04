#include <stdio.h>
int main(){
int a;
scanf("%d",&a);
char x='*';
for(int i=0;i<a+1;i++){
    for(int j=i;j>0;j--){
     printf("%c", x);
    }
    printf("\n");
}
return 0;
}