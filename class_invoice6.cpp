#include <iostream>
using namespace std;
class Invoice
{
    private:
       string partNumber;
       string partDescription;
       int itemQuantity;
       int itemPrice;
    public:

Invoice( string number, string description, int quantity, int price ){
    setPartNumber(number);
    setPartDescription(description);
     setItemQuantity(quantity);
     setItemPrice(price);

    }

void setPartNumber(string number)
{
partNumber=number;
}
string getPartNumber()
{
return partNumber;
}
void setPartDescription(string description)
{
partDescription= description;
}
string getPartDescription()
{
return partDescription;
}
void setItemQuantity(int quantity)
{
if(quantity>0)
       itemQuantity=quantity;
    else
    {
        itemQuantity=0;
        cout<<"Initial quantity was invalid."<<endl;
    }
}
int getItemQuantity()
{
return itemQuantity;
}
void setItemPrice(int price)
{
if(price>0)
       itemPrice=price;
    else
    {
        itemPrice=0;
        cout<<"Initial price was invalid."<<endl;
    }
}
int getItemPrice()
{
return itemPrice;
}

int getInvoiceAmount()
{
return getItemQuantity()*getItemPrice();
}};
int main()
{
Invoice invoice("4543","screwdriver",200,10);
cout<<"part number:"<<invoice.getPartNumber()<<endl;
cout<<"part Description:"<<invoice.getPartDescription()<<endl;
cout<<"quantity:"<<invoice.getItemQuantity()<<endl;
cout<<"price per item"<<invoice.getItemPrice()<<endl;
cout<<"invoice amount:"<<invoice.getInvoiceAmount()<<endl;
return 0;
}















