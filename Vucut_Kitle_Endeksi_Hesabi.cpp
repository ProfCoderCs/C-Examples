#include <iostream>

using namespace std;

int main()
{

    int vKI;
    int libreAgirlik;
    int boyInc;

    int kgAgirlik;
    int boyM;

    char secim;

    cout << "Libre olarak agirlik  ve boyu inc olarak secmek icin A tusuna basin " << endl;

    cout << "Kg olarak agirlik ve boyu m olarak secmek icin B tusuna basin " << endl;

    cin >> secim;


    if (secim == 'A' || secim == 'a')
    {
      
        cout << "Libre olarak agirligi giriniz: ";
        cin >> libreAgirlik;
        cout << "Boyunuzu inc olarak giriniz: ";
        cin >> boyInc;

        vKI = libreAgirlik * 703 / boyInc / boyInc;
    }
    
    if (secim == 'B' || secim == 'b')
    {
        cout << "Kilogram  olarak agirligi giriniz: ";
        cin >> libreAgirlik;
        cout << "Boyunuzu metre olarak giriniz: ";
        cin >> boyInc;
        vKI = kgAgirlik / boyM / boyM;
    }
    

    cout << "Sonuc: " << vKI << endl;
    cout << "Vucut Kutle Indeksi Degerleri" << endl;
    cout << "Zayif : 18.5 altindaki degerler " << endl;
    cout << "Normal : 18.5 - 24.9 araligi " << endl;
    cout << "Sisman : 25 - 29.9 araligi " << endl;
    cout << "Obez : 30 yas ustundeki degerler" << endl;

    return 0;
}