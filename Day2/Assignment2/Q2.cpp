//#include<iostream>
//using namespace std;
//struct Book
//{
//	char bid[5];
//	char name[30];
//	int price;
//
//};
//int main()
//{
//	struct Book* ptr;
//	cout << "How many Records" << endl;
//	int rec;
//	cin >> rec;
//
//	ptr = new Book[rec];
//	for (int i = 0;i < rec;i++)
//	{
//		cout << "------";
//		cout << "Enter the record for \t" << (i + 1)<<endl;
//		cout << "Enter the BookId =";
//		cin >> ptr[i].bid;
//		cout << "Enter  the Book name :";
//		cin >> ptr[i].name;
//		cout << "Enter the Price :";
//		cin >> ptr[i].price;
//
//
//	}
//	for (int i = 0;i < rec;i++)
//	{
//		cout << "Print The record of" << (i + 1);
//		cout <<"The BookId is =" << ptr[i].bid<<"\t The book name is :" << ptr[i].name <<"\tThe Price is =" << ptr[i].price << endl;
//
//	}
//	delete[] ptr;
//  
//}
//
//
