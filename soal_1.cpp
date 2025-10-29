#include <iostream>

int main() {
    long long totalDetik;

    std::cout << "Masukkan bilangan >1 (satuan detik)\n >>";
    if (!(std::cin >> totalDetik)) {
        return 0;
    }

    long long jam = totalDetik / 3600;
    long long sisa = totalDetik % 3600;
    long long menit = sisa / 60;
    long long detik = sisa % 60;

    std::cout << "Hasil Konversi:\n";
    std::cout << totalDetik << " detik = "
              << jam << " Jam, "
              << menit << " Menit, "
              << detik << " Detik." << std::endl;

    return 0;
}
