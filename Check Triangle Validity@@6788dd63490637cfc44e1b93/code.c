#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    (a*a+b*b==c*c)? printf("Valid"): printf("Invalid");
    return 0;
}