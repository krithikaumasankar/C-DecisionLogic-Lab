#include<stdio.h>
#include<math.h>
int main()
{
        float a,b,c,D,R1,R2,s;
        printf("\n..TO FIND THE ROOTS OF THE EQUATION..\n");
        printf("\nEnter a,b,c: ");
        scanf("%f%f%f",&a,&b,&c);
        D=((b*b)-(4*a*c));
        if(D==0)
        {
                R1=(-b/(2*a));
                R2=(-b/(2*a));
                printf("\nThe roots are real and equal");
                printf("\nR1=%f",R1);
                printf("\nR2=%f\n",R2);
        }
        else if(D>0)
        {
                s=pow(D,0.5);
                R1=((-b+s)/(2*a));
                R2=((-b-s)/(2*a));
                printf("\nThe roots are real and distinct");
                printf("\nR1=%f",R1);
                printf("\nR2=%f\n",R2);
        }
        else
                printf("\nThe roots are imaginary");
        printf("\nThe nature of roots are determined\n");
        return 0;
}
