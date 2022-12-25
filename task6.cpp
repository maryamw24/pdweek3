#include <iostream>
using namespace std;
main()
{
float bag_size;
float bag_cost;
float sqf_area;
float costperpound;
float costpersqf;
cout<<"Enter size of bag in pounds:";
cin>>bag_size;
cout<<"Enter cost of bag:";
cin>>bag_cost;
costperpound=bag_cost/bag_size;
cout<<"Enter sqfarea covered by bag:";
cin>>sqf_area;
costpersqf=bag_cost/sqf_area;
cout<<"cost of ferrilizer per pound:"<<costperpound<<endl;
cout<<"cost of fertilizer per sqf:"<<costpersqf;
}