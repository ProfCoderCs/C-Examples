#include <stdio.h>

int main()
{

    int istenenSatir;

    int counter = 1;
    int boslukCounter;
    int sutunCounter = 1;
    int satirCounter = 1;
    int asteriksCounter;

    printf("Istenen satiri giriniz: ");
    scanf("%d", &istenenSatir);

    for (; satirCounter <= istenenSatir; satirCounter++) 
    {   
        asteriksCounter = 2 * (satirCounter - 1) + 1;
        boslukCounter = istenenSatir - 1; 

        for (; satirCounter <= boslukCounter; boslukCounter--)
        {
            printf(" ");
        }

        sutunCounter = 1;

        for (; sutunCounter <= asteriksCounter; sutunCounter++)
        {
            printf("*");
        }
        
        printf("\n");
    }
    
    for (; satirCounter > istenenSatir; satirCounter--) 
    {   
        asteriksCounter = 2 * (satirCounter - 1) + 1;
        boslukCounter = istenenSatir - 1; 

        for (; satirCounter > boslukCounter; boslukCounter++)
        {
            printf(" ");
        }

        sutunCounter = 1;

        for (; sutunCounter <= asteriksCounter; sutunCounter++)
        {
            printf("*");
        }
        
        printf("\n");
    }

    return 0;
}