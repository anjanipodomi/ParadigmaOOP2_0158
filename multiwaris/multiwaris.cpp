#include <iostream>
using namespace std;

class orang
{
public:
    int umur;

    orang(int pUmur) :
        umur(pUmur)
    {
        cout << "orang dibuat dengan umur" << umur << "\n" << endl;
    }
};

class Pekerja : virtual public orang
{
public:

    Pekerja(int pUmur) :
        orang(pUmur)
    {
        cout << "pelajar dibuat\n" << endl;
    }
};

class pelajar : virtual public orang
{
public:
    pelajar(int pUmur) :
        orang(pUmur)
    {
        cout << "pelajar dibuat\n" << endl;
    }
};

int main()
{
    
}
