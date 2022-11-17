#include <iostream>
using namespace std;

int main(){

    double luas, panjang, lebar;

    cout << "Masukkan Panjang: ";
    cin >> panjang;

    cout << "Masukkan Lebar: ";
    cin >> lebar;

    luas = panjang * lebar;

    cout << "Luas persegi panjang: " << luas;

    return 0;
}
