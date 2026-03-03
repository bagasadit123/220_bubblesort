#include <iostream>
#include <string>
using namespace std;

int arr{20}; //deklarasi variable global array a dengan ukuran 20
int n;       //deklarasi variable global n untuk menyimpan banyaknya elemen pada array

void input ()
{ // procedur untuk input
    int d;
    while (true)
    {
        cout << "Masukkan banyaknya elemen pada array : "; // Output ke layar
        cin >>n;                                           // Input dari pengguna
        if (n <= 20)                                       // Jika n kurang dari atau
        break;
        else
        {                                                            // Jika n lebih dari 20
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n"; // Output ke layar
        }          
 
    }
cout << endl;
cout << "===================" << endl;
cout << "Masukkan Elemen Array" << endl;
cout << "===================" << endl;

for (int i = 0; i < n; i++)


}
