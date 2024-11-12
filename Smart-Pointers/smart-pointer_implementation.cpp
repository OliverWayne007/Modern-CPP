#include <iostream>

using namespace std;

template <typename T>
class SmartPointer
{
    private: 

    T* member_pointer;

    public: 

    SmartPointer(T* a) : member_pointer(a)
    {
        cout << "Inside the constructor...." << endl;
    }

    ~SmartPointer()
    {
        cout << "Inside the destructor....." << endl;
        delete member_pointer;
    }

    // Overloading the dereference (*) operator
    T& operator* ()
    {
        return *member_pointer;
    }

    // move constructor to transfer ownership
    SmartPointer(SmartPointer&& smartPointer)
    {
        
    }
};

int main()
{
    SmartPointer <int> smartIntegerPointer( new int(10) );
    cout << *smartIntegerPointer << endl;
    SmartPointer <double> smartDoublePointer( new double(198.12345) );
    cout << *smartDoublePointer << endl;
    SmartPointer <char> smartCharPointer( new char('a') );
    cout << *smartCharPointer << endl;
    SmartPointer <float> smartFloatPointer( new float(234.23415f) );
    cout << *smartFloatPointer << endl;
    return 0;
}