
#include<iostream>
using namespace std;
class ReverseString
{

public:
    void stringReverse(string str,int i)
    {

        if(str[i]=='\0')
        {
            return;
        }
        else
        {

            stringReverse(str,i+1);
            cout<<str[i];
        }

    }



};
int main()
{

string str;
cout<<"enter string :";
getline(cin,str);
ReverseString p;
p.stringReverse(str,0);





}
