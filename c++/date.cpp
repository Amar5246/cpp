#include<iostream>  
#include<string>
using namespace std; 
void getDate( string *date, string *month,string *year) 
{
    
    cout << "Enter the date in format date month year respectively" << endl; 
    cin >> *date >> *month >> *year ;
}
int main()
{
     string date,month,year;
     getDate(&date,&month,&year); 
     cout << "Date is :" << date <<"/"<<month<<"/"<<year<< endl;
    return 0;
}