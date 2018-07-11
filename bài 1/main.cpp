
#include <iostream>

using namespace std;
//y 1+2
int main(int argc, char *argv[])
{
    int a,b;
    cout<<"nhap 2 so a va b: ";
    cin>>a>>b;
    cout<<"sum= "<<a+b<<endl;
    cout<<"sub= "<<a-b<<endl;
    cout<<"mul= "<<a*b<<endl;
    cout<<"div= "<<(float)a/b<<endl;
    cout<<"medium= "<<(float)(a+b)/2<<endl;
    return 0;
}*/
/* ý 3
#include <iostream>
using namespace std;
int main()
{
    int v,v0,a,t,t0;
    cout<<"hay nhap van toc ban dau v0, gia toc a, thoi gian t,t0"<<endl;
    cin>>v0>>a>>t>>t0;
    if(t<=t0&&a==0) cout<<"v=v0= "<<v0<<endl;
    else cout<<"v=v0+a(t-t0)= "<<v0+a*(t-t0)<<endl;
    return 0;
}
*/
/* ý 4
#include <iostream>
#include <string.h>
using namespace std;
int main(){
    float kt, gk, ck,tong;
    cout<<"xin hay nhap diem kt, gk c.k cua sv A"<<endl;
    cin>>kt>>gk>>ck;
    tong=0.2*kt+0.2*gk+0.6*ck;
    cout<<"tong diem la: "<<tong<<endl;
    if(tong<5) cout<<"xep loai yeu"<<endl;
    else if(5 <= tong <6.9) cout<<"xep loai tb"<<endl;
    else if(7 <= tong <8) cout<<"xep loai kha"<<endl;
    else cout<<"xep loai gioi";

    return 0;
}
*/
/* ý 5
#include <iostream>
using namespace std;
int main(){
    int x,y,p,s;
    cout<<"xin hay nhap x va y:"<<endl;
    cin>>x>>y;
    s=x+y;
    p=x*y;
    cout<<"mul p= "<<x*y<<endl;
    cout<<"sum s= "<<x+y<<endl;
    cout<<"total= "<<s*s+p*(s-x)*(p+y)<<endl;
    return 0;

}
*/
/* ý 6
#include <iostream>
using namespace std;
class sp
{
private:
    double a;
    double b;
public:
    void nhapsp()
    {
        cout<<"nhap phan thuc a: "; cin>>a;
        cout<<"nhap phan ao b: ";   cin>>b;
    }
    void xuatsp()
    {
        cout<<"/nphan thuc la a: "<<a<<endl;
        cout<<"/nphan ao la b: "<<b<<endl;
    }
    sp operator +(sp s2)
    {
        sp s;
        s.a=a+s2.a;
        s.b=b+s2.b;
        return s;
    }
    sp operator -(sp s2)
    {
        sp a;
        s.a=a-s2.a;
        s.b=b-s2.b;
        return s;
    }
};
int main(){

    sp s1, s2,ssum.ssub;
    cout<<"nhap so phuc thu nhat: "<<endl;
    s1.nhapsp();
    cout<<"/nnhap so phuc thu 2: "<<endl;
    s2.nhapsp();
    cout<<"/n tong 2 sp la:"<<endl;
    ssum=s1+s2;ssum.xuatsp();
    cout<</n hieu 2 so phuc la: "<<endl;
    ssub=s1-s2;ssub.xuatsp();
    return 0;
}
*/
/*
#include <iostream>
using namespace std;
class ps
{
private:
    double a;
    double b;
public:
    void nhapps()
    {
        cout<<"nhap tu so"<<endl;
        cin>>a;
        cout<<"nhap mau so"<<endl;
        cin>>b;
    }
    void xuatps()
    {

        cout<<a<<"/"<<b;
    }
    ps operator +(ps s2)
    {
        ps s;
        s.a=a*s2.b+b*s2.a;
        s.b=b*s2.b;
        return s;
    }
};
int main(){

    ps s1, s2,ssum;
    cout<<"nhap ps thu nhat: "<<endl;
    s1.nhapps();
    cout<<"\nnhap ps thu 2: "<<endl;
    s2.nhapps();
    cout<<" tong 2 ps la:";
    ssum=s1+s2;ssum.xuatps();
    cout<<endl;
    return 0;
}
*/
/* ý 7
#include <iostream>
using namespace std;
class sp{
private:
    double a;
    double b;
public:
    void nhapsp(){
        cout<<"nhap phan thuc a: ";
        cin>>a;
        cout<<"\nnhap phan ao b: ";
        cin>>b;
    }
    void xuatsp()
    {
        cout<<a<<"+"<<b<<"i"<<endl;
    }
    sp operator +()
    {
        sp s;
        ++a;
        ++b;
        return s;
    }
    sp operator -()
    {
        sp s;
        --a;
        --b;
        return s;
    }
};
int main()
{
    sp s;
    cout<<"nhap so phuc"<<endl;
    s.nhapsp();
    cout<<"\nso phuc sau khi tang la ";
    +s;
    s.xuatsp();
    s.nhapsp();
    cout<<"\n so phuc sau khi giam la ";
    -s;
    s.xuatsp();
    return 0;
}
*/
