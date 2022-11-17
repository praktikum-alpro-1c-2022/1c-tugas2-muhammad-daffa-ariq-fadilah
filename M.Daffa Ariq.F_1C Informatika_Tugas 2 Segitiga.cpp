#include <iostream>
using namespace std;

int main(){

    double luas, alas, tinggi;

    cout << "Masukkan panjang alas: ";
    cin >> alas;

    cout << "Masukkan panjang tinggi: ";
    cin >> tinggi;

    luas = 0.5 * (alas * tinggi);

    cout << "Luas segitiga: " << luas;

    return 0;
}
