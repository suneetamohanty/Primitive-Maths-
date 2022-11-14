#include<stdio.h>
/*Divyaranjan Sahoo
Counting Digits.*/
int main(){
  int Num;
  printf("\nEnter the number here ~ ");
  scanf("%d",&Num);
  Num/=10;
  if (Num==0){
    printf("Then number is single digit");}
  else if (Num!=0){
    Num/=10;
    if (Num==0){
      printf("The number has two digits");}
    else if (Num!=0){
      Num/=10;
      if (Num==0){
        printf("The number has three digits");}
      else if(Num!=0){
        Num/=10;
        if (Num==10){
          printf("The number has four digits");}
        else{
          printf("Number is more than four digits");
        }}}}
    return 0;}
