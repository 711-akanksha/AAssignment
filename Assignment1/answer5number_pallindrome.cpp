//5. Check whether a number palindrome. 
#include<iostream>
using namespace std;
 int checkPalindrome(int number)
 {
   int temp, remainder, sum=0;

   temp = number;

   while( number!=0 )
   {
       remainder = number % 10;
       sum = sum*10 + remainder;
       number /= 10;
   }

   if ( sum == temp ) return 0;

   else return 1;
 }

 int main()
 {
      int number;

      cout<<"Enter the number: "<<endl;
      cin>>number;

      if(checkPalindrome(number) == 0)
      cout<<"is a palindrome number.\n"<<number<<endl;
      else
       cout<<"is not a palindrome number.\n"<<number<<endl;

      return 0;
 }
