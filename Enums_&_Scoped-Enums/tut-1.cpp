#include <iostream>

using namespace std;

// Enums

enum Color
{
    Red , Green , Blue
};

enum Fruit
{
    Apple , Banana , Mango
};

int main()
{
    Color color { Red };
    Fruit fruit { Apple };
    
    cout << "color: " << color << endl;
    cout << "fruit: " << fruit << endl;
    
    if(color == fruit)
    {
        cout << "color and fruit are equal !" << endl;
    }
    else
    {
        cout << "color and fruit are not equal !" << endl;
    }
    
    return 0;
}