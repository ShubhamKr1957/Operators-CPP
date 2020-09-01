#include <iostream>// header program
using namespace std;
class Invoice
{
    private:
       string partNumber;
       string partDescription;
       int itemQuantity;
       int itemPrice;
    public:
       Invoice( string, string, int, int );
       void setPartNumber( string );
       string getPartNumber();
       void setPartDescription(string);
       string getPartDescription();
       void setItemQuantity(int);
       int getItemQuantity();
       void setItemPrice(int);
       int getItemPrice();
       int getInvoiceAmount();
};//function program


Invoice::Invoice( string number, string description, int quantity, int price )
{
    setPartNumber(number);
    setPartDescription(description);
    setItemQuantity(quantity);
    setItemPrice(price);
}
void Invoice::setPartNumber(string number)
{
partNumber=number;
}
string Invoice::getPartNumber()
{
return partNumber;
}
void Invoice::setPartDescription(string description)
{
partDescription= description;
}
string Invoice::getPartDescription()
{
return partDescription;
}
void Invoice::setItemQuantity(int quantity)
{
if(quantity>0)
       itemQuantity=quantity;
    else
    {
        itemQuantity=0;
        cout<<"Initial quantity was invalid."<<endl;
    }
}
int Invoice::getItemQuantity()
{
return itemQuantity;
}
void Invoice::setItemPrice(int price)
{
if(price>0)
       itemPrice=price;
    else
    {
        itemPrice=0;
        cout<<"Initial price was invalid."<<endl;
    }
}
int Invoice::getItemPrice()
{
return itemPrice;
}
int Invoice::getInvoiceAmount()
{
return getItemQuantity()*getItemPrice();
}
//main program
int main()
{
Invoice invoice("4543","screwdriver",200,10);
cout<<"\npart number: "<<invoice.getPartNumber()<<endl;
cout<<"\npart Description: "<<invoice.getPartDescription()<<endl;
cout<<"\nquantity: "<<invoice.getItemQuantity()<<endl;
cout<<"\nprice per item: "<<invoice.getItemPrice()<<endl;
cout<<"\ninvoice amount:  "<<invoice.getInvoiceAmount()<<endl;
return 0;
}






















