#include <iostream>
using namespace std;

int bilangan1, bilangan2;

int penjumlahan(int a, int b)
{
    return a + b;
}

int pengurangan(int a, int b)
{
    return a - b;
}

int perkalian(int a, int b) 
{
    return a * b;
}

float pembagian(float a, float b) 
{
    return a / b;
}

void inputdata()
{
    cout << "\nMasukkan bilangan pertama :";
    cin >> bilangan1;
    cout << "\nMasukkan bilangan kedua :";
    cin >> bilangan2;
}

int main() 
{
    int pilihan;
    do
    {
        system("cls");
        cout << "Menu Kalkulator Sederhana" << endl;
        cout << "1. Penjumlahan" << endl;
        cout << "2. Pengurangan" << endl;
        cout << "3. Perkalian" << endl;
        cout << "4. Pembagian" << endl;
        cout << "5. Keluar" << endl;
        cout << "Masukkan pilihan : ";
        cin >> pilihan; 

        switch (pilihan)
        {
        case 1:
            inputdata();
            cout << "\nHasil penjumlahan :" << penjumlahan(bilangan1, bilangan2) << endl;
            system("pause");
            break;
        case 2:
            inputdata();
            cout << "\nHasil pengurangan :" << pengurangan(bilangan1, bilangan2) << endl;
            system("pause");
            break;
        case 3:
            inputdata();
            cout << "\nHasil perkalian :" << perkalian(bilangan1, bilangan2) << endl;
            system("pause");
            break;
        case 4:
            inputdata();
            cout << "\nHasil pembagian :" << pembagian(bilangan1, bilangan2) << endl;
            system("pause");
            break;
        case 5:
            break;
        default:
            cout << "Pilihan tidak valid" << endl;
            system("pause");
            break;
        }
    }while (pilihan != 5); // != adalah tidak sama dengan.

    return 0;
}