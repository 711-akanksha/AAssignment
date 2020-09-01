#include<iostream>
#include<string.h>
using namespace std;
 int main()
{
int a[100],result;
int n,i;
cin>>n;
for(i=0;i<n;i++)
cin>>a[i];
result = findMin(a[],0, n)
cout<<"result"<<result;
return 0;
}
int findMin(int a[], int start, int n)
{

    int min;
    if ( start ==n )
    {
      return  min = a[start];
    }

    // By convention, we assume ans[0] as max and ans[1] as min

}
