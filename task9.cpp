#include <iostream>
using namespace std;
main()
{
int number,number1, number2, number3, reminder1, reminder2, reminder3, reminder4, sum;
cout<<"Enter the four digit number:";
cin>>number;
reminder1=number%10;
number1=number/10;
reminder2=number1%10;
number2=number1/10;
reminder3=number2%10;
number3=number2/10;
reminder4=number3%10;
sum=reminder1+reminder2+reminder3+reminder4;
cout<<"sum of the digits is:"<<sum;
}