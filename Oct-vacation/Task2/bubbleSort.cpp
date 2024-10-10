#include<iostream>
using namespace std;



int a[]={25,545,54588,111,2,64,89,556,45,56};
int N;
int main()
{
    cout<<"Input length:";
    cin>>N;

    for (int i=0;i<N-1;i++)
    {
        for (int j=0;j<N-1;j++)
        {
            if (a[j]>a[j+1])
            {
                int re=a[j];
                a[j]=a[j+1];
                a[j+1]=re;
            }
        }
    }
    for (int k=0;k<N;k++)
    {
        cout<<a[k]<<",";
    }
    return 0;
}