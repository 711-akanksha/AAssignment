#include<iostream>

using namespace std;

class Date{
 private:
 int month;
 int day;
 int year;


 public:

Date(int month, int day ,int year  )
    {
   this-> month = month;
   this-> day = day;
   this-> year = year;
    }

   void displayDate(){
   cout<<month<<"/"<<day<<"/"<<year<<endl;
   }
int getMonth(){
      return month;
   }
void setMonth( int m)
  {
    if(m>=1&&m<=12)
      month=m;
    else
     {
       month=1;
     }
  }
void setDay(int d)
	{
    day=d;
    }
int getDay()
	{
		return day;
	}
	void setYear(int y)
	{
	    year=y;
	}
	int getYear()
	{
	    return year;
	}
};

int main()
{
 Date d1(12,6,2020);
  cout<<" date 1 is";
  d1.displayDate();
  d1.setDay(18);
  cout<<" date 2 is ";
  d1.setMonth(18);
d1.displayDate();
}
