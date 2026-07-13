#include<stdio.h>
int main()
{
        int u,bill;
        printf("\n..TO CALCULATE THE ELECTRICITY BILL..\n");
        printf("\nEnter the units:");
        scanf("%d",&u);
        if(u>=0 && u<=100)
        {
                bill=0;
                printf("The electricity bill is Rs.%d\n",bill);
        }
        else if(u>=101 && u<=200)
        {
                bill=((u-100)*5);
                printf("The electricity bill is RS.%d\n",bill);
        }
        else if(u>200)
        {
                bill=(((u-200)*10)+(100*5));
                printf("The electricity bill is Rs.%d\n",bill);
        }
        else
                printf("Invalid input\n");
        return 0;
}
