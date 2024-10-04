#include<stdio.h>
int main()
{
   int a,b,c;
   printf("enter three sides of triangle");
   scanf("%d%d%d"&a,&b,&c);
   if(a==b==c)
   {
    printf("this is equilateral tringle"a,b,c);
   } 
   else if(a==b || b==c || a==c)
   {
    printf("this is isoleces triangle"a,b,c);
   }
   else 
   {
    printf("this is scalar triangle"a,b,c);
   }
   return 0;
}