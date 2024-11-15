#include<iostream>
using namespace std;
class MyClass1
{
private :
	int num1;
public :
	MyClass1(int k)
	{
		this->num1 = k;
	}
	void disp1()
	{
		cout << "It is disp() of MyClass1 \t"<<num1 << endl;

	}


};
class MyClass2
{
private :
	int num2;
public :
	void disp2(MyClass1 &ref)
	{
		
		cout << "It is Disp()  of MyClass2 " << endl;
		//MyClass1 m1(18);
		ref.disp1();
	}
};

int main()
{
	MyClass1 m1(10);
	m1.disp1();

	MyClass2 m2;
	m2.disp2(m1);

}