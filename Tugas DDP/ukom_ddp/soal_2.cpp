#include <iostream>
using namespace std;

int main() {
    int apibukanapi;
    cout << "Masukkan bilangan >1 (satuan detik)\n >>";
    if (!(cin >> apibukanapi)) {
        return 0;
    }

    // mencegah var nya agar tidak sama dengan yang lain
    // apibukanapi = var utama
    // makna = var dari hasil sisa konversi
    // oxva = hari
    // trml = jam
    // hexohm = menit
    // r234 = detik

    int oxva = apibukanapi / 86400;
    int makna = apibukanapi % 86400;

    int trml = makna / 3600;
    makna = makna % 3600;

    int hexohm = makna / 60;
    int r234 = makna % 60;

    cout << "Hasil Konversi :\n";
    cout << apibukanapi << " detik : "
         << oxva << " Hari, "
         << trml << " Jam, "
         << hexohm << " Menit, "
         << r234 << " Detik." << endl;

    return 0;
}
