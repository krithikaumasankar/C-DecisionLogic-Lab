#include<stdio.h>
int main()
{
        int m;
        printf("\n..TO DISPLAY THE GRADE OF A STUDENT BASED ON MARKS..\n");
        printf("Enter your mark:");
        scanf("%d",&m);
        if(m>=91 && m<=100)
                printf("GRADE:O\n");
        else if(m>=81 && m<=90)
                printf("GRADE:A+\n");
        else if(m>=71 && m<=80)
                printf("GRADE:A\n");
        else if(m>=61 && m<=70)
                printf("GRADE:B+\n");
        else if(m>=50 && m<=60)
                printf("GRADE:B\n");
        else if(m>=0 && m<50)
                printf("GRADE:RA\n");
        else
                printf("INVALID MARK\n");
        return 0;
}
