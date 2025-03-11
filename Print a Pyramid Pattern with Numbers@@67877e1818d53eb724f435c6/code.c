#include <stdio.h>
int main(){
    int n,v;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        v=1;
        for(int j=n-1;j>=i;j--){printf(" ");}
        for(int j=1;j<=i;j++){
            printf("%d ",v++);
        }
        printf("\n");
    }
    return 0;

}