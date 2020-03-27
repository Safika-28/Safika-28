//Quiz1  pertemuan ke 3 ALGORITMA dan PEMROGRAMAN
//Siti Safikatun UMB36 TI Genap


#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
main()
{
char nama[25];
int pertandingan1,pertandingan2,pertandingan3,rata2;
cout<<"\t\tPROGRAM HITUNG NILAI RATA-RATA\n";
cout<<"\t      ==================================\n";
cout<<endl;
cout<<"Nama Siswa          : ";gets(nama);
cout<<"Nilai Pertandingan 1 : ";cin>>pertandingan1;
cout<<"Nilai Pertandingan 2 : ";cin>>pertandingan2;
cout<<"Nilai Pertandingan 3 : ";cin>>pertandingan3;
rata2=(pertandingan1+pertandingan2+pertandingan3)/3;

cout<<"Siswa atas nama "<<nama<<endl;
cout<<"Memperoleh nilai rata-rata "<<rata2<<" dari hasil pertandingan"<<endl;
getch();
}
