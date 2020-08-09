 //1.To ﬁnd greatest of three numbers. 
#include<iostream>
using namespace std;
int main()
{
int a,b,c;
cout<<"entre three no.s";
cin>>a>>b>>c;
if(a>b)
{
    if(a>c)
        cout<<a<<"largest no.";
    else
        cout<<c<<"largest no.";
}else
{
    if(b>c)
        cout<<b<<"largest no.";
    else cout<<c<<"largest no.";

}
}
