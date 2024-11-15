#include<iostream>
using namespace std;
class Base
{ public :
	int num1;
	Base(int num1)
	{
		//this->num1 = num1;
		this->num1 = num1;
		cout << "InConstructor Base" << num1 << endl;

	}
	~Base()
	{
		cout << "The destructor of Base" << endl;
	}

};
class Sub1 :public Base
{
    public:
		int num2;
		Sub1(int num2):Base(20)
		{
			this->num2 = num2;
			cout << "InConstructor Sub1" << num2 << endl;
		}
		~Sub1()
		{
			cout << "InDestructor Sub1" << endl;
		}


};
class Sub2 : public Sub1
{
     public :
		 int num3;
		 Sub2(int num3) :Sub1(10)
		 {
			 this->num3 = num3;
			 cout << "InConstructor of Sub2" << num3 << endl;
		 }
		 ~Sub2()
		 {
			 cout << "InDestructor" << endl;
		 }
};
int main()
{
	Sub2 s(5);
}

