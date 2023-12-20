// Khadija tul kubra 458986
//Remove duplicates in string
#include <iostream>
using namespace std;
int main()
{
    int  a[5] = {1,2,3,4,5};
    int x;
    cout<<"Enter the number of integers you want to add in the given array a[5] = {1,2,3,4,5}"<<endl;
    cin>>x;
    int b[5+x];
    for(int i=0;i<5;i++)
    b[i]=a[i];
    cout<<"Enter the integers;"<<endl;
    for(int i=5;i<5+x;i++)
    cin>>b[i];
    cout<<"The resultant array is"<<endl;
    for(int i=0;i<x+5;i++)
    cout<<b[i];
    cout<<endl;
}
