#include <iostream>
using namespace std;

class AbstraksiKlas {
private: string x, y;

public:
    //mothod untuk mengisi nilai
    //private member
    void setXY(string a, string b) {
        x = a;
        x = b;
    }
    //menampilkan nilai
    void display() {
        cout << "x = " << x << endl;
    }
};




int main()
{
    
}
