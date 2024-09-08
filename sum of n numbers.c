/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <stdio.h>
int main()
{
   int n,sum=0;
   printf("enter the n:");
   scanf("%d",&n);
while(n>0)
   {
       sum=sum+(n%10);
       n=n/10;
   }
  printf("sum of the digits:%d",sum);
}