#include<iostream> 

using namespace std; 
class car
{
   int num; 

   public : 
        
        car(){
            cout<<"parameterless constructor"<<endl;
        } 
        car(int n)
        {   
            this->num=n;
            cout<<"parameterized constructor"<<endl;
        }   
        

        bool operator==(car obj2)
        {
            if(this->num==obj2.num) return true; 
            else return false;
        }
};

int main()
{
    car obj1(10); 
    car obj2(10); 
    
    
    if(obj1==obj2)
    {
        cout << "Equal" <<endl;
    } 
    else cout << "Not equal" <<endl;
    return 0;
}