#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,r;
    scanf("%d",&a);
    r=~a;
    printf("%d",r);
    return 0;
}