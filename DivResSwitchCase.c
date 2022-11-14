#include<stdio.h>
/*Divyaranjan Sahoo
Analysing result using switch case*/
int main(){
  int Maths,Prog,Lang,EGraph,Roll;float Avg;char Res;
  printf("\nEnter the roll number here ~ ");scanf("%d",&Roll);
  printf("\nEnter the marks in Maths ~ ");scanf("%d",&Maths);
  printf("\nEnter the marks in Language Lab ~ ");scanf("%d",&Lang);
  printf("\nEnter the marks in Programming Lab ~ ");scanf("%d",&Prog);
  printf("\nEnter the marks in E.Graphics ~ ");scanf("%d",&EGraph);
  Avg = (Maths+Prog+Lang+EGraph)/40;
  int Div=Avg;
  switch(Div){
    case 9: Res = 'O'; break;
    case 8: Res = 'E'; break;
    case 7: Res = 'A'; break;
    case 6: Res = 'B'; break;
    default: Res = 'F'; break;}
  printf("\nRoll Number - %d ",Roll);
  printf("\nFinal Result - %c ",Res);
  return 0;}


  
