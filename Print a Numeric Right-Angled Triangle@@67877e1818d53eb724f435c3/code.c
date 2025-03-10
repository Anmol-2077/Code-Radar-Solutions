#include <stdio.h>
int main(){
    int n,i,k,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        k=1;
        for(j=1;j<=i;j++){
            printf("%d",k++);
        }
        printf("\n");
    }
    return 0;
}