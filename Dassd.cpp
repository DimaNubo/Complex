#include"Complex.h"

void Complex::set_complex(double re, double im)
{
    x = re;
    y = im;
}

double Complex::get_re_complex()
{
    return x;
}

double Complex::get_im_complex()
{
    return y;
}

void Complex::set_re_complex(double r)
{
    x = r;
}

void Complex::set_im_complex(double i)
{
    y = i;
}

Complex::Complex()
{
    x = 0;
    y = 0;
}

Complex::Complex(double re, double im)
{
    x = re;
    y = im;
}

Complex::Complex(const Complex& comp)
{
    x = comp.x;
    y = comp.y;
}

Complex Complex::operator+(Complex re)
{
    Complex Compl;
    Compl.x = x + re.get_re_complex();
    Compl.y = y + re.get_im_complex();
    return Compl;
}
Complex Complex::operator-(Complex re)
{
    Complex Compl;
    Compl.x = x - re.get_re_complex();
    Compl.y = y - re.get_im_complex();
    return Compl;
}

Complex Complex::operator*(Complex re)
{
    Complex Compl;
    Compl.x = x * re.x - y * re.y;
    Compl.y = y * re.x + x * re.y;
    return Compl;
}

Complex Complex::operator/(Complex re)
{
    Complex Compl;
    Compl.x = (x * re.x + y * re.y) / (re.x * re.x + re.y * re.y);
    Compl.y = (re.x * y - x * re.y) / (re.x * re.x + re.y * re.y);
    return Compl;
}


Complex Complex::operator=(Complex re)
{
    x = re.x;
    y = re.y;
    return *this;
}

bool operator==(Complex re, Complex im)
{
    return ((re.x == im.x) && (re.y == im.y));
}

std::ostream& operator<<(std::ostream& out, Complex& re)
{
    out << re.get_re_complex() << "+" << "(" << re.get_im_complex() << ")" << "i" << "\n";
    return out;
}
std::istream& operator>>(std::istream& in, Complex& re)
{
    double x, y;
    in >> x;
    in >> y;
    re.set_re_complex(x);
    re.set_im_complex(y);
    return in;
}