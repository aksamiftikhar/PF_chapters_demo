#include<iostream>

using namespace std;

const float TAX_RATE = 0.5;

int main()
{
    string name;
    int pause;

    cout<<"Enter your name: ";
    cin>>name;


    cout<<name;

    cin>>pause;

//    const int x = 100, y = 50;
//    string str = "Aksam";
//    string str2 = "Iftikhar";
//    string str3 = str + " " + str2;
//
//    cout<<str3<<endl;
//
//    int feet, inches;
//    cout<<"Enter feet and inches: ";
//    cin>>feet>>inches;
//
//    cout<<"You entered: "<<endl;
//    cout<<feet<<endl<<inches<<endl;


//    int t = 1;
//    cout << ++t<<endl;
//    cout<<"Enter \"x\":";
//    cout<<t<<"\n";
//    cout << --t<<endl;


    // Single line comments: Declaring required variables
    /* multi-line comments: Declaring required variables
    which will be used to store
    length width, area and perimeter of a rectangle.
    */

	double length;
	double width;
	double area;
	double perimeter;

	bool gender = true;




	cout<<"Program to calculate rectangle area and perimeter."<<endl;

	length = 2.5;
	width = 3.0;
	area = length * width;
	length = 3.5;
	perimeter = 2 * (length + width);

	cout<<length<<endl;
	cout<<width<<endl;
	cout<<area<<endl;
	cout<<perimeter<<endl;

	cout<<"double";



	return 0;
}
