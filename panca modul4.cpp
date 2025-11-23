#include<iostream>
using namespace std;

int main()
{
    double nilai;

    cout << "=== Program Penentuan Nilai Beserta Naik Kelas/Tinggal Kelas ===" << endl;
    cout << "Masukkan nilai angka: ";
    cin >> nilai;
    cout << "\nHasil:" << endl;

    if (nilai > 89)
    {
        cout << "Nilai A (Naik Kelas)" << endl;
        cout << "Keterangan: Sangat Baik." << endl;
    }
    else if (nilai > 80 && nilai <= 89)
    {
        cout << "Nilai B (Naik Kelas)" << endl;
        cout << "Keterangan: Baik." << endl;
    }
    else if (nilai > 70 && nilai <= 80)
    {
        cout << "Nilai C (Naik Kelas)" << endl;
        cout << "Keterangan: Cukup Baik." << endl;
    }
    else if (nilai > 60 && nilai <= 70)   
    {
        cout << "Nilai D (Tinggal Kelas)" << endl;
        cout << "Keterangan: Kurang Baik." << endl;
    }
    else   // nilai <= 60
    {
        cout << "Nilai E (Tinggal Kelas)" << endl;
        cout << "Keterangan: Sangat Kurang." << endl;
    }

    return 0;
}