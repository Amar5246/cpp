#include<iostream>

using namespace std; 

int main() 
{
    int n; 
    cout <<"Enter the no of subject" <<endl; 
    cin >>n; 

    int *marks=new int[n]; 

    for(int i=0;i<n;i++) 
    {
        cout << "Enter the marks for subject " << i+1 <<endl; 
        cin >> marks[i]; 
    } 
    
    int totalmarks=0;
    int avg;
    for(int i=0;i<n;i++) 
    {
        totalmarks += marks[i];
    } 
    avg=totalmarks/n; 

    cout << "Avarge of " <<n<<" subjects is :" <<avg <<endl; 

    delete[] marks;
}