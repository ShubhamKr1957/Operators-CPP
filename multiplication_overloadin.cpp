
/*Overload the == and != operators to allow comparisons of complex numbers */
#include<iostream>
using namespace std;
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


complex operator*(const complex &obj1,const complex &obj2)
 {
	 return complex(obj1.real * obj2.real, obj1.img * obj2.img);
 }

int main(){

complex c1(12,7),c2(2,4);
complex c3=c1*c2;
c1.print();
c2.print();
c3.print();
