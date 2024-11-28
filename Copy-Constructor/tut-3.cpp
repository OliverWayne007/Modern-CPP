#include <iostream>

using namespace std;

class Array
{
    public:

    // Default constructor
    Array()
    {
        cout << "Default constructor is called...." << endl;

        data = new int[10];

        for(int i = 0 ; i < 10 ; i++)
        {
            data[i] = i * i;
        }

    }

    // Copy constructor in order to perform deep-copy
    Array(const Array& rhs)
    {
        cout << "Copy constructor (deep copy) is called...." << endl;
        data = new int[10];
        for(int i = 0 ; i < 10 ; i++)
        {
            data[i] = rhs.data[i];
        }
    }

    void printData()
    {
        for(int i = 0 ; i < 10 ; i++)
        {
            cout << data[i] << endl;
        }
    }

    void setData(int index , int value)
    {
        data[index] = value;
    }

    ~Array()
    {
        cout << "Destructor is called...." << endl;
        delete[] data;
    }

    private:

    int* data;
};

int main()
{
    cout << endl;

    // Default constructor is invoked
    Array arr1;

    arr1.setData(0 , 10000);

    arr1.printData();

    cout << endl;

    // Copy constructor (deep copy) is invoked
    Array arr2 = arr1;

    arr2.printData();

    cout << endl;

    arr2.setData(1 , 20000);

    arr1.printData();

    cout << endl;

    arr2.printData();

    cout << endl;

    Array arr3;
    
    // The default copy-assignment operator provided by the compiler performs shallow copy
    arr3 = arr1;

    arr3.setData(2 , 50000);

    arr1.printData();

    cout << endl;

    arr3.printData();

    cout << endl;

    return 0;
}