#include <iostream>
using namespace std;

int main() {
    int detikTotal;
    cout << "Masukkan bilangan >1 (satuan detik)\n >>";
    if (!(cin >> detikTotal)) {
        return 0;
    }

    int hari = detikTotal / 86400;
    int sisa = detikTotal % 86400;

    int jam = sisa / 3600;
    sisa = sisa % 3600;

    int menit = sisa / 60;
    int detik = sisa % 60;

    cout << "Hasil Konversi:\n";
    cout << detikTotal << " detik = "
         << hari << " Hari, "
         << jam << " Jam, "
         << menit << " Menit, "
         << detik << " Detik." << endl;

    return 0;
}
