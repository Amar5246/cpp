#include<iostream> 
using namespace std; 
 
typedef struct Book
{ 
    int bookid; 
    string title;
    double price;
  
}BOOK; 
void getdata(BOOK &Book) 
{
    cout << "Enter the Book id : " << endl; 
    cin >> Book.bookid ; 
    cout << "Enter the title of the book :" << endl; 
    cin.ignore();  
    getline(cin,Book.title); 
    cout << "Enter the price of the book : " <<endl;
    cin >> Book.price;
} 
void displaydata(BOOK &Book) 
{
    cout << " The Book id is : " <<Book.bookid <<endl; 
    cout << " The title of the book is : " << Book.title<<endl;
    cout << " The price of the book is : " <<  Book.price<<endl;
}
int main() 
{
    BOOK obj1; // object created in stack 
    BOOK *obj=new BOOK[5];  
    getdata(obj1); 
    displaydata(obj1); 
    cout << "data of the five books" <<endl; 
    for(int i=0;i<5;i++)
    {
        getdata(obj[i]); 
    }  
    for(int i=0;i<5;i++)
    {
        displaydata(obj[i]);
    }
    
    delete[] obj;

    return 0;
}