#include <iostream>
using namespace std;

int main()
{
    double harga, DiskonPersen, JumlahDiskon, HargaAkhir;

    cout << "=== Program Menghitung Diskon Barang ===\n\n";

    cout << "Masukkan Harga Barang (Rp) : ";
    cin >> harga;

    cout << "Masukkan Diskon (%)        : ";
    cin >> DiskonPersen;

    JumlahDiskon = harga * (DiskonPersen / 100);
    HargaAkhir = harga - JumlahDiskon;

    cout << "\n=== Hasil Perhitungan ===\n";
    cout << "Harga Awal        = " << harga << endl;
    cout << "Jumlah Diskon     = " << JumlahDiskon << endl;
    cout << "Harga Akhir       = " << HargaAkhir << endl;

    return 0;
}