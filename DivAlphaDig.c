#include<stdio.h>
/*Divyaranjan Sahoo
Alphabet or Digit*/
int main(){
  char Alpha;
    printf("Enter the character here ~ ");
    scanf("%c",&Alpha);
    int Beta = Alpha;
    Beta-=48;
    switch(Beta){
      case 0: case 1: case 2: case 3: case 4:
      case 5: case 6: case 7: case 8: case 9:
        printf("The character is a digit");break;
      default:
        switch(Alpha){
          case 'a': case 'e': case 'i': case 'o': case 'u':
          case 'A': case 'E': case 'I': case 'O': case 'U':
            printf("The character is a vowel alphabet");break;
        default:
          printf("The character is a consonant alphabet");break;}}
      return 0;}
