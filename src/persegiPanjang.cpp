#include <iostream>
#include <cmath>
#include "include/persegiPanjang.hpp"
using namespace std;

void persegiPanjang::output(){
    float panjang = this->xMaks - this->xMin; panjang = abs(panjang);
    float lebar   = this->yMaks - this->yMin; lebar   = abs (lebar);
    
    cout << "Titik Tengah X : " << (this->xMaks - this->xMin)/2 + this->xMin; cout << endl;
    cout << "Titik Tengah Y : " << (this->yMaks - this->yMin)/2 + this->yMin; cout << endl;
    cout << "Panjang (xMaks - xMin) : " << panjang; cout << endl;
    cout << "Lebar (yMaks - yMin) : " << lebar; cout << endl;
    cout << "Nilai xMin : " << this->xMin; cout << endl;
    cout << "Nilai xMmaks : " << this->xMaks; cout << endl;
    cout << "Nilai yMin : " << this->yMin; cout << endl;
    cout << "Nilai yMaks : " << this->yMaks; cout << endl;
}

persegiPanjang::persegiPanjang(float titikTengahX, float titikTengahY, float panjang, float lebar){
    this->xMin = titikTengahX - (panjang/2);
    this->yMin = titikTengahY - (lebar/2);
    this->xMaks = titikTengahX + (panjang/2);
    this->yMaks = titikTengahY + (lebar/2);
}

bool persegiPanjang::operator==(persegiPanjang const &baru)const{
    if (this->xMaks > baru.xMin && this->xMin < baru.xMaks && this->yMaks > baru.yMin && this->yMin < baru.yMaks){
        return true;
    }else{
        return false;
    }
}

persegiPanjang persegiPanjang::operator+(persegiPanjang const &baru){
    persegiPanjang temp(0,0,0,0);

    if (*this == baru){
        temp.xMin = min(this-> xMin,baru.xMin);
        temp.yMin = min(this-> yMin,baru.yMin);
        temp.xMaks = max(this-> xMaks,baru.xMaks);
        temp.yMaks = max(this-> yMaks,baru.yMaks);
    }else{
        cout << "Kedua bangun tidak beririsan" << endl;
    }
    return temp;
}

persegiPanjang persegiPanjang::operator-(persegiPanjang const &baru){
    persegiPanjang temp(0,0,0,0);

    if (*this == baru){
        temp.xMin = max(this-> xMin,baru.xMin);
        temp.yMin = max(this-> yMin,baru.yMin);
        temp.xMaks = min(this-> xMaks,baru.xMaks);
        temp.yMaks = min(this-> yMaks,baru.yMaks);
    }else{
        cout << "Kedua bangun tidak beririsan";
    }
    return temp;
}

void persegiPanjang::operator++(){
    float panjang = 0, lebar = 0, xMidpoint = 0, yMidpoint = 0;

    panjang = this->xMaks - this->xMin; panjang = abs(panjang);
    lebar = this->yMaks - this->yMin; lebar = abs(lebar);
    xMidpoint = this->xMin + panjang/2;
    yMidpoint = this->yMin + lebar/2;

    panjang = panjang * 2;
    lebar = lebar * 2;

    this->xMin = xMidpoint - panjang/2;
    this->yMin = yMidpoint - lebar/2;
    this->xMaks = xMidpoint + panjang/2;
    this->yMaks = yMidpoint + lebar/2;
}

void persegiPanjang::operator--(){
    float panjang = 0, lebar = 0, xMidpoint = 0, yMidpoint = 0;

    panjang = this->xMaks - this->xMin; panjang = abs(panjang);
    lebar = this->yMaks - this->yMin; lebar = abs(lebar);
    xMidpoint = this->xMin + panjang/2;
    yMidpoint = this->yMin + lebar/2;

    panjang = panjang / 2;
    lebar = lebar / 2;

    this->xMin = xMidpoint - panjang/2;
    this->yMin = yMidpoint - lebar/2;
    this->xMaks = xMidpoint + panjang/2;
    this->yMaks = yMidpoint + lebar/2;
}

float persegiPanjang::operator[](int pilihan){
    switch (pilihan){
    case 1:
        return this->xMin;
        break;
    case 2:
        return this->xMaks;
        break;
    case 3:
        return this->yMin;
        break;
    case 4:
        return this->yMaks;
        break;
    }
    return 0;
}