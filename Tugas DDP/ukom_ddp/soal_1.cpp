#include <iostream>
using namespace std;

int main() {
    long long bpkb;

    cout << "Masukkan bilangan >1 (satuan detik)\n >>";
    if (!(cin >> bpkb)) {
        return 0;
    }

    // merubah nama var biar tidak sama seperti yang lain
    // bppkb = var utama
    // aduh = jam
    // creamsie = menit
    // LA = detik
    // stnk = var dari hasil sisa perhitungan

    long long aduh = bpkb / 3600;
    long long stnk = bpkb % 3600;
    long long creamsie = stnk / 60;
    long long LA = stnk % 60;

    cout << "Hasil Konversi Nya :\n";
    cout << bpkb << " detik : "
              << aduh << " Jam, "
              << creamsie << " Menit, "
              << LA << " Detik." << '\n';

    // Penjelasan perhitungan
    cout << "\nPenjelasan:" << '\n';
    cout << "- 1 jam : 3600 detik, jadi Jam : " << bpkb << " / 3600 : " << aduh << '\n';
    cout << "- Sisa setelah jam : " << bpkb << " % 3600 : " << stnk << '\n';
    cout << "- 1 menit : 60 detik, jadi Menit : " << stnk << " / 60 : " << creamsie << '\n';
    cout << "- Sisa detik : " << stnk << " % 60 : " << LA << '\n';

    return 0;
}
