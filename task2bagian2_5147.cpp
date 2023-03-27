#include <iostream>
#include <cstring>
using namespace std;

void capitalizeFirst(char *str);
void toUpperCase(char *str);
void toLowerCase(char *str);

int main() {
    char str[1000];
    cout << "Masukkan kalimat: ";
    cin.getline(str, 1000);
    
    capitalizeFirst(str);
    cout << "Huruf pertama menjadi huruf besar: " << str << endl;
    
    toUpperCase(str);
    cout << "Semua huruf menjadi huruf besar: " << str << endl;
    
    toLowerCase(str);
    cout << "Semua huruf menjadi huruf kecil: " << str << endl;
    
    return 0;
}

void capitalizeFirst(char *str) {
    if (str[0] >= 'a' && str[0] <= 'z') {
        str[0] -= 32;
    }
}

void toUpperCase(char *str) {
    char *p = str;
    while (*p != '\0') {
        if (*p >= 'a' && *p <= 'z') {
            *p -= 32;
        }
        p++;
    }
}

void toLowerCase(char *str) {
    char *p = str;
    while (*p != '\0') {
        if (*p >= 'A' && *p <= 'Z') {
            *p += 32;
        }
        p++;
    }
}


