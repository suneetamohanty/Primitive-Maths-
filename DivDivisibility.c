#include<stdio.h>
/*Divyaranjan Sahoo
divisiblity by 2 or 3 or 5 or 7 or not.*/
int main(){
  int Num;
  printf("\nEnter the number here ~ ");
  scanf("%d",&Num);

  if (Num%2==0){
    printf("\nThe number is divisible by 2\n");}

  if (Num%3==0){
    printf("\nThe number is divisible by 3\n");}

  if (Num%5==0){
    printf("The number is divisible by 5\n");}

  if (Num%7==0){
    printf("The number is divisible by 7\n");}

  else if (Num%2!=0 && Num%3!=0 && Num%5!=0 && Num%7!=0 ){
    printf("\nNumber is not divisible by 2,3,5 or 7\n");}
  }
