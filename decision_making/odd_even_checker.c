#include<stdio.h>
int main()
{
        int a;
        printf("\n..TO CHECK WHETHER THE GIVEN NUMBER IS ODD OR EVEN..\n");
        printf("Enter a:");
        scanf("%d",&a);
        if(a%2==0)
                printf("The given number is even\n");
        else
                printf("The given number is odd\n");
        return 0;
}
