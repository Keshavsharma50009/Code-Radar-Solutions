#include <stdio.h>
int main(){
float a,b;
    char c;
    scanf("%f %f %c",&a, &b, &c);
    // if(c == '+'){
        // printf("%.0f", a + b);

    // }else if( c == '-'){
        // printf("%.0f",a - b);
    // }else if(c == '*'){
        // printf("%.0f",a * b);
    // }else if( c == '/'){
        // printf("%.0f",a / b);
    // }else{

    // }

    //if(c=='+'){printf("%.0f\n",a+b);}
    //else if (c=='-'){printf("%.0f\n",a-b);}
   // else if(c=='*'){printf("%.0f\n",a*b);}
   // else if (c=='/'){if((b!=0)){printf("%.0f\n",a/b);}
    //else{printf("Invalid\n");}}
    //else{printf("Invalid");}
    //return 0;
switch(c){
     case '+':
     printf("%.0f\n",a+b);
     break;
     case '-':
     printf("%.0f\n",a-b);
     break;
     case '*':
     printf("%.0f\n",a*b);
     break;
     case '/':
      printf("%.0f\n",a/b);
     break;
     default:
     printf("error");
}

    return 0;
}