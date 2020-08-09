//3. Sort an array of integers using Insertion sort. 
#include<iostream>
using namespace std;
int main()
{
int arr[100],temp,i,j,size;
cout<<"enter size of an array";
cin>>size;
cout<<"enter array element ";
for(i=0;i<size;i++)
{
cin>>arr[i];
}
for(i=0;i<size;i++)
{
   temp=arr[i];
   j=i-1;

   while(j>=0&&arr[j]>temp)
  {
    arr[j+1]=arr[j];
    j--;
 }
  arr[j+1]=temp;
}
cout<<"sorted arrray"<<endl;
for(i=0;i<size;i++)
{
 cout<<" "<<arr[i];
}
}
