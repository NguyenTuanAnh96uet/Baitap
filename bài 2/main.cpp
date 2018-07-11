#include<iostream>
#include<conio.h>
using namespace std;

//bai 2 y 1
int *findMax(int a[],int n){
  int *max=a;
  for(int i=1;i<n;i++)
  {
   if(*max<*(max+i)) *max=*(max+i);
  }
  return max;}
int main(){
  int n,i,*p,a[100];
  cout<<"Nhap so du lieu: ";cin>>n;
  for(i=0;i<n;i++)
   {
  cout<<"Nhap gia tri thu "<<i+1<<" la :";
  cin>>a[i];
   }
  p=findMax(a,n);
  cout<<"Gia tri lon nhat la: "<<*p<<endl;

  return 0;
}
*/
/*
class tien
{
 private:
    double luong;
    double thuong;
    double spend;
    double save;
public:
    void nhap(){
        cout<<"nhap so luong: "; cin>>luong;
        cout<<"nhap tien thuong: "; cin>>thuong;
        cout<<"nhap spend/month: "; cin>>spend;
    }
    double xuat()
    {
        save=luong+thuong-spend;
        return save;
    }

};
int main()
{

    tien nguoi1,nguoi2;
    tien *controtien;
    cout<<"\nnhap thong tin nguoi 1:"<<endl;
    nguoi1.nhap();
    cout<<"\nnhap thong tin nguoi 2:"<<endl;
    nguoi2.nhap();
    controtien=&nguoi1;
    cout<<"so tien tiet kiem :"<<controtien->xuat()<<endl;
    controtien=&nguoi2;
    cout<<"so tien tiet kiem :"<<controtien->xuat()<<endl;
    return 0;
}*/
//bai 2 y 2
using namespace std;
   int main()
    {
     int a[5],i;
     int *p=a;
     cout<<"Nhap 5 so:"<<endl;
     cin>>*p>>*(p+1)>>*(p+2)>>*(p+3)>>*(p+4);
     cout<<"Cac so ban vua nhap la:\n";
     for(i=0;i<5;i++)
        cout<<a[i]<<"\t";
     return 0;
    }
