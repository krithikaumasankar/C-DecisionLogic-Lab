#include<stdio.h>
#include<math.h>
int main()
{
        int choice;
        double a,b,res;
        printf("\n---SCIENTIFIC CALCULATOR---\n");
        printf("\n1. Division");
        printf("\n2. Power(x^y)");
        printf("\n3. Square root");
        printf("\n4. Logarithm");
        printf("\n5. Sine(degree in radians)");
        printf("\nEnter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
                case 1:
                        printf("Enter a,b:");
                        scanf("%lf%lf",&a,&b);
                        if(b!=0)
                        {
                                res=a/b;
                                printf("Result:%.4lf\n",res);
                                break;
                        }
                        else
                                printf("Error!,Division by 0\n");
                        break;
                case 2:
                        printf("Enter the base and exponent:");
                        scanf("%lf%lf",&a,&b);
                        res=pow(a,b);
                        printf("Result:%.4lf\n",res);
                        break;
                case 3:
                        printf("Enter a:");
                        scanf("%lf",&a);
                        if(a>=0)
                        {
                        res=sqrt(a);
                        printf("Result:%.4lf\n",res);
                        break;
                        }
                        else
                                printf("Error!,square root of negative number\n");
                        break;
                case 4:
                        printf("Enter a:");
                        scanf("%lf",&a);
                        if(a>0)
                        {
                                res=log(a);
                                printf("Result:%.4lf\n",res);
                                break;
                        }
                        else
                                printf("Error!, Logarithm not defined\n");
                        break;
                case 5:
                        printf("Enter degree in radians");
                        scanf("%lf",&a);
                        res=sin(a);
                        printf("Result:%.4lf\n",res);
                        break;
                default:
                        printf("Invalid choice! Please try again\n");
        }
        return 0;
}
