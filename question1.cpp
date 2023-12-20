//Khadija Tul Kubra 458986
//Equal string or rotate string 
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int x;
    cout<<"Enter the number of letters in longest string."<<endl;
    cin>>x;
    char A[x+1],B[x+1];
    cout<<"Enter both strings:"<<endl;
    cin>>A;
    cin>>B;
    int count=0;
    for(int i=0;i<=x;i++)
    {
      if(A[i]!=B[i]) 
      count++;
    }
    if(count==0)
    {
    for(int i=0;i<=x/2;i++)
    swap(A[i],A[x-i]);
    for(int i=0;i<=x;i++)
    cout<<A[i];
    cout<<endl;
    cout<<"Strings by made unequal by rotating one.";
    cout<<""<<endl;
    }
    else
    cout<<"The strings are unequal"<<endl;
    return 0;
}