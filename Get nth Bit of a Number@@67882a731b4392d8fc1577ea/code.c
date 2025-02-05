#include <stdio.h>

int main() {
    int a,n,val;
    scanf("%d %d",&a,&n);
    val=(a>>n) &1;
    printf("%d",val);
    return 0;

    
}