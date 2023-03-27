#include <iostream>
using namespace std;

int main() {
    int n, *ptr, temp;

    cout << "Masukkan jumlah nilai yang ingin dimasukkan: ";
    cin >> n;

    ptr = new int[n];

    cout << "Masukkan nilai-nilai : " << endl;
    for (int i = 0; i < n; i++) {
        cin >> *(ptr + i);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (*(ptr + i) < *(ptr + j)) {
                temp = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = temp;
            }
        }
    }

    cout << "Nilai-nilai yang sudah diurutkan: ";
    for (int i = 0; i < n; i++) {
        cout << *(ptr + i) << " ";
    }

    int nilai;
    bool ditemukan = false;
    do {
        cout << endl << "Masukkan nilai yang ingin dicari: ";
        cin >> nilai;

        int *p = ptr;
        while (p != ptr + n) {
            if (*p == nilai) {
                cout << "Nilai " << nilai << " ditemukan!" << endl;
                ditemukan = true;
                break;
            }
            p++;
        }

        if (!ditemukan) {
            cout << "Nilai " << nilai << " tidak ditemukan!" << endl;
        }
    } while (!ditemukan);

    delete[] ptr;
    return 0;
}


