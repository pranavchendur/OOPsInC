#include <iostream>
using namespace std;

class nutrients {
    int carb,pro,fat;
    public:
        nutrients() {}
        friend istream& operator>>(istream &i,nutrients&);
        friend ostream& operator<<(ostream &o,nutrients&);
        nutrients operator+(nutrients&);
        nutrients operator-(nutrients&);
        int operator[](int);
};

istream& operator>>(istream& i,nutrients &a) {
    i>>a.carb>>a.pro>>a.fat;
}

ostream& operator<<(ostream& o,nutrients &a) {
    o<<a.carb<<endl<<a.pro<<endl<<a.fat<<endl;
}

nutrients nutrients::operator+(nutrients &a) {
    nutrients c;
    c.carb = carb+a.carb;
    c.pro = pro+a.pro;
    c.fat = fat+a.fat;
    return c;
}

nutrients nutrients::operator-(nutrients &a) {
    nutrients c;
    c.carb = carb-a.carb;
    c.pro = pro-a.pro;
    c.fat = fat-a.fat;
    return c;
}

int nutrients::operator[](int i) {
    if (i==0)
        return carb;
    else if (i==1)
        return pro;
    else if (i==2)
        return fat;
    else
        throw(i);
}

int main()
{
    nutrients n1,n2,n3;
    int i,j,p;
    cin>>n1>>n2;
    cin>>i>>j>>p;
    n3 = n1+n2;
    cout<<n3;
    try
    {
    cout<<n1[i]<<endl;
    cout<<n1[j]<<endl;
    cout<<n1[p]<<endl;
    }catch(int k)
    {
    cout<<"Exception Caught";
    }
}