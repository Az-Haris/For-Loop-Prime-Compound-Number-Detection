#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int num, a, f=1;

    printf("Please Enter a Number : ");
    scanf("%d",&num);

    for(a=2; a<num; a++)
    {
        if(num%a==0)
        {
            printf("%d is a Compound Number",num);
            f=0;
            break;
        }
    }
    if(f==1)
    {
        printf("%d is a Prime Number",num);
    }


    getch();
    return 0;
}
