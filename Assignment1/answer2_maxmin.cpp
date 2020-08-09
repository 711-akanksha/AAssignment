// To ﬁnd 2nd max and 2nd min number from an integer array. 
#include<iostream>
using namespace std;
int main()
{
   int n,a[50],lar,sec,small,sec1;
   cout<<"Enter the size of array: ";
   cin>>n;
   for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
   if(a[0]<a[1])
    {
      lar=a[1];
      sec=a[0];
    }
   else
   {
      lar=a[0];
      sec=a[1];
   }
   for(int i=3;i<n;i++)
    {
          if(a[i]>lar)
            {
             sec=lar;
             lar=a[i];
            }
      else if(a[i]>sec&&a[i]!=lar)
            {
                sec=a[i];
            }
    }
   cout<<"Second Largest Element in array is: "<<sec<<endl;
    if(a[0]>a[1])
    {
      small=a[1];
      sec1=a[0];
    }
   else
   {
      small=a[0];
      sec1=a[1];
   }
   for(int i=2;i<n;i++)
    {
      if(a[i]<small)
        {
         sec1=small;
         small=a[i];
        }
        else if(a[i]<sec1&&a[i]!=small)
        {
            sec1=a[i];
        }
    }
   cout<<"Second smallest Element in array is: "<<sec1<<endl;
   return 0;
}
