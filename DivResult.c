#include<stdio.h>
/*Divyaranjan Sahoo
Analysing result*/
int main(){
  int Maths,Prog,Lang,EGraph,Roll;float Avg;char Res;
  printf("\nEnter the roll number here ~ ");
  scanf("%d",&Roll);
  printf("\nEnter the marks in Maths ~ ");
  scanf("%d",&Maths);
  printf("\nEnter the marks in Language Lab ~ ");
  scanf("%d",&Lang);
  printf("\nEnter the marks in Programming Lab ~ ");
  scanf("%d",&Prog);
  printf("\nEnter the marks in E.Graphics ~ ");
  scanf("%d",&EGraph);
  Avg = (Maths+Prog+Lang+EGraph)/40;
  if (Avg>=9){Res = 'O';}
  else if (Avg<9 && Avg>=8){Res = 'E';}
  else if (Avg<8 && Avg>=7){Res = 'A';}
  else if (Avg<7 && Avg>=6){Res = 'B';}
  else{Res='F';}
  printf("\nRoll Number - %d ",Roll);
  printf("\nFinal Result - %c ",Res);
  return 0;}
