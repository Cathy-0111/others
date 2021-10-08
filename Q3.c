#include <stdio.h>
#include <stdlib.h>
int main()
{
   int n,m;
   scanf("%d",&n);
   while (n%2!=0)
   {
       n=n-2;
       m++;
   }
   printf("Yes,%d",m);
   return 0;
}