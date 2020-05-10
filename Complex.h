#ifndef _Complex_h_
#define _Complex_h_
#include<iostream>

class Complex
{
protected:
    double x;
    double y;
public:
    void set_complex(double re, double im);
    double get_re_complex();
    double get_im_complex();
    void set_re_complex(double r);
    void set_im_complex(double i);
    Complex();
    Complex(double re, double im);
    Complex(const Complex& comp);
    Complex operator+(Complex re);
    Complex operator-(Complex re);
    Complex operator*(Complex re);
    Complex operator/(Complex re);
    Complex operator=(Complex re);
    friend bool operator==(Complex re, Complex im);
    friend std::ostream& operator<<(std::ostream& out, Complex& re);
    friend std::istream& operator>>(std::istream& in, Complex& re);
};

#endif
