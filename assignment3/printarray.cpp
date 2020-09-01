#include<iostream>
using namespace std;
class PrintArray
{

public:
    void printArray(int arr[],int i, int l)
    {

        if(i==l)
        {
            return;
        }
        else
        {
            cout<<arr[i];
            printArray(arr,i+1,l);

        }

    }



};
int main()
{

int arr[1000];
int n;
cin>>n;

for(int i=0;i<n;i++)
{
cin>>arr[i];
}


PrintArray p;
p.printArray(arr,0,n-1);




