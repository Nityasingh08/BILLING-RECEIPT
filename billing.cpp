#include<iostream>
#include<conio.h>
using namespace std;
float total_amount;
class item
{
  private:
  string name ;
  int copy;
  float rate;
  float amount;
  public:
  item()
  {
    name = "default";
    rate = 0;
    copy = 0;
  }
  void getdata()
  {
     cout<<"enter the Book name:";
     cin>> name;
    cout<< "enter the rate of the book: ";
    cin>> rate;
    cout<<"enter number of copies: ";
    cin>> copy;

  }
  void display()
  {
    cout<< "\n\t " <<name;
    cout<< "\t\t"<<rate;
    cout <<"\t\t"<<copy;
    amount = rate * copy;
    total_amount = amount + total_amount;
    cout<<"\n\t amount"<<amount;
  }
};
int main()
{ int i,n;
  item shop[50];
  char ab='y';
  while(ab=='y')
  {
    shop[n].getdata();
    n++;
    cout<<"DO YOU WANT TO CONTINUE... PLEASE ENTER Y:";
    cin>>ab;

  }
  cout<<"\t**************";
  cout<<"\n\tBOOK BILLING LIST  ";
  cout<<"\n\t**************";
  cout<<"\n\t  NAME         RATE      COPY";
  for(i=0;i<n;i++)
  {
    shop[i].display();

  }
  cout<<"\t________________________";
  cout<<"\n\t\tTOTAL BILL  "<<total_amount;
  return 0;
}

