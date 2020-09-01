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


friend bool operator==( const complex& ,const complex&);
friend bool operator!=( const complex& ,const complex&);


private:
int real,img;
};

bool operator==( const complex& t, const complex& u ){


return ( t.real == u.real && t.img == u.img) ;

}
bool operator!=( const complex& t, const complex& u ){

return( t.real != u.real && t.img != u.img) ;
}



int main()
{
complex c1(7,5),c2(7,5);
if(c1==c2)
    cout<<"same";
if(c1!=c2)
cout<<" not same ";

return 0;
}





