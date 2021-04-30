#include <iostream>

using namespace std;

class Kalkulator
{
public:
    int bil1, bil2;

    // buat constructor
    Kalkulator(int bill1, int bill2)
    {
        Kalkulator::bil1 = bill1;
        Kalkulator::bil2 = bill2;
    }

    // buat function pembagian
    int pembagian()
    {
        return bil1 / bil2;
    }

    //TODO buat function penjumlahan
    //TODO buat function pengurangan
    //TODO buat function perkalian
};

int main(int argc, char const *argv[])
{
    cout << "Program Kalkulator sederhana" << endl;
    // deklarasi variabel untuk bilangan 1 dan 2 juga op
    int a, b;
    char op;
    cout << "Bilangan pertama : ";
    cin >> a;
    cout << "Bilangan kedua : ";
    cin >> b;
    Kalkulator Kalkulator1 = Kalkulator(a, b);

// untuk balik bisi ada kesalahan penulisan operator
balik:
    cout << "op :";
    cin >> op;
    switch (op)
    {
    case '+':

        break;
    case '-':

        break;
    case '*':

        break;
    case '/':
        cout << "hasilnya adalah : " << Kalkulator1.pembagian() << endl;
        break;

    default:
        cout << "mohon masukkan operator yang tepat" << endl;
        goto balik;
        break;
    }
    return 0;
}
