#include <iostream>
using namespace std;
class Car
{
    private:
       double first,second ,third;
       int customer;
       float hours;
    public:
       void inputInfo();
       double calculateCharges( double );
       void showInfo();
};
void Car:: inputInfo()
{
   for( customer = 1; customer <= 3; customer++ )
    {
       cout<< "Enter customer "<<customer<<" parking hours: ";
       cin>>hours;
    if( customer == 1 )
            first = hours;
    else if( customer == 2 )
            second = hours;
    else
            third = hours;
    }
}
double Car:: calculateCharges( double hours )
{
  if( hours < 3 )
    return 2.00;
  else
    {
        if ( hours < 24 )
          return 2.00 + ( hours - 3 ) * 0.5;
        else
          return 10.00;
      }
}
void Car:: showInfo()
{
  cout << "Car\tHours\tCharge\n";
  cout << "1\t" <<first<<'\t'<< calculateCharges( first ) << endl;
  cout << "2\t" <<second<<'\t'<<calculateCharges( second ) << endl;
  cout << "3\t" <<third<<'\t'<<calculateCharges( third ) << endl;
  cout << "TOTAL\t" <<first+second+third<<'\t'<< calculateCharges( first ) + calculateCharges( second ) + calculateCharges( third ) << endl;

}

int main()
{
    Car ob;
    ob.inputInfo();
    ob.showInfo();
    return 0;
}
