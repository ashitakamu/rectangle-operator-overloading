#include <iostream>
#include "include/persegiPanjang.hpp"
using namespace std;

int main(){
    float panjang, lebar, tx, ty;
    persegiPanjang pp3(0,0,0,0);

    cout << "-----------------Tugas Operator Overloading-----------------" << endl;
    cout << "(Dibuat untuk memenuhi tugas Mata Kuliah Pemrograman Lanjut)" << endl << endl;

    cout << "Masukkan Data Persegi Panjang 1" << endl;
    cout << "Panjang : "; cin >> panjang; cout << endl;
    cout << "Lebar : "; cin >> lebar; cout << endl;
    cout << "Titik Tengah X : "; cin >> tx; cout << endl;
    cout << "Titik Tengah Y : "; cin >> ty; cout << endl;
    persegiPanjang pp1(panjang, lebar, tx, ty);

    cout << "Masukkan Data Persegi Panjang 2" << endl;
    cout << "Panjang : "; cin >> panjang; cout << endl;
    cout << "Lebar : "; cin >> lebar; cout << endl;
    cout << "Titik Tengah X : "; cin >> tx; cout << endl;
    cout << "Titik Tengah Y : "; cin >> ty; cout << endl;
    persegiPanjang pp2(panjang, lebar, tx, ty);

    system("cls || clear");

    cout << "Data Awal" << endl;
    cout << "PERSEGI PANJANG 1" << endl; 
    pp1.output();
    cout << endl;
    cout << "PERSEGI PANJANG 2" << endl;
    pp2.output();

    cout << endl;
    cout << "Operator +" << endl;
    pp3 = pp1 + pp2;
    if (pp1==pp2){
        pp3.output();
    }
    
    cout << endl;
    cout << "Operator -" << endl;
    pp3 = pp1 - pp2;
    if (pp1==pp2){
        pp3.output();
    }
    
    cout << endl;
    cout << "Operator ++ (Pada persegi panjang 1)" << endl;
    ++pp1;
    cout << "Persegi Panjang 1 setelah diberi Operator ++ : " << endl;
    pp1.output();
    --pp1;

    cout << endl;
    cout << "Operator -- (Pada persegi panjang 2)" << endl;
    --pp2;
    cout << "Persegi Panjang 2 setelah diberi Operator -- : " << endl;
    pp2.output();
    ++pp2;

    cout << endl;
    cout << "Operator [] (Perbandingan kedua xMin Pp1 dan Pp2)" << endl;
    cout << "Nilai xMin Pp1 : " << pp1[1] << endl;
    cout << "Nilai xMin Pp2 : " << pp2[1] << endl;
    if (pp1[1] > pp2[1]){
        cout << "xMin Pp 1 lebih besar dari xMin Pp 2";
    }else if(pp2[1] > pp1[1]){
        cout << "xMin Pp 2 lebih besar dari xMin Pp 1";
    }else{
        cout << "Kedua xMin sama";
    }

    cout << endl << endl;
    cout << "Operator == (Pembuktian Kedua Persegi panjang saling beririsan/tidak)" << endl;
    if (pp1==pp2){
        cout << "Kedua persegi panjang beririsan" << endl;
    }else{
        cout << "Kedua persegi panjang tidak beririsan" << endl;
    }
    
    return 0;
}