#include<iostream>
using namespace std;
int main()
{
int r;
int c;
int i,j,k;

cout<<"enter no of rows and" <<endl;
cin>>r;


   for(i=1;i<=r;i++)
   {
     for(j=r-1;j>=i;j--
     )
     {
         cout<<" ";

     }
    for(k=1;k<=1;k++)
   {
      cout<<"*";
    }
cout<<"\n";
   }
    for(i=1;i<=r;i++)
   {
     for(j=r-1;j>=r/2+1;j--)
     {
         cout<<" ";

     }
    for(k=1;k<=1;k++)
   {
      cout<<"*";
    }
cout<<"\n";
}

}




