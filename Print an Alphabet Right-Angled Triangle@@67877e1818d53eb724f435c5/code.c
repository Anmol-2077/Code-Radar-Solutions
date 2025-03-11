#include <stdio.h>
int main(){
    int n,v;
    scanf("%d",&n);
    for(int i=65;i<=65+n;i++){
        v=65
        for(int j=1;j<=i;j++){
            printf("%c ",v++);
        }
        printf("\n");
    }
    return 0;

}