#include<iostream>
#include<cmath>
#include<fstream>
#include<iomanip>
using namespace std;

int main()
{
    // variables declaration
    int x=10, y=20, z=30;
    float average;
    char ch;

    // basic input
//    cin>>x;
//  cout<<"X is "<<x<<endl;

   // using cin.get

//    cin>>ch;
//    cin.get(ch);
//    cout<<ch;
//    cout<<"ch: "<<static_cast<int>(ch);

    // using cin.ignore
//    cin>>x;
//    cin.ignore(5, '\n');
//    cin>>y;
//    cout<<x<<", "<<y;

    // calling predefined functions
    /* 2 and 3 are function 'arguments'
     * The function call evaluates to 8.
    */
//    cout<<pow(2,3);

    // test input failure
//    cin>>x; // input a char value, e.g., 'a'
//    cout<<"X is "<<x<<endl;
//    cin>>z;
//    cin>>y;
//    cout<<z<<", "<<y;

    // restore input state in case of input failure
//    cin>>x;
//    cout<<"X is "<<x<<endl;
//    cin.clear();
//    cin.ignore(100, '\n');
//    cin>>z;
//    cin.ignore(5, '\n');
//    cin>>y;
//    cout<<z<<", "<<y;

    // string input (single-word and multi-word)
//    string s;
//    cout<<"Enter a string: ";
//    cin>>s;           // single-word string input
//    getline(cin, s);  // multi-word string input
//    cout<<"s = "<<s;

    // File input basics
//    ifstream inputFile;
//    inputFile.open("data.txt");
//    inputFile>>x; // read an integer
//    cout<<x;
//    inputFile>>ch; // read a char ignoring whitespace
//    ch = inputFile.get(); // read a char including whitespace
//    cout<<static_cast<int>(ch);
    // Note that all input functions that work with cin
    // also work with file input.

    // File input/output basics
    ifstream inputFile;
    ofstream outputFile;
    inputFile.open("data.txt");
    outputFile.open("output.txt");
    inputFile>>x>>y>>z;
    average = (x+y+z)/3.0;
    outputFile<<"The average is: "
              <<fixed<<setprecision(2)
              <<average;
    // Note that all output formatting functions that work
    // with cout also work with file input.
    cout<<"The average is: "<<average;
    inputFile.close();
    outputFile.close();

	return 0;
}
