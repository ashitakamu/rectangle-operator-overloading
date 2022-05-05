#include <iostream>
#include <conio.h>
#include "include/persegiPanjang.hpp"
using namespace std;

void endProgram(){
    cout << endl;
    cout << "Press Enter to Continue...";
    getch();
}

int main(){
    float panjang, lebar, tx, ty;
    persegiPanjang pp3(0,0,0,0);

    cout << "-----------------Tugas Operator Overloading-----------------" << endl;
    cout << "(Dibuat untuk memenuhi tugas Mata Kuliah Pemrograman Lanjut)" << endl << endl;

    cout << "Masukkan Data Persegi Panjang 1" << endl;
    cout << "Panjang (Sumbu X) : "; cin >> panjang; cout << endl;
    cout << "Lebar (Sumbu Y) : "; cin >> lebar; cout << endl;
    cout << "Titik Tengah X : "; cin >> tx; cout << endl;
    cout << "Titik Tengah Y : "; cin >> ty; cout << endl;
    persegiPanjang pp1(tx, ty, panjang, lebar);

    cout << "Masukkan Data Persegi Panjang 2" << endl;
    cout << "Panjang (Sumbu X) : "; cin >> panjang; cout << endl;
    cout << "Lebar (Sumbu Y) : "; cin >> lebar; cout << endl;
    cout << "Titik Tengah X : "; cin >> tx; cout << endl;
    cout << "Titik Tengah Y : "; cin >> ty; cout << endl;
    persegiPanjang pp2(tx, ty, panjang, lebar);

    system("cls || clear");

    cout << "Data Awal" << endl;
    cout << "PERSEGI PANJANG 1" << endl; 
    pp1.output();
    cout << endl;
    cout << "PERSEGI PANJANG 2" << endl;
    pp2.output();

    cout << endl;
    cout << "OPERATOR +" << endl;
    pp3 = pp1 + pp2;
    if (pp1==pp2){
        pp3.output();
    }
    
    cout << endl;
    cout << "OPERATOR -" << endl;
    pp3 = pp1 - pp2;
    if (pp1==pp2){
        pp3.output();
    }
    
    cout << endl;
    cout << "OPERATOR ++ (Pada persegi panjang 1)" << endl;
    ++pp1;
    cout << "Persegi Panjang 1 setelah diberi Operator ++ : " << endl;
    pp1.output();
    --pp1;

    cout << endl;
    cout << "OPERATOR -- (Pada persegi panjang 2)" << endl;
    --pp2;
    cout << "Persegi Panjang 2 setelah diberi Operator -- : " << endl;
    pp2.output();
    ++pp2;

    cout << endl;
    cout << "OPERATOR [] (Perbandingan kedua xMaks Pp1 dan Pp2)" << endl;
    cout << "Nilai xMaks Pp1 : " << pp1[2] << endl;
    cout << "Nilai xMaks Pp2 : " << pp2[2] << endl;
    if (pp1[2] > pp2[2]){
        cout << "xMaks Pp 1 lebih besar dari xMaks Pp 2";
    }else if(pp2[2] > pp1[2]){
        cout << "xMaks Pp 2 lebih besar dari xMaks Pp 1";
    }else{
        cout << "Kedua xMaks sama";
    }

    cout << endl << endl;
    cout << "OPERATOR == (Pembuktian Kedua Persegi panjang saling beririsan/tidak)" << endl;
    if (pp1==pp2){
        cout << "Kedua persegi panjang beririsan" << endl;
    }else{
        cout << "Kedua persegi panjang tidak beririsan" << endl;
    }
    
    endProgram();
    return 0;
}