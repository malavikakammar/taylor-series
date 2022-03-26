#include <stdio.h>
#include<math.h>
#define PI 3.14

int main(void)
 {
   float x,num,deno,sum,term,degree;
   int i;
   printf("enter the  degree\n");
   scanf("%f",&degree);
   //convert the degree into radian
   x=degree*(PI/180.0);
   //intialise value of sum ,deno,num,i
   sum=0;
   deno=1.0;
   num=x;
   i=1;
   do
   { 
     //compute the term
     term=num/deno;
     //add the term value to the sum
     sum=sum+term;
     i=i+2;
     //compute the next num and deno value
     deno=deno*i*(i-1);
     num=-num*x*x;
     printf("term=%f",term);


   }
  while(fabs(term)>=0.0001);
  printf("compared value of sin(%f)=%f",sum,degree);
  printf("value from library function sin(%f)=%f",sin(x),degree);
  return 0;
}