#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char c;
    scanf("%c",&c);
    if(isalpha(c)){
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E'' || c=='I' || c=='O' ||c=='U')
    {printf("Vowel");}
    else{printf("Consonant");}}

    else if(isdigit(ch)) {printf("Digit");}
    else{printf("Special Character");}

}