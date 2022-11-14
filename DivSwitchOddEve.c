#include<stdio.h>
/*Divyaranjan Sahoo
Odd-Even using switch*/
int main(){
  int Num,Div;
  printf("Enter the number here ~ ");
  scanf("%d",&Num);
  Div=Num%2;
  switch(Div){
    case 0:
      printf("\nThe input integer is an even number\n");
      break;
    case 1:
      printf("\nThe input integer is an odd number\n");
      break;
    default:
      printf("\nInvalid input, only integers allowed\n");
      break;}
  return 0;}
