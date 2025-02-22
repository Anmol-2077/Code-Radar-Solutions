#include <stdio.h>
int main(){
    int a,b;
    char op[1];
    scanf("%d %d %s",&a,&b,&op);
    if(op=="+"){printf("%d",a+b);}
    else if(op=="-"){printf("%d",a-b);}
    else if(op=="*"){printf("%d",a*b);}
    else if(op=="/"){printf("%d",a/b);}
    else{printf("error");}
    return 0;
}