#include<iostream>
#include<cmath>

using namespace std;
//int abs(int x) // function header, x is a formal parameter
//{ // start funciton body
//    int y = 30;
//    return -1;
////    cout<<y;
//    if(x<0)
//        return x*-1;
//    else
//        return x;
//} // end function body
//int main()
//{
////    int x = pow(5, 3);
////
////    int a=2, b=1, c=1;
////    int disc = 5+pow(b, 2)-4*a*c;
////
////    cout<<pow(5, 3);
////
////    cin.ignore(100, '\n');
//    int y = 30;
//
//    int p = -1; // y is called an actual argument
//    cout<<abs(30);
////    int x = 10;
////    cout<<x;
////int y = 10;
//
//	return 0;
//}
int gTest = 0;

int LCM(int den1, int den2)
{
    int lcm;
    // algo for computing lcm
    //cout<<gTest;
    return lcm;

}

//int cross_mult(int lcm, int x1, int x2, int y1, int y2)
//{
//    // algo for doing cross mult
//
//    return cm;
//
//}
double posRoot(int a, int b, int c); // formal parameters

int g = 10;
void refParamTest(int &x1)
{
    int p=10;
    x1 = 30;
    cout<<g;
}
int main() {
    int g = 50;
    cout<<g;
    int a = 20;
    cout<<a;
    int a1 ;
    for(int i=0;i<10;i++)
    {
        a1 = 30; // shadowing

        cout<<a;
        int j = 10;
    }

    cout<<a;
    refParamTest(a);
    cout<<a;

//    int x = 1;
//    posRoot(x, 2, 1);
//    int temp;
//    cout<<temp;
//    temp = 10;

//    int num1=1, num2=3, den1=2, den2 = 4;
//    int lcm1 = LCM(den1, den2);
//    int cm1 = cross_mult(lcm1,num1, num2, den1, den2);
//    cout<<lcm1<<"/"<<cm1;
//    double res = posRoot(x, 2, 1); // actual arguments
//    cout<<res;
return 0;
}


double posRoot(int a, int b, int c) // formal parameters
{
    double disc = b*b - 4*a*c;
    double den = -b + sqrt(disc);
    double num = 2*a;
    cout<<den/num;
    return (den/num); // 3
}
// reference parameters
int quadRoots(int a, int b, int c) // formal parameters
{
    double disc = b*b - 4*a*c;
    double den = -b + sqrt(disc);
        double den2 = -b - sqrt(disc);

    double num = 2*a;
    cout<<den/num;
    cout<<den2/num;

    return den/num;
}
