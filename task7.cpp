#include <iostream>
using namespace std;
main()
{
string movie_name;
int price_adult;
int price_child;
int tickets_adult;
int tickets_child;
float total_amount;
float percent_donated;
float amount_donated;
float amount_left;
cout<<"Enter movie name:";
cin>>movie_name;
cout<<"Enter price for adult ticket:";
cin>>price_adult;
cout<<"Enter price for child ticket:";
cin>>price_child;
cout<<"Enter number of adult ticket sold:";
cin>>tickets_adult;
cout<<"Enter number of child ticket sold:";
cin>>tickets_child;
total_amount=(price_adult*tickets_adult)+(price_child*tickets_child);
cout<<"Enter percentage to be donated:";
cin>>percent_donated;
amount_donated=total_amount*(percent_donated/100);
amount_left=total_amount-amount_donated;
cout<<"total amount generated:"<<total_amount<<endl;
cout<<"amount after donation:"<<amount_left;
}