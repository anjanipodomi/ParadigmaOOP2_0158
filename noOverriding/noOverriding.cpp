#include <iostream>
using namespace std;

//class parent
//tambahkan final sesudah nama class
//untuk mencegah adanya overriding

class baseClass
{
public:
	virtual void perkenalan()
	{
		cout << "Halo saya Function dari base class";
	}
};

class derivedClass : public baseClass
{
public:
	void perkenalan()
	{
		cout << "Halo saya function dari derived class";
	}
};




int main()
{
   
}
