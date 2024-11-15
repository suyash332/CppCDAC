//#include<iostream>
//using namespace std;
//
//class MyClass
//{
// private :
//	 int num;
// public :
//	 MyClass()
//	 {
//		 cout << "InDefault Const" << endl;
//	 }
//	 MyClass(int k)
//	 {
//		 num = k;
//		 cout << "In parameterized Const" << endl;
//
//	 }
//	 ~MyClass()
//	 {
//		 cout << "In Destructor" <<num<< endl;
//
//	 }
//	 void setNum(int k)
//	 {
//		// cout << "In setter" << endl;
//		 this->num = k;
//	 }
//	 int getNum()
//	 {
//		 return num;
//	 }
//
//};
//int main()
//{
//	MyClass m;
//	m.setNum(100);
//	
//	MyClass* ptr = new MyClass(6);
//	delete ptr;
//	MyClass m1(199);
//	cout << endl << m1.getNum() << endl;
//
//
//
//
//
//
//
//}