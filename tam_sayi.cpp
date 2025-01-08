#include <iostream>

using namespace std;

int main()
{

    int number1;
    int number2;
    

    cout << "Enter two integer numbers: ";
    cin >> number1 >> number2;

    

    if (number1 > number2)
    {
        cout << "Ilk sayi : " << number1 <<" iknci sayidan " << number2 << "  buyuk" << endl;
    }
    
    if (number1 == number2)
    {
        cout << "Ilk sayi : " << number1 <<" iknci sayiya " << number2 << " esit" << endl;
    }

    if (number1 < number2)
    {
        cout << "Ilk sayi : " << number1 <<" iknci sayidan " << number2 << "  kucuk" << endl;
    }

    return 0;
}