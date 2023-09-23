#include<iostream> 

using namespace std; 
int* max(int *num1,int *num2) 
{
    if((*num1)>(*num2)) 
    {
        return num1; 
    } 
    else  
        return num2;
}
int main()
{
    int num1,num2; 
    cout << "Enter the two numbers " ;  
    cin >> num1 >>num2;
    int *max_no =max(&num1,&num2); 
    cout << "Address of the maxium no "<<*max_no<<" from the given two nos is " << max_no <<endl;  
    return 0;
}