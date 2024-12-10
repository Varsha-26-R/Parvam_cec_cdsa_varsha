#include<stdio.h>
int main(){
    char alphabet;
    printf("enter any alphabet");
    scanf("%C",&alphabet);
    switch (alphabet)
    {
    case 'a': case 'e': case'i': case'o': case'u':    
    case 'A': case 'E': case'I': case'O': case'U':
        printf("you've enter the vowel");
        break;
    default:
        printf("you've enter the consonant or other charecter");
        break;        
    }
}