int isPrime(num){
    int v=1;
    for(int i=2;i<=num/2;i++){
        if(num%i==0){
            v=0;
            break;
        }
    }
    return v;
}