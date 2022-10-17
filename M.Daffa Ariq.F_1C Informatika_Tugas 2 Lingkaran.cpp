#include <iostream>
using namespace std;

int main(){

    double jariJari, luas, phi;
    phi = 3.14;

    cout << "Masukkan panjang Jari-jari: ";
    cin >> jariJari;

    luas = phi * (jariJari * jariJari);

    cout << "Luas Lingkaran: " << luas;

    return 0;
}

