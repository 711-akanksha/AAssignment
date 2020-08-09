#include<iostream>
using namespace std;
int main()
{
int r,c,i,j;
cout<<"enter no of rows and" <<endl;
cin>>r;
cout<<"enter no of colums "<<endl;
cin>>c;
for(i=1;i<=r;i++)
{
for(j=1;j<=c;j++)
 {
   if(i==1||i==r||j==1||j==c)

   {
       cout<<"*";
   }else cout<<" ";

 }
cout<<"\n";
}

}
