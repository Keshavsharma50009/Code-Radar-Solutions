#include<stdio.h>
#include<math.h>
int main(){
int a;
scanf("%d",&a);
char x='*';

for(int j=1;j<a+1;j++){
    for(int i=1;i<=a-1;i++){
    printf(" ");
}
for(int i=1;i<=2*i-1;i++){
    printf("*");
}
printf("\n");
}
return 0;
}