#include<stdio.h>
/*Divyaranjan Sahoo
Arithmetic operations +-/*% */
int main(){
  int Alpha,Beta; float Res;
  char Div; int DivAlpha;
  printf("Input the first number ~ ");scanf("%d",&Alpha);
  printf("\nInput the second number ~ ");scanf("%d",&Beta);
  printf("\nArithmetic Operations to Manoeuvre");
  printf("\n1.Addition ~ +\n2.Substraction ~ -");
  printf("\n3.Multiplication ~ *\n4.Division ~ /\n");
  printf("5.Modulus ~ % \nEnter your choice: ");
  scanf(" %c",&Div);int DivInstance = Div;
  switch(DivInstance){
    case 43:Res = Alpha+Beta;printf("\nThe sum of numbers is %.2f\n",Res);break;
    case 45:Res = Alpha-Beta;printf("\nThe substraction result is %.2f\n",Res);break;
    case 42:Res = Alpha*Beta;printf("\nThe multiplication result is %.2f\n",Res);break;
    case 47:Res = Alpha/Beta;printf("\nThe division result is %.2f\n",Res);break;
    case 37:Res = Alpha%Beta;printf("\nThe modulus result is %.2f\n",Res);break;
    default:printf("Invalid Choice for operating the inputs");break;}
  return 0;}
