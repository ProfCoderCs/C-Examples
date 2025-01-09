#include <stdio.h>

int main()
{

//    *
//   ***
//  *****
// *******


    int sutunCounter = 1;
    int satirCounter = 1;


    int istenenSatir;

    int number;
    

    int boslukCounter;


    printf("Istediginiz satir degerini giriniz: ");
    scanf("%d", &istenenSatir);
    

    for (;  satirCounter <= istenenSatir; satirCounter++) // satir sayaci kontrol edecek
    {   

        number = 2 * (satirCounter - 1) + 1;

        for (boslukCounter = istenenSatir - 1; satirCounter <= boslukCounter; boslukCounter--)
        {
            printf(" ");
        }
            
        for (; sutunCounter <= number; sutunCounter++)  // sutun sayaci kontrol edecek
        {
            printf("%s", "*");
           
        }
        

        printf("\n");

        sutunCounter = 1;
    }
    

    return 0;
}