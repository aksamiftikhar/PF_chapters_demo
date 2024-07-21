#include<iostream>
#include<cmath>
#include<fstream>
#include<iomanip>
using namespace std;

int main()
{
    // variables declaration
    int x=10, y=20, z=30;
    float average = 60;
    char ch;
    bool test = false;

    //cout << (x<5);
    //cout<< test;

//    if(average>=50)
//    {
//        cout<<"Congrats"<<endl;
//        cout<<"You passed!"<<endl;
//    }
//    cout<<"End of program!";
//

    cin>>x;
    if(cin)
        cout<<x;
    else
        cout<<"Input failure";

    if(x=0)
        cout<<"Inside if: X is "<<x;

    cout<<"X is "<<x;

    ifstream file1;
    file1.open("data.txt");

    if(!file1)
        cout<<"File could not be opened!";

	return 0;
}
