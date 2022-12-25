#include <iostream>
using namespace std;
main()
{
int lose_weight;
int total_days;
int days_onekgloss;

cout<<"Enter weight to loose:";
cin>>lose_weight;
cout<<"Enter no of days for one kg loss:";
cin>>days_onekgloss;
total_days=lose_weight*days_onekgloss;
cout<<"Weight loss days:"<<total_days;
}