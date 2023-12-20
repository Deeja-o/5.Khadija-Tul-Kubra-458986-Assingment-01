//Khadija Tul Kubra 458986
//BUBBLE SORT 
#include <iostream>
using namespace std;
int main()
{
    int A[6];
    cout<<"Enter the array"<<endl;
    for(int i=0;i<6;i++)
    cin>>A[i];
    for(int i=0;i<6;i++)
    {
         for(int j=0;j<6;j++)
         {
            if(A[j]>A[j+1])
            swap(A[j],A[j+1]);
         }
    }
     cout<<"The resultant array is ";
     for(int i=0;i<6;i++)
     cout<<A[i];
}