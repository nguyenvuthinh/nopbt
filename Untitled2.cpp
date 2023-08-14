#include<iostream>
#include<string.h>
using namespace std;
class nguoi{
    protected:
        char ht[20];
        int y;
    public:
        void nhap(){
            cout<<"nhap ho ten: ";
            fflush(stdin);
            cin.getline(ht,20);
            cout<<"nhap nam sinh: ";
            cin>>this->y;
        }
        void xuat(){
            cout<<"ho ten: "<<ht<<endl
                <<"nam sinh: "<<y<<endl;
                
        }
        
};
class thisinh : public nguoi{
    private:
        char sbd[10];
        float t,l,h;
    public:
        void nhap(){
            nguoi::nhap();
            cout<<"nhap sbd: ";
            fflush(stdin);
            cin.getline(sbd,10);
            cout<<"nhap diem toan: "; cin>>this->t;
            cout<<"nhap diem ly: "; cin>>this->l;
            cout<<"nhap diem hoa: "; cin>>this->h;
        }    
        void xuat(){
            nguoi::xuat();
            cout<<"sbd: "<<sbd<<endl
                <<"diem toan: "<<t<<endl
                <<"diem ly: "<<l<<endl
                <<"diem hoa: "<<h<<endl
                <<"tong 3 mon la: "<<tong()<<endl;
        }
        float tong(){
            return this->t + this->l + this->h;
        }
        char* get_sbd()
        {
            return this->sbd;
        }
};
void nhapds(thisinh a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"nhap thong tin thi sinh thu "<<i+1<<endl;
        a[i].nhap();
    }
}
void xuatds(thisinh a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"xuat thong tin thi sinh thu "<<i+1<<endl;
        a[i].xuat();
    }
}
void sort(thisinh a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if( a[i].tong()>a[j].tong() )
            {
                swap(a[i],a[j]);
            }
        }
    }
}
void tim(thisinh a[],int n)
{
    char sbdt[10];
    cout<<"nhap sbd can tim"; 
    fflush(stdin);
    cin.getline(sbdt,10);
    for(int i=0;i<n;i++)
    {
        if(strcmp(a[i].get_sbd(), sbdt) == 0)
        {
            a[i].xuat();
            break;
        }
    }
}

int main()
{
    int n;
    cout<<" so thi sinh: "; cin>>n;
    thisinh a[n];
    nhapds(a,n);
    xuatds(a,n);
    cout<<"\t\t/tds sau khi sap xep\t\t"<<endl;
    sort(a,n);
    xuatds(a,n);
    tim(a,n);
}
