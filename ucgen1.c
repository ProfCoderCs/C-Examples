#include <stdio.h>

int main()
{

    //     1
    //   2   3
  //   4   5   6
//   7   8   9   10


    int sutunCounter = 1;
    int satirCounter = 1;


    int istenenSatir;

    int number = 1;
    

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
            printf("%d ", number);
            number++;    
        }
        

        printf("\n");

        sutunCounter = 1;
    }
    

    return 0;
}