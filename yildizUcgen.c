#include <stdio.h>

int main()
{

    //     *
    //   *   *
  //   *   *   *
//   *   *   *   *


    int sutunCounter = 1;
    int satirCounter = 1;


    int istenenSatir;


    

    int boslukCounter;


    printf("Istediginiz satir degerini giriniz: ");
    scanf("%d", &istenenSatir);
    

    for (;  satirCounter <= istenenSatir; satirCounter++) // satir sayaci kontrol edecek
    {   

        for (boslukCounter = istenenSatir - 1; satirCounter <= boslukCounter; boslukCounter--)
        {
            printf(" ");
        }
            
        for (; sutunCounter <= satirCounter; sutunCounter++)  // sutun sayaci kontrol edecek
        {
            printf("%s ", "*");
           
        }
        

        printf("\n");

        sutunCounter = 1;
    }
    

    return 0;
}