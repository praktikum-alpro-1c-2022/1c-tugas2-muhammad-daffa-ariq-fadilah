#include <iostream>
using namespace std;

int main(){

    double luas, sisi1, sisi2;

    cout << "Masukkan panjang sisi 1: ";
    cin >> sisi1;

    cout << "Masukkan panjang sisi 2: ";
    cin >> sisi2;

    luas = 0.5 * sisi1 * sisi2;

    cout << "Luas belah ketupat: " << luas;

    return 0;
}
