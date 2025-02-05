#include <stdio.h>
int main() {
    int a,b,c;
    float f;

    scanf("%d %d %d",&a,&b,&c);
    f=a+b+c;
    printf("Average: %.2f",f/3);
    return 0;
}