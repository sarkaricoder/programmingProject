#include<stdio.h>
#include<stdlib.h>
struct time
{
    int hh;
    int mm;
    int ss;
} df1, df2 ;
typedef struct time ti;
int Diff (ti x, ti y)
{
  int sec1= x.ss+ x.mm*60+ x.hh*60*60;
  int sec2= y.ss + y.mm*60+ y.hh*60*60;
  int diff;
  if(sec1>sec2)
  {
     diff=sec1-sec2;
  }}
  else{
     diff=sec2-sec1;
  }
  return diff;
}
int main()
{
  printf("Enter the first time in format HH MM SS =\n");
  scanf("%d %d %d",&df1.hh,&df1.mm,&df1.ss);
  printf("Enter the second time in format HH MM SS =\n");
  scanf("%d %d %d",&df2.hh,&df2.mm,&df2.ss);
  int copy=Diff(df1,df2);
  int sec=copy%60;
  int min=(copy/60)%60;
  int hour=((copy/60))/60%60;
  printf(" Difference in time period = %d : %d : %d ", hour,min,sec);
  return 0;

}
