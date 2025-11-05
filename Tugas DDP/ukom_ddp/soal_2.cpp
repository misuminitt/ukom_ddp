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
    // makna = var dari hasil sisa perhitungan
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

    cout << "Hasil Konversi Nya :\n";
    cout << apibukanapi << " detik : "
         << oxva << " Hari, "
         << trml << " Jam, "
         << hexohm << " Menit, "
         << r234 << " Detik." << '\n';

    // Penjelasan perhitungan
    cout << "\nPenjelasan:" << '\n';
    cout << "- 1 hari : 86400 detik, jadi Hari : " << apibukanapi << " / 86400 : " << oxva << '\n';
    int sisa1 = apibukanapi % 86400;
    cout << "- Sisa setelah hari : " << apibukanapi << " % 86400 : " << sisa1 << '\n';
    cout << "- 1 jam : 3600 detik, jadi Jam : " << sisa1 << " / 3600 = " << trml << '\n';
    int sisa2 = sisa1 % 3600;
    cout << "- Sisa setelah jam : " << sisa1 << " % 3600 : " << sisa2 << '\n';
    cout << "- 1 menit : 60 detik, jadi Menit : " << sisa2 << " / 60 : " << hexohm << '\n';
    cout << "- Sisa detik : " << sisa2 << " % 60 : " << r234 << '\n';

    return 0;
}
