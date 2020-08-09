#include<iostream>
#include<string.h>
using namespace std;

class Rectangle{;
 private:
 float length;
 float width;

 public:
    float Perimeter()
    {
    return 2*(length+width) ;
    }
    float Area()
    {
    return length*width;

    }


int getLength() {
		return length;
	}
	void setLength(float a)
	{
    if (a>=0.0&&a<= 20.0)
		{length = a;}
    else {
			cout << "please enter something vaild";

        }
    }

	int getWidth()
	{
		return width;
	}
	void setWidth(int a)
	{
		if (a>= 0.0&&a<= 20.0)
		{width = a;}
		else {
			cout << "please enter something vaild";
		}
	}
};
int main()
{
     Rectangle rec;
     rec.setLength(15);
     rec.setWidth(15);
  cout<<"lenght => "<<rec.getLength()<<"\nwidth => "<<rec.getWidth()<<"\n perimeter  => "<<rec.Perimeter()<<"\nArea => "<<rec.Area();
}
