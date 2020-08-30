/*Modify the Complex class program to enable input and output of complex numbers via overloaded >>
and << operators, respectively.*/
#include<iostream>
using namespace std;

class complex{
public:
complex(int r=0,int i=0)
{
real=r;
img=i;
}


friend istream &operator>>(istream &input ,complex &obj1);
friend ostream &operator<<(ostream &output,complex &obj1);

private:
int real, img;
};
istream &operator>>(istream &input,complex &obj1)
{
  input >> obj1.real >> obj1.img;
  return input;
}
ostream &operator<<(ostream &output,complex &obj1)
{
    output<<"here is your complex number"<<endl;
    output<<obj1.real<<" +i"<<obj1.img<<endl;
    return output;
}
int main(){
complex a;
cout<<"enter value of real and img";
cin>>a;
cout<<a;
}
