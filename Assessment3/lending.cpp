#include<iostream>
using namespace std;
#include<string.h>
class bookMaster;
class book
{
    int isbn;
    char title[20];
    char author[20];
    float price;
    public:
    void get();
    void print();
    friend class bookMaster;
};
class bookMaster
{
    book books[20];
    int num_Of_Books;
    public:
    void get();
    //function to search book with an ISBN number
    //Function must print details
    void search(int);
    //Function to search book with a title
    //Function must print details
    void search(char*);
    //Function to search book with a title and price
    //Function must print details
    void search(char*, float);
};

void book::get() {
    cin>>isbn;
    cin>>title;
    cin>>author;
    cin>>price;
}

void book::print() {
    cout<<isbn<<endl;
    cout<<title<<endl;
    cout<<author<<endl;
    cout<<price<<endl;
}

void bookMaster::get() {
    int i;
    cin>>num_Of_Books;
    for (i=0;i<num_Of_Books;i++) {
        books[i].get();
    }
}

void bookMaster::search(int a) {
    int i;
    for (i = 0; i < num_Of_Books; ++i)
    {
        if(books[i].isbn==a) {
            books[i].print();
        }
    }
}

void bookMaster::search(char *a) {
    int i;
    for (i = 0; i < num_Of_Books; ++i)
    {
        if(strcmp(books[i].title,a)==0) {
            books[i].print();
        }
    }   
}

void bookMaster::search(char *a, float b) {
    int i;
    for (i = 0; i < num_Of_Books; ++i)
    {
        if((strcmp(books[i].title,a)==0)&&books[i].price>b) {
            books[i].print();
        }
    }      
}

int main()
{
    bookMaster b;
    int isbn;
    char tit[20];
    float price;
    b.get();
    cin>>isbn>>tit>>price;
    b.search(isbn);
    b.search(tit);
    b.search(tit,price);
}