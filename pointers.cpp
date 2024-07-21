#include<iostream>
#include<cmath>
using namespace std;

void computeRoots(double a, double b, double c,
                  double *x1, double *x2)
{
    double disc = b*b-4*a*c;

    if(disc>0)
    {
        *x1 = (-b+sqrt(disc))/(2*a);
        *x2 = (-b-sqrt(disc))/(2*a);
        cout<< *x1 * *x2;
    }
    else
    {
        cout<<" no real roots exit ";
    }

}

int main()
{

    int num = 6;
    int *p = &num; // assume address of num is 10000

    cout<< (*num)++;
    //c. &num+1;			d. (*num)++;
//
//    double a, b, c;
//    cin>>a>>b>>c;
//
//    double x1, x2;
//
//    computeRoots(a, b, c, &x1, &x2);
//    cout<<x1<<", "<<x2<<endl;
//
//    double *pX1 = &x1;
//    double *pX2 = &x2;
//    computeRoots(a, b, c, pX1, pX2);
//    cout<<x1<<", "<<x2<<endl;

//    int x = 20, y = 30;
//    cout<<&x;
////    cout<<endl<<x;
//
//    int *temp = &x;
//    cout<<endl<<temp;
//    cout<<endl<<&temp;
//
//    temp = &y;
//    cout<<endl<<temp<<" "<<&y;
//    int *temp2 = x;
//    char c;
//    int *temp3 = &c;



    int v[] = {-2, 3, 0};
    cout<<v[-1];
//    int v2[3] = {1, 2};
//
//    int *vPtr3 = &v[2];
//    cout<<*(vPtr3-1) << vPtr3[-1];
//
//    int *vPtr = &v[0];
//    cout<<*vPtr;
//    cout<<*(vPtr+1);
//    vPtr = &v2[0];
//    cout<<endl<<*vPtr;
//    cout<<*(vPtr+1);
//
//    cout<<endl<<*v;
//    cout<<*(v+1);

//    v = v2;

	return 0;
}
