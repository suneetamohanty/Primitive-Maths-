#include<stdio.h>
/*Divyaranjan Sahoo
Arithmetic operations */
int main(){
  int Alpha,Beta,Div;
  float Res;
  printf("Input the first number ~ ");
  scanf("%d",&Alpha);
  printf("\nInput the second number ~ ");
  scanf("%d",&Beta);
  printf("\nArithmetic Operations to Manoeuvre");
  printf("\n1.Addition\n2.Substraction");
  printf("\n3.Multiplication\n4.Division\n");
  printf("5.Modulus\nEnter your choice: ");
  scanf("%d",&Div);
  switch(Div){
    case 1:
      Res = Alpha + Beta;printf("\nThe sum of numbers is %.2f\n",Res);break;
    case 2:
      Res = Alpha - Beta;printf("\nThe substraction result is %.2f\n",Res);break;
    case 3:
      Res = Alpha*Beta;printf("\nThe multiplication result is %.2f\n",Res);break;
    case 4:
      Res = Alpha/Beta;printf("\nThe division result is %.2f\n",Res);break;
    case 5:
      Res = Alpha%Beta;printf("\nThe modulus result is %.2f\n",Res);break;}
  return 0;}
