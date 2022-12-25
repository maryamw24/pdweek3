#include <iostream>
using namespace std;
main()
{
string name;
float marks1;
float marks2;
float marks3;
float marks4;
float marks5;
float total;
float percentage;
cout<<"Enter subject 1 marks:";
cin>>marks1;
cout<<"Enter subject 2 marks:";
cin>>marks2;
cout<<"Enter subject 3 marks:";
cin>>marks3;
cout<<"Enter subject 4 marks:";
cin>>marks4;
cout<<"Enter sybject 5 marks:";
cin>>marks5;
total=marks1+marks2+marks3+marks4+marks5;
percentage=(total/500)*100;
cout<<"percentage:"<<percentage;
}