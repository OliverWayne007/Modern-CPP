#include <bits/stdc++.h>

using namespace std;

class Quadratic
{
    private:

    float a;
    float b;
    float c;

    public:

    // Constructor
    Quadratic(float a = 0 , float b = 0 , float c = 0)
    {
        cout << "The address of this object is: " << this << endl;
        this -> a = a;
        this -> b = b;
        this -> c = c;
    }

    // Copy constructor
    void operator= (Quadratic& func)
    {
        this -> a = func.a;
        this -> b = func.b;
        this -> c = func.c;
        return;
    }

    // overloading the () operator ----> operator overloading
    double operator() (float x)
    {
        return a * x * x + b * x + c;
    }

    void displayCoefficients()
    {
        cout << "a: " << this -> a << endl;
        cout << "b: " << this -> b << endl;
        cout << "c: " << this -> c << endl;
    }

    // Destructor
    ~Quadratic()
    {
        cout << "The address of this object is: " << this << endl;
        cout << "The object of the quadratic class is getting destroyed......" << endl << endl;
    }

};

int main()
{
    cout << endl;

    // Quadratic f (1.0 , 2.0 , 1.0);

    Quadratic* f = new Quadratic(1.0 , 2.0 , 3.0);

    // f.displayCoefficients();

    f -> displayCoefficients();

    Quadratic g;   // default arguments set to 0 if arguments not passed explicitly

    g.displayCoefficients();

    // cout << "f(1.0): " << f(1.0) << endl;     // f(1.0) = f.operator()(1.0)

    cout << "f(1.0): " << (*f)(1.0) << endl;

    // g = f; // g.operator=(f);

    g = (*f);

    g.displayCoefficients();

    delete f;

    return 0;
}