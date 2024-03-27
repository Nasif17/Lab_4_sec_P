#include<iostream>
using namespace std;

int main()
{
    float brr[4][6];
    //brr[2][5]=0.5;
    //cout<<brr[2][5];
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<6;j++)
        {
            brr[i][j]=i+j+5;
        }
        
    }

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<6;j++)
        {
            cout<<brr[i][j]<<" ";
        }
        cout <<endl;
    }
}
