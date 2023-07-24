//tu mau
#include<iostream>
#include<iomanip>
using namespace std;
class sothuc{
	private:
		float tu;
		float mau;
	public:
		void nhap()
		{
			cout<<"nhap tu: ";
			cin>>tu;
			cout<<"nhap mau: ";
			cin>>mau;	
			while (mau == 0)
			{
				cout<<"nhap lai mau so:";
				cin>>mau;
			}
		}	
		void xuat()
		{
			cout<<tu<<"/"<<mau<<endl;
		}
};
int main()
{
	sothuc a;
	a.nhap();
	a.xuat();
}
