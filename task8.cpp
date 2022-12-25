#include <iostream>
using namespace std;
main()
{
float priceof_veggie;
float priceof_fruits;
int kg_veggie;
int kg_fruits;
float veggie_cost;
float fruits_cost;
float total_earning;
float earning_rps;

cout<<"Enter price of veggies per kg:";
cin>>priceof_veggie;
cout<<"Enter price of fruits per kg:";
cin>>priceof_fruits;
cout<<"Enter amount of veggies:";
cin>>kg_veggie;
cout<<"Enter amount of fruits:";
cin>>kg_fruits;
veggie_cost=priceof_veggie*kg_veggie;
fruits_cost=priceof_fruits*kg_fruits;
total_earning=veggie_cost+fruits_cost;
earning_rps=total_earning/1.94;
cout<<"total earning in rps:"<<earning_rps;
}
