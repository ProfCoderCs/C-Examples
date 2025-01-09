#include <stdio.h>

int main()
{   // 1 + 11 + 111 + 1111 + 11111

    int total = 0;
    int total1 = 0;
    int counter = 1;

    int istenenDeger;

    printf("Istenen sayaci giriniz: ");
    scanf("%d", &istenenDeger);

    for (; counter <= istenenDeger; counter++)
    {
        total = total * 10 + 1;

        total1 = total1 + total;

    }
    
    printf("Sonuc: %d\n", total1);

    return 0;
}