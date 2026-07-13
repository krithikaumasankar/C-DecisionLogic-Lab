#include<stdio.h>
int main()
{
        int a;
        printf("\n..TO CHECK WHETHER THE GIVEN NUMBER IS DIVISIBLE BY 5 AND NOT AN EVEN NUMBER..\n");
        printf("\nEnter a:");
        scanf("%d",&a);
        if(a%5==0 && a%2!=0)
                printf("The number is divisible by 5 and it is not an even number\n");
        else if(a%5==0 && a%2==0)
                printf("The number is divisible by 5 and it is an even number\n");
        else if(a%5!=0 && a%2!=0)
                printf("The number is not divisible by 5 and it is not an even number\n");
        else
                printf("The number is not divisible by 5 and it is an even number\n");
        return 0;
}
