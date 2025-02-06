#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n,tot=0;
    scanf("%d",&n);
    int i;
    for(i=1;i<=n;i++){
        tot+=i;
    }
    printf("%d",tot);
    return 0;
}