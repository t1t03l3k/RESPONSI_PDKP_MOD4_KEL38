#include<iostream>
#include<string.h>
#define max 100

using namespace std;

class kel38 {
public:
    char kata[max];
    char kataakhir;
    char katadeskripsi;
    int penambahan = 1;
    void rumusenkripsi() {
        for (int i = 0; i < strlen(kata); i += 1) {
            kataakhir = kata[i];
            if (kataakhir >= 'a' && kataakhir <= 'z') {
                kataakhir = kataakhir + penambahan;
                if (kataakhir > 'z') {
                    kataakhir = kataakhir - 'z' + 'a' - 1;
                }
                kata[i] = kataakhir;
            }
        }
        cout << "Kata telah dienskripsi : " << kata << endl;
    }
    void rumusdeskripsi() {
        for (int i = 0; i < strlen(kata); ++i) {
            kataakhir = kata[i];
            if (kataakhir >= 'a' && kataakhir <= 'z') {
                kataakhir = kataakhir - penambahan;
                if (kataakhir > 'z') {
                    kataakhir = kataakhir - 'z' + 'a' + 1;
                }
                kata[i] = kataakhir;
            }
        }
        cout << "Deskripsi ulang ini bos : " << kata << endl;
    }
    void awal() {
        cin >> kata;
        rumusenkripsi();
        rumusdeskripsi();
    }
};

int main()
{
    char kata;
    cout << "Masukkan kata yang ingin dienskripsi : ";
    kel38 Kata;
    Kata.awal();
    return 0;
}
