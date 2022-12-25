#include <iostream>
using namespace std;
main()
{
float i_velocity;
float f_velocity;
int time;
float acceleration;
cout<<"Enter initial velocity:";
cin>>i_velocity;
cout<<"Enter acceleration:";
cin>>acceleration;
cout<<"Enter time taken:";
cin>>time;
f_velocity=(acceleration*time)+i_velocity;
cout<<"final velocity:"<<f_velocity;
}