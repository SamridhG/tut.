
#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;
class Book
{
	protected:
	float price;
	string pub;
	public:
		Book()
		{
			cout<<"Enter Publisher name:";
			cin>>pub;
			cout<<"Price of book:";
			cin>>price;
		}
};
class science:public Book{
 protected:
 string title;
 public:
 science():Book()
 {
 	cout<<"enter title of book:";
 	cin>>title;
	 }	
	 
 friend ostream& operator <<(ostream&,science );
 
};
ostream& operator <<(ostream&,science M)
 {
 	cout<<"PUBLISHER NAME:"<<M.pub<<endl<<"TITLE OF BOOK:"<<M.title<<endl;
 	cout<<"PRICE OF BOOK:"<<fixed<<setprecision(2)<<M.price;
 	return cout;
 }
 int main()
 {
 	science A;
 	
 	cout<<endl<<A;
 	return 0;
 }
