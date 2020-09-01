//10
 #include<iostream>
using namespace std;
class PalindromeString
{

public:
    bool checkPalindrome(string str,int i,int l)
    {

        if((i==l)&&(str[i]==str[l]))
        {
            return true;
        }
        else if((l-i==2)&&(str[i]==str[l]))
        {
            return true;

        }
        else
        {
            if(str[i]!=str[l])
            {
                return false;

            }
            return checkPalindrome(str,i+1,l-1);

        }

    }



};
int main()
{

string str;
getline(cin,str);
int l=str.length()-1;
PalindromeString p;
bool res=p.checkPalindrome(str,0,l);
cout<<"result"<<res;

}


