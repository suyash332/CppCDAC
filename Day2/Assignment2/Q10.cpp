#include<iostream>
using namespace std;

struct First
{
	int a = 3;
};
struct Second
{
	int b = 7;
}s1;
struct Third
{
	int c = 8;
}t1;
void disp(First &ref)
{
	cout << ref.a<<endl;
}
void disp(Second &ref)
{
	cout << ref.b<<endl;
}
void disp(Third &ref)
{
	cout << ref.c<<endl;
}
int main()
{
	First f1;
	disp(f1);
	disp(s1);
	disp(t1);

}




