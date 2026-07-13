#include<stdio.h>
int main()
{
        int a,b,c;
        printf("\n..TO PRINT GREATEST AMONG 3 NUMBERS..\n");
        printf("\nEnter the three numbers:");
        scanf("%d%d%d",&a,&b,&c);
        if(a>b && a>c)
                printf("a is greater\n");
        else if(b>c)
                printf("b is greater\n");
        else
                printf("c is greater\n");
        return 0;
}
