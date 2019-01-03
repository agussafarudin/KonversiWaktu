#include <iostream>

using namespace std;

int main()
{
    float detik, menit, jam, hari;
    cout<< " ----Program Konversi Waktu---- \n \n";
    cout<< " Masukkan Nilai Waktu (DETIK)  =";
    cin>>detik;
    menit=detik/60;
    jam=detik/3600;
    hari=detik/86400;
    cout<< " Nilai Menit adalah   =";
    cout<<menit;
    cout<<"\n" ;
    cout<< " Nilai Jam adalah     =";
    cout<<jam;
    cout<<"\n" ;
    cout<< " Nilai Hari adalah    =";
    cout<<hari;
    cout<<"\n" ;

    return 0;
}
