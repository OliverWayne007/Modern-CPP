#include <bits/stdc++.h>
#include <stdexcept>

using namespace std;

class Printer
{
    private:

    string _name;

    int _availablePapers;

    public:

    Printer(string name , int papers)
    {
        this -> _name = name;
        this -> _availablePapers = papers;
    }

    void Print(string txtDoc)
    {
        cout << "Available papers: " << _availablePapers << endl;

        // Assuming a single paper can only contain 10 letters/characters
        int requiredPapers = txtDoc.length() / 10;
        cout << "Required papers: " << requiredPapers << endl;

        if(_availablePapers < requiredPapers)
        {
            throw string("Not enough paper.....");
        }
        _availablePapers -= requiredPapers;
        cout << "Printing...." << txtDoc << endl;
    }
};

// Program statements that you want to monitor for exceptions are contained in the try block.
// If any excepption occurs within the try block, it is thrown using the throw keyword.
// The exception generated in the try block and thrown using the throw keyword is caught using the catch(){} block.

int main()
{
    cout << endl;
    Printer myPrinter("HP Smart-Printer" , 5);
    try
    {
        myPrinter.Print("My name is Oliver Queen");
        myPrinter.Print("For 5 years I was stranded on an island called Lian Yu");
        myPrinter.Print("After 5 years of hell, I have come to save my city !");    
    }
    catch(string exception)
    {
        cout << "Exception: " << exception << endl;
    }
    cout << endl;
    return 0;
}