#include<iostream>
#include<cmath>
#include<cstdlib>
#include<fstream>
#include<iomanip>
using namespace std;

int main()
{
//    int num;

//    cout<<"Enter num:";
//    cin>>num;
//
//    int i=1;
//    char ch = 'y';
//    while(ch!='n' || ch!='N')
//    {
//        cout<<num<<"*"<<i<<"="<<num*i<<endl;
//        cout<<"Do you want to continue:";
//        cin>>ch;
//        i++;
//    }


    int num;

//    ifstream file;
//    file.open("data.txt");
//    if(!file)
//        cout<<"could";

    cin>>num;
    int sum=0;

    while(cin)
    {
        // process data
        cout<<num<<endl;

        sum = sum+num;
                    cout<<"Sum: "<<sum;

        cin>>num;

    }
    cout<<"Sum: "<<sum;

    char ch;

//    ifstream file;
//    file.open("data.txt");
//    if(!file)
//        cout<<"could";
//
//    file>>ch;
//    while(!file.eof())
//    {
//        // process data
//        if(ch==' ')
//            cout<<" ";
//        else
//            cout<<static_cast<char>(ch-32);
//
//        ch = file.get();
//    }

	return 0;
}
