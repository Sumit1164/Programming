#include <iostream>
using namespace std;
class Complex
{
private:
    float real;
    float imag;
public:
    // Constructor
    Complex(float r = 0, float i = 0)
    {
        real = r;
        imag = i;
    }

    // Overload + operator (member function)
    Complex operator+(const Complex &other) const
    {
        return Complex(real + other.real, imag + other.imag);
    }

    // Overload == operator (member function)
    bool operator==(const Complex &other) const
    {
        return (real == other.real && imag == other.imag);
    }

    // Overload << operator (friend function)
    friend ostream &operator<<(ostream &out, const Complex &c);

    // Overload >> operator (friend function)
    friend istream &operator>>(istream &in, Complex &c);
};

// Definition of << operator
ostream &operator<<(ostream &out, const Complex &c)
{
    out << c.real << " + " << c.imag << "i";
    return out;
}

// Definition of >> operator
istream &operator>>(istream &in, Complex &c)
{
    cout << "Enter real part: ";
    in >> c.real;
    cout << "Enter imaginary part: ";
    in >> c.imag;
    return in;
}

// Main function
int main()
{
    Complex c1, c2;

    cout << "Enter first complex number:\n";
    cin >> c1;

    cout << "\nEnter second complex number:\n";
    cin >> c2;

    Complex sum = c1 + c2;

    cout << "\nFirst complex number: " << c1 << endl;
    cout << "Second complex number: " << c2 << endl;
    cout << "Sum: " << sum << endl;

    if (c1 == c2)
    {
        cout << "Both complex numbers are equal.\n";
    }
    else
    {
        cout << "Complex numbers are different.\n";
    }

    return 0;
}
