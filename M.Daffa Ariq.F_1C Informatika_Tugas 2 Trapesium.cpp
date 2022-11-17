#include <iostream>
using namespace std;

int main(){

    double luas, sisiA, sisiB, tinggi;

    cout << "Masukkan panjang sisiA: ";
    cin >> sisiA;

    cout << "Masukkan panjang sisiB: ";
    cin >> sisiB;

    cout << "Masukkan tinggi: ";
    cin >> tinggi;

    luas = 0.5 * (sisiA + sisiB) * tinggi;

    cout << "Luas trapesium: " << luas;

    return 0;
}
