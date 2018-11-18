#include <iostream>
using namespace std;

void Hitung_luas();
void ganjil_genap();
void besar_kecil();


int main()
{
    int a;


    do {
        cout << "### Khunaify Syarief (311610788) ###\n"<<endl;
        cout << "___________________________________\n"<< endl;
        cout << "1. Menghitung Luas Persegi Panjang \n";
        cout << "2. Mencari nilai ganjil genap\n";
        cout << "3. Mencari Besar Kecil Bilangan\n";
        cout << "0. Selesai\n";
        cout << "___________________________________\n"<< endl;
        cout << "\n Masukan pilihan : ";
        cin >> a;

        switch(a)
        {
        case 1 :
            Hitung_luas();
            break;
        case 2 :
            ganjil_genap();
            break;
        case 3:
            besar_kecil();
            break;
        }

    }while(a!=0);
}

void Hitung_luas()
{
int p,l,luas;
cout<<"masukan panjjang persegi panjang: ";
cin>>p;
cout<<"masukan lebar persegi panjang: ";
cin>>l;

luas=p*l;
cout<<"luas persegi panjang adalah " <<luas <<endl;
}
void ganjil_genap()
{
    int nilai,hasil;
    cout << "menentukan ganjil dan genap" << endl;
    cout << "masukan nilai = ";
    cin >> nilai;
    hasil= nilai%2;
    cout << "hasilnya adalah = ";
    if (hasil==0)
        cout << "genap"<<endl;
    else
        cout << "ganjil" <<endl;
}
void besar_kecil()
{
    int angka1,angka2,besar,kecil;
    cout << "masukan angka ke-1: ";
    cin >> angka1;
    cout << "masukan angka ke-2: ";
    cin >> angka2;

    besar= angka1 > angka2 ? angka1 : angka2;
    kecil= angka1 < angka2 ? angka1 : angka2;

    cout << endl;
    cout << "angka"<< " " << besar << " "<< " lebih besar dari angka  "  << kecil << endl;
    cout << "angka" <<" " << kecil << " "<< " lebih kecil dari angka  "  << besar << endl;
}
