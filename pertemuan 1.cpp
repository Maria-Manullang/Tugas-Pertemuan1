#include <iostream>
#include <windows.h>


using namespace std;

int main()
{
    char pil[10];
    system("color A");
    cout << "|===================================|"<<endl;
    cout << "|DAFTAR MENU RESTORAN NIKMAT BERSAMA|"<<endl;
    cout << "|===================================|"<<endl;
    cout << "|a. MAKANAN:                        |"<<endl;
    cout << "|1. Bakso Udang Besar               |"<<endl;
    cout << "|2. Soto Medan Bersama              |"<<endl;
    cout << "|3. Ikan Bakar Kepala               |"<<endl;
    cout << "|4. Sop Ikan Hiu                    |"<<endl;
    cout << "|5. Daging Goreng Rendang           |"<<endl;
    cout << "|                                   |"<<endl;
    cout << "|b. MINUMAN:                        |"<<endl;
    cout << "|1. Juice Kua Tahu                  |"<<endl;
    cout << "|2. Jusce Kua Tempe                 |"<<endl;
    cout << "|3. Minuman Segar All In            |"<<endl;
    cout << "|4. Susu Kuda All in                |"<<endl;
    cout << "|5. Minuman Siao                    |"<<endl;
    cout << "|===================================|"<<endl;

    cout <<	"   Masukkan Pilihan Anda : ";cin>>pil;

    return 0;
}
