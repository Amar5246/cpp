//Implement class Complex with real (int) and imaginary (int) parts as data members of class. Implement below functions inside this class.
//default constructor, parameterized constructor, getter functions for real and imaginary parts, setter functions for real and imaginary parts, display function.


//Write a program to count number of objects created for above class Complex . Use static data member and member function.


#include<iostream> 
using namespace std; 

class complex 
{
   int real,imag; 
   
  
   public : 
      static int count;
      complex() 
      {  
         count++;
         cout << " inside parameterless constructor " << endl;
      } 
          
      complex(int r,int i) 
      {
         count++;
         this->real=r; 
         this->imag=i;
         cout << " inside parameterized constructor " << endl;
      }  
       
      void setdata(int r,int i) 
      { 
         this->real=r; 
         this->imag=i;
      } 
      void display() 
      {
         cout << "The real value is " << this->real << endl; 
         cout << "The imag value is " << this->imag << endl; 
      } 
      ~complex() 
      {
         cout << " inside  destructor " << endl;
      } 
      bool operator==(complex &other)
      {
         if((this->real==other.real)&&(this->imag==other.imag))
         {
            return true;
         }
         else {return false;}
      } 
      complex operator+ (complex &other2)
      {
         complex temp;
         temp.real= this->real + other2.real;
         temp.imag= this->imag + other2.imag;
         return temp;
      } 
      complex operator- (complex &other2)
      {
         complex temp;
         temp.real= this->real - other2.real;
         temp.imag= this->imag - other2.imag;
         return temp;
      }  
      void operator-= (complex &other1)
      {
         this->real=this->real-other1.real; 
         this->imag=this->imag-other1.imag; 
      } 
      complex& operator++ ()
      {
         ++real; 
         ++imag; 
         return *this;
      } 
      complex operator++(int)
      {
         complex temp(*this); 
         ++(*this); 
         return temp; 
      } 

      
}; 

int complex :: count=0;

int main() 
{
   complex c1; 
   complex c2(30,40); 
   c1.setdata(10,20); 
   cout << "c1 :"<<endl; 
   c1.display(); 
   cout << "c2 :"<<endl;
   c2.display();   
   if(c1==c2)
   {
      cout << "equal" <<endl;
   } 
   else 
   {
      cout << "not equal" <<endl;
   }
   complex c3 = c1 + c2;  
   cout << "c3 :" << endl;
   c3.display(); 
   complex c4 = c2 - c1;  
   cout << "c4 :" << endl;
   c4.display(); 
   c2-=c1;  
   cout << "c2 modified  :" << endl;
   c2.display(); 
   c4=++c1; 
   cout << "c4 modified pre increment:" << endl; 
   c4.display();
   cout << "c1 modified  :" << endl;
   c1.display();
   c4=c1++; 
   cout << "c4 modified post increment:" << endl; 
   c4.display();
   cout << "c1 modified  :" << endl;
   c1.display();

   cout << "The objects created of class complex is : " << complex::count << endl; 
   return 0;
}
