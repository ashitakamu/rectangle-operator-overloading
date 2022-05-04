#ifndef __PERSEGI_PANJANG_HPP__
#define __PERSEGI_PANJANG_HPP__
#include <iostream>
    class persegiPanjang{
        private:
            float xMaks, xMin, yMaks, yMin;
        public:
            persegiPanjang(float titikTengahX, float titikTengahY, float panjang, float lebar);
            bool operator== (persegiPanjang const &)const;
            persegiPanjang operator+ (persegiPanjang const &);
            persegiPanjang operator- (persegiPanjang const &);
            void operator++ ();
            void operator++(int);
            void operator-- ();
            void operator--(int);
            float operator[](int pilihan);
            void output();
    };
#endif