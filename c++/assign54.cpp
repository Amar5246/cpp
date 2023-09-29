#include<iostream>
#include<vector> 
using namespace std; 

int main()
{
    vector<int> v;  
    int a; 
    cout <<"Enter the values you want to store in vector" <<endl;
    for(int i=0;i<10;i++)
    {
        
        cin >>a; 
        v.push_back(a);
    } 
    v.push_back(10);
    v.push_back(20);  
    cout << "Values of the vector is : " << endl;
    for(int i=0;i<12;i++)
    {
        cout << v[i] << " ";
    } 
    cout << endl; 
    v.pop_back(); 
    v.pop_back();  
    vector<int>::iterator it;  
    cout << "Values of the vector is : " << endl;
    for(it=v.begin();it<v.end();++it)
    {
        cout << *it << " ";
    } 
    cout << endl;
    return 0;
}