#include<iostream>
using namespace std;

int main()
{
    //int arr[3][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15}};

    //arr[1][2]=19;
    //arr[2][2]=56;

    int brr[3][5];

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>brr[i][j];
        }
    }

    cout<<"Printing the array"<<endl;

        for(int i=0;i<3;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<brr[i][j]<<" "<<endl;
        }
    }


}
