#include<iostream>
using namespace std;
/*Modify Overload the multiplication operator to enable multiplication of two complex numbers as in algebra. */
class complex{
public:
complex(int r=0,int i=0)
{
real=r;
img=i;

}
void print(){
    cout<<real<<" +i"<<img<<endl;

}
friend complex operator *(const complex &,const complex& ); // Multiplication


private:
int real, img;
};


complex operator*(const complex &t,const complex &u)
 {

	complex  result( t.real * u.real - t.img * u.img,
t.img * u.real + t.real * u.img );
return result;
 }

int main(){

complex c1(12,7),c2(2,4);
complex c3=c1*c2;
c1.print();
c2.print();
c3.print();





}
