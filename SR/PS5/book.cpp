#include<iostream>
using namespace std;
class learning_Material
{
    protected:
    char isbn[15];
    char title[20];
    char author[20];
    int year;
    float price;
    public:
    void get();
    void print();
};

​void learning_Material::get() {
    int n;
    scanf("%d",&n);
    
}

void learning_Material::print() {

}

int main()
{
    int ch;
    cin>>ch;
    if(ch==0)
    {
    book a;
    a.get();
    a.calc_Price();
    a.print();
    }
    else
    {
    CD e;
    e.get();
    e.calc_Price();
    e.print();
    }
}