#include <iostream>
#include <iomanip>
using namespace std;

class rectangle
{
  private:
     int width;
     int length;
  public:
     void setWidth(int no);
     void setLength(int no);
     int calcArea();
};

int main() {
  cout << "Yasas";
  cout<<endl;
  cout << "No,45,Kuruppumulla road";
  cout<<endl;
  cout<<"Panadura";
  cout<<endl;
  
  /*int num=1000;
  while(num>=100)
  {
    cout<<num<<endl;
    num-=100;
  }

  for(num=1000;num>=100;num-=100)
  {
    cout<<num<<endl;
  }

  do
  {
    cout<<num<<endl;
    num-=100;
  }
  while(num>=100);*/

  int c;
  double price,discount,rate,Totprice,Total=0;
  cout<<"Enter price";
  cin>>price;
  while(price!=-1)
  {
    if(price>3000)
    {
      rate=0.05;
    }
    discount=price*rate;
    Totprice=price-discount;
    cout<<"Tot price is"<<Totprice<<endl;
    c++;
    Total=Total+Totprice;
    cout<<"Enter price";
    cin>>price;
  }
  cout<<"Total is"<<setiosflags(ios::fixed)<<setprecision(2)<<Total<<endl;
  
  return 0;
}