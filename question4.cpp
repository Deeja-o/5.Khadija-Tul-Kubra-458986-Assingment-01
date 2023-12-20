// khadija tul kubra 458986
//largest prime number less than the given number
#include <iostream>
using namespace std;
int main()
{
    cout<<"Enter the positive integer"<<endl;
    int x;
    cin>>x;
    while(x>2)
    {
        int count=0;
        for(int i=2;i<x;i++)
    {
            if(x%i==0)
            count++;
    }
            if(count==0)
            {
                cout<<"the largest prime number less than or equal to given positive integer is "<<x<<endl;
                break;
            }
        x--;
    if(count==0)
    break;
    }
}