#include <iostream>
using namespace std;
int recursiveMinimum(int array[],int start,int end)
{
    int min;
    if(start==end)//stop condition for recursion
    {
        return array[start];//returning the array element at start (end) index
    }
    //comparing element at start and end index
    if(array[start]<array[end])//if element at start index is smaller one
    {
        min=recursiveMinimum(array,start,end-1);//than eliminate the element at last index
    }
    else//else (element at end index is smaller one)
    {
        min=recursiveMinimum(array,start+1,end);//than eliminate the element at start index
    }
    return min;//return the minimum value
}
int main()
{
    int array[10]={10,20,5,2,8,30,25,28,45,40};
    cout<<"Array contains : "<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<array[i]<<" ";//printing the array elements
    }
    //testing the recursiveMinimum function by passing array and start index as 0 and end index as 9
    cout<<endl<<"\nMinimum element in array is : "<<recursiveMinimum(array,0,9);
}

