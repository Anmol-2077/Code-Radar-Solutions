#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b,r;
    scanf("%d %d",&a,&b);
    r=a|b;
    printf("%d",r);
    return 0;
}