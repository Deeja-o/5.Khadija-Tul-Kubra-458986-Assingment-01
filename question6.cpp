//Khadija Tul Kubra 458986
//Analysis of whether of week
#include <iostream>
using namespace std;
int main()
{
    int A[7]={1,2,3,4,5,6,7};
    int B[7];
    cout<<" Enter the temperature of each day of the week "<<endl;
    for(int i=0;i<7;i++)
    cin>>B[i];
    for(int i=0;i<7;i++)
    cout<<A[i]<<"       "<<B[i]<<endl;
    int sum = 0;
    for (int i=0; i<7; i++) 
        sum += B[i];
        cout<<"The average temperature of the week was "<<sum/7<<endl;
     if(sum/7<=15)
     cout<<"The week was comparitively cold."<<endl;
     if(sum/7<=27&&sum/7>15)
     cout<<"The week was comparitively moderate."<<endl;
     if(sum/7>27)
      cout<<"The week was comparitively hot."<<endl;
}