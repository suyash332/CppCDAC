#include<iostream>
using namespace std;
int main()
{
	char str[30];
	void tog(char*);
	cout << "Enter the string" <<endl;
	cin >> str;

	//cout<<strlen(str);
	tog(str);

}
void tog(char* ptr)
{
	int length = strlen(ptr);
	cout << length << endl;
	//int i;
	if (*ptr != '\0')
	{
			++*ptr;
			cout <<*ptr<<endl;
	}

	while (*ptr!= '\0')
	{
		cout << "---"<<endl;
		*ptr++;
	}

	*ptr--;
	++*ptr; 
	cout << *ptr<<endl;
			
	
	
	//cout << *ptr;
	for (int i = 0;ptr[i] != '\0';i++)
	{
		cout << ptr[i] << endl;
	}

}
