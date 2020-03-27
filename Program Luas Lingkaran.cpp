//Diskusi 1 pertemuan ke 3 ALGORITMA dan PEMROGRAMAN
//Siti Safikatun UMB36 TI Genap
 
#include <iostream>
using namespace std;
int main(){
  float luas, jari_jari;
  const float phi = 3.14;
  cout << "=================================\n";
  cout << "Program Menghitung Luas Lingkaran\n";
  cout << "=================================\n";
  cout << "Masukkan panjang jari-jari lingkaran: ";
  cin >> jari_jari;
  luas = phi*jari_jari*jari_jari;
  cout << "Luas Lingkaran adalah "<< luas << endl;
  return 0;
}
