#include<iostream>
#include<cmath>

using namespace std;
void printArray(int [], int );



//int list2[],
const int NUM_ROWS=2;

const int NUM_COLS=3;
void printArray2D(int arr[NUM_ROWS][NUM_COLS])
{
    for(int j=0;j<NUM_ROWS;j++)
   {
       for(int i=0;i<NUM_COLS;i++)
       {
            cout<<arr[j][i]<<" ";
       }
       cout<<endl;
   }
}

void copyArray(const int list1[], int numOfElements,
                int start1, int end1, int list2[] )
{
    ;
    int x = 0;
    for (int index = start1; index < start1 + numOfElements; index++)
    {
        list2[x] = list1[index];
        x++;
    }

}
int main() {

    int arr[4] ;
    arr[0] = 10;
    arr[1] = 12;
    arr[2] = 34;
    arr[3] = 22;
//    cout<<arr;
//    cin>>arr;

//    printArray(arr, 4);
//    cout<<endl;
//    int arr2[5] ;
//    copyArray(arr, 4, 1, 2, arr2);

//    for(int i=0;i<2;i++)
//        cout<<arr2[i];

//    char name[6] = {'A', 'k', 's', 'a', 'm', '\0'};
//    char name1[10] = "Aksam";
//
////    cout<<name;
//
//    cin>>name1;
//    cout<<name1;

   int matrix[2][3] = { {1, 2, 3},{4, 5, 6} };
    int matrix123[2][3] = { {1, 2, 3},{4, 5, 6} };
    int result[2][3] ;
   for(int j=0;j<2;j++)
   {
       for(int i=0;i<3;i++)
       {
            cin>>matrix[j][i];
       }
   }

   printArray2D(matrix);

   int max1 = matrix[0][0];
   for(int j=0;j<2;j++)
   {
       for(int i=0;i<3;i++)
       {
            if(matrix[j][i]>max1)
                max1=matrix[j][i];
       }
   }
   cout<<"max is: "<<max1;

   for(int j=0;j<2;j++)
   {
       for(int i=0;i<3;i++)
       {
           result[j][i] = matrix[j][i] + matrix123[j][i];
       }
   }
//    int matrix3[2][3] = {
//                            {    {1, 2, 3},
//                                {4, 5, 6}
//                            },
//                            {   {1, 2, 3},
//                                {4, 5, 6}
//                            }
//                        };
//    int matrix2[3][2] = {    {1, 2}, {3, 4}, {5, 6}
//    };


//    char names_temp[3][6] = { {'A', 'k', 's', 'a', 'm', '\0'},
//    {'A', 'k', 's', 'a', 'm', '\0'},
//    {'A', 'k', 's', 'a', 'm', '\0'}
//    };
//
//    char names[3][6] = { "Aksam",
//    "Ali",
//    "Umar"
//    };
//    cout<<names[1];
//
//    string names_str[3] = { "Aksam", "Ali", "Umar" };
//
//    cout<<names_str[0];



//    cout<<endl;
//    for(int i=0;i<5;i++)
//            cout<<arr[i]<<endl;

//    float sales[5];
//    cout<<"Enter 5 array values: ";
//    for(int i=0;i<5;i++)    {
//        cin>>sales[i];
//    }
//    cout<<"You have entered: ";
//    for(int i=0;i<5;i++)    {
//        cout<<sales[i] << " ";
//    }
//
//    float sum = 0;
//    for(int i=0;i<5;i++)    {
//        sum = sum + sales[i];
//    }

//    for(int i=0, j=1;i<5;i++, j+=2)    {
//        cout<<i<<" "<<j<<endl;
//    }
//    float avg = sum/5;
//    cout<<avg;
    return 0;
}

void printArray(int array1[], int size1)
{
//    array1[0] = -1; // this will cause an error for a constant array formal parameter
    for(int i=0;i<size1;i++)
            cout<<array1[i]<<endl;
}
