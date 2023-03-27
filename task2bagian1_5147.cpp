#include <iostream>
using namespace std;

int countWords(char *);

int main() {
    char str[100];
    cout << "Masukkan kalimat = ";
    cin.getline(str, 100);
    cout << "Jumlah kata dalam kalimat "<<(str)<<" adalah "<<countWords(str) << endl;
    return 0;
}

int countWords(char *str) {
    int count = 0;
    bool isWord = false;

    while (*str) {
        if (*str == ' ' || *str == '\t' || *str == '\n') {
            if (isWord) {
                isWord = false;
                count++;
            }
        }
        else {
            isWord = true;
        }
        str++;
    }

    if (isWord) {
        count++;
    }

    return count;
}
