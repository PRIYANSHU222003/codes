#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,root1,root2,discriminant,roota,rootb;
    printf("enter three cofficient");
    scanf("%lf%lf%lf",&a,&b,&c);
    discriminant=b*b-4*a*c;
    if(discriminant>0)
    {
        root1=-b+sqrt(discriminant)/2*a;
        root2=-b-sqrt(discriminant)/2*a;
        printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
    }
    else if(discriminant==0)
    {
        root1=root2=-b/2*a;
         printf("root1 = root2 = %.2lf;", root1);
    }
    else
    roota = -b / (2 * a);
        rootb = sqrt(-discriminant) / (2 * a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", roota,rootb,roota,rootb);
    return 0;
}