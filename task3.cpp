#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa
{
    string npm;
    string nama;
    string alamat;
    int tahunMasuk;
    float ipk;
};

int main()
{
    int jumlahMahasiswa;
    cout << "Jumlah mahasiswa yang ingin diinputkan : ";
    cin >> jumlahMahasiswa;
    cout << endl;

    Mahasiswa mhs[jumlahMahasiswa];

    for (int i = 0; i < jumlahMahasiswa; i++)
    {
        cout << "Data Mahasiswa ke #" << (i+1) << endl;
        cout << " NPM         : "; cin >> mhs[i].npm;
        cout << " Nama        : "; getline(cin >> ws, mhs[i].nama);
        cout << " Alamat      : "; getline(cin >> ws, mhs[i].alamat);
        cout << " Tahun Masuk : "; cin >> mhs[i].tahunMasuk;
        cout << " IPK         : "; cin >> mhs[i].ipk;
        cout << endl;
    }

    cout << endl;
    cout << "Laporan Data Mahasiswa" << endl;
    cout << "======================" << endl;
    for (int i = 0; i < jumlahMahasiswa; i++)
    {
        cout << "No. #" << (i+1) << endl;
        cout << " NPM         : " << mhs[i].npm << endl;
        cout << " Nama        : " << mhs[i].nama << endl;
        cout << " Alamat      : " << mhs[i].alamat << endl;
        cout << " Tahun Masuk : " << mhs[i].tahunMasuk << endl;
        cout << " IPK         : " << mhs[i].ipk << endl;
        cout << endl << endl;
    }

    system("pause");
    return 0;
}

