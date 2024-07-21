
#include<iostream>
#include<cmath>
using namespace std;


struct point
{
    int x;
    int y;
};
struct Book
{
    int bookId;
    string bookTitle;
    double bookPrice;
};

void displayBook(Book &tempBook)
{
    tempBook.bookId = 10000;
    cout<<endl<<endl;
    cout<<"book id: "<<tempBook.bookId;
    if(tempBook.bookPrice>100)
        cout<<"The book "<<tempBook.bookTitle<<" is very expensive!";
    else
        cout<<"The book "<<tempBook.bookTitle<<" is very cheap!";
    cout<<endl<<endl;
}

Book updateBook(Book tempBook)
{
    tempBook.bookId = 10000;

    return tempBook;
}
void temp(int x)
{
//    cout<<x;
}
int main()
{
    point p1  = {10, 20};
    Book b1 = {100, "C++ is very easy", 1};
    Book b2 = b1;
//    b2.bookId= 200;
//    cout<<b2.bookId<<b1.bookId;
//    getline(cin, b1.bookTitle);
//    cout<<b1.bookTitle;
    point p2 = {3, 5};

//    cout<<b1.bookId;
//    displayBook(b1);
//    cout<<b1.bookId<<endl;


    cout<<endl<<b1.bookId<<endl;
    b1 = updateBook(b1);
    cout<<b1.bookId<<endl<<endl;

//    if(p1==p2) // error
//        cout<<"Equal points";


//    cout << p1.y+5;
    temp(p1.y);

    point pArr[2] = {p1, p2};

    point p3 = p1;
    p3.x = 1000;
    cout<<p1.x<<p1.y;
    cout<<endl;
    cout<<p3.x<<p3.y;
	return 0;
}
