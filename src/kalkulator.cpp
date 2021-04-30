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

    //TODO buat function perkalian
    int perkalian()
    {
        return bil1 * bil2;
    }
    
	//TODO buat function penjumlahan
    int penjumlahan()
    {
        return bil1 + bil2;
    }
    
	//TODO buat function pengurangan
    int pengurangan()
    {
        return bil1 - bil2;
    }
};

int main(int argc, char const *argv[])
{
	cout << "============================" << endl;
    cout << "Program Kalkulator sederhana" << endl;
    cout << "============================" << endl;
    
    // deklarasi variabel untuk bilangan 1 dan 2 juga op
    int a, b;
    char op, pil;
    
    // Label untuk kembali
    balik:
    
    // Sistem Input 
    cout << "\n=======Masukan Angka========" << endl;
    cout << "Bilangan pertama : ";
    cin >> a;
    cout << "Bilangan kedua : ";
    cin >> b;
    Kalkulator Kalkulator1 = Kalkulator(a, b);
    cout << "\n[(+) (-) (*) (/)]" << endl;
    cout << "Operasi :";
    cin >> op;
    cout << "============================" << endl;
     
    // Sistem Output
    cout << "\n===========Hasil============" << endl;
     if (op == '+')
     {
         cout << "hasilnya adalah :  " << Kalkulator1.penjumlahan() << endl;
     }
     else if (op == '-')
     {
         cout << "hasilnya adalah :  " << Kalkulator1.pengurangan() << endl;
     }
     else if (op == '*')
     {
         cout << "hasilnya adalah :  " << Kalkulator1.perkalian() << endl;
     }
     else if (op == '/')
     {
         cout << "hasilnya adalah : " << Kalkulator1.pembagian() << endl;
     }
     else
     {
         cout << "mohon masukkan operator yang benar" << endl;
         goto balik;
    }
    cout << "============================" << endl;
    
    // Sistem validasi exit
    cout << "\nKembali? [y/n]" << endl;
    cin >> pil;
    
    if(pil == 'y')
	{
		goto balik;
	}
	else if(pil == 'n')
	{
		cout << "\nThank You" << endl;
		return 0;	
	}

    
}
