#include <iostream>
using namespace std;

int main() {
    int dkt;
    cout << "Masukkan bilangan >1 (satuan detik)\n >>";
    if (!(cin >> dkt)) {
        return 0;
    }

    //mecegah var nya sama seperti yang lain pak hehe
    //dkt = var utama 
    //hts = var jam
    //date = var sisa
    //aio = var menit
    //b80 = var detik

    int hts = dkt / 3600;
    int date = dkt % 3600;
    int aio = date / 60;
    int b80 = date % 60;

    cout << "Hasil Konversi :\n";
    cout << dkt << " detik : "
         << hts << " Jam, "
         << aio << " Menit, "
         << b80 << " Detik." << endl;

    return 0;
}
