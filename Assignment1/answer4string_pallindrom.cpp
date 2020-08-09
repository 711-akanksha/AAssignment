//4. Check whether a string palindrome. 
#include<iostream>
#include<string.h>
using namespace std;
int main()
{int flag=0;
    char a[100],re[100];
    cout<<"enter string to check"<<endl;
    cout<<a[i]<<endl;

    strcpy(re,a); //Copies original string to reverse
    strrev(re);      //Finds the reverse of string

    flag = strcmp(a,re); //Checks whether both are equal or not

    /* If both strings are equal */
    if(flag == 0)
    {
        printf("String is Palindrome.");
    }
    else
    {
        printf("String is Not Palindrome.");
    }

    return 0;
}


    
