#include<stdio.h>
/*Divyaranjan Sahoo
Calculating electric bill*/
int main(){
  int ConsNo, Con;
  printf("\nEnter the Consumer number here ~ ");
  scanf("%d",&ConsNo);
  printf("\nEnter the no of units consumed ~ ");
  scanf("%d",&Con);
  float Cos;
  if (Con<=50){Cos = Con*3.75;}
  else if (Con<=200 && Con>50){Cos = 50*3.75+(Con-50)*4.50;}
  else if (Con<=300 && Con>200){Cos = (50*3.75)+(150*4.50)+(Con-200)*5.50;}
  else if (Con<=400 && Con>300){Cos = (50*3.75)+(150*4.50)+(100)*5.50+(Con-300)*6.50;}
  else if (Con>400){Cos = (50*3.75)+(150*4.50)+(100)*5.50+(100)*6.50+(Con-100)*8.00;}
  printf("\nElectric Bill");
  printf("\nCustomer Number: %d",ConsNo);
  printf("\nTotal Bill amount: %.3f\n",Cos);
  return 0;}
