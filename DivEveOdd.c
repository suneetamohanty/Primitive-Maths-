#include<stdio.h>
/*Divyaranjan Sahoo
Odd even and div by 3,4.*/
int main(){
  int Num;
  printf("\nEnter the number here ~ ");
  scanf("%d",&Num);

  if (Num%2==0){
    if (Num%4==0){
      printf("The number is Even and Divisible by 4");
    }}

  if (Num%2!=0){
    if(Num%3==0){
      printf("The number is Odd and Divisible by 3");
    }}
  return 0;
  }
