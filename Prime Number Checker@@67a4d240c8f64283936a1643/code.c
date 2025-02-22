#include <stdio.h>
int main(){
    int n,x,v;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        v=1;
        scanf("%d",&x);
        for(int j=2;j<=x/2;j++){
            if(x%j==0){
                v=0;
                break;
            }
        }
        if(v==0){printf("0");}
        else if(v==1){printf("1");}
    }
    return 0;
}