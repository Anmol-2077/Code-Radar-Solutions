#include <stdio.h>
int main(){
    int n,v=1;
    scanf("%d",&n);
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            v=0;
            break;
        }
    }
    (v==1)? printf("Prime"):printf("Not Prime");
    return 0;
}