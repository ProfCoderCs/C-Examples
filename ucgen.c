    // Sayisi 1 artirilmis dik acili ucgen benzeri bir oruntu yapacak ko

#include <stdio.h>

int main()
{
    //1
    //2 3
    //4 5 6
    //7 8 9 10


    
    int satirCounter = 1;
    int sutunCounter = 1;

    int number = 1;
    int istenenSatir;


    printf("Kacinci satira kadar islem istiyorsun ");
    scanf("%d", &istenenSatir);

    for (;  satirCounter <= istenenSatir; satirCounter++) // satir sayaci kontrol edecek
    {   
        
        for (; sutunCounter <= satirCounter; sutunCounter++)  // sutun sayaci kontrol edecek
        {
            printf("%d ",number);
            number++;    
        }
        
        printf("\n");

        sutunCounter = 1;
    }
    

    return 0;
}