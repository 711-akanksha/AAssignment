
#include <iostream>
#include <cmath>
using namespace std;
class Triangle
{
    private:
       double side1 ;
	   double side2 ;
	   double hypotenuse ;
    public:
       Triangle( double, double, double ) ;
	   void calculateDimensions( double, double, double ) ;
	   void printDimensions( double, double, double ) ;
};
Triangle::Triangle( double Side1, double Side2, double Hypotenuse )
	{
		  calculateDimensions( Side1, Side2, Hypotenuse ) ;
	}
void Triangle::calculateDimensions( double Side1, double Side2, double Hypotenuse )
{
    side1 = Side1 ;
	side2 = Side2 ;
	hypotenuse = Hypotenuse ;
    int i=0;
    for ( int i = 1; i <= 500 ; i++ )
			{
			   side1 = i ;
			   for ( int j = 1; j <= 500 ; j++ )
					{
						side2 = j ;
					    for ( int k = 1 ; k <= 500 ; k++ )
							{
								hypotenuse = k ;
							    if( ( pow( side1 , 2 ) ) + ( pow( side2 , 2 ) ) == ( pow ( hypotenuse , 2 ) ) )
									{
										printDimensions( side1, side2, hypotenuse ) ;
									}
							}
					}
			}

}
void Triangle::printDimensions( double side1, double side2, double hypotenuse )
	{
		cout << "( " << side1 << " , " << side2 << " , " << hypotenuse << " ) " << endl ;
	}
int main()
{
    Triangle rightTriangle( 1.0 , 1.0 , 1.0 ) ;
    return 0;
}
