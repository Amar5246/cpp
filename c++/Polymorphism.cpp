#include<iostream>
using namespace std; 
enum{Insert_data=1,Update_data,Display_all_data}; 
enum{wage_Employe=1,sales_Person};
int choice()
{
    int choice;
    cout << "Enter your choice " <<endl;
    cin >> choice;
    return choice;
} 

class Employ
{
       
    protected: 
    string emp_name;
    string emp_type; 
    int emp_id; 
    int hr;
    public :   
        virtual void Accept()=0; 
        void update()
        {   
            cout << "Enter the new name of the employ : "<<endl; 
            cin.ignore(); 
            getline(cin,emp_name);
        } 
        
        virtual void display()=0;
        virtual void getSalary()=0;

};  

class wageEmploye : public Employ 
{
     
    double wagesalary; 
    int rate=200; 
    static int wage_Employ_id ; 
    public : 
       wageEmploye()
       {
           this->emp_id=wage_Employ_id; 
           this->emp_type="wage employ";
           wage_Employ_id++;
       }
       void Accept() 
       {
           cout << "Enter the name of the employ : "<<endl; 
           cin.ignore(); 
           getline(cin,emp_name); 
           cout << "Enter the no of hours empoloy was working " << endl; 
           cin >> hr; 
       }  
       void getSalary() 
       {
           wagesalary=(hr*26)*rate;
       } 
       
       void display() 
       {
           cout <<endl; 
           cout << " Name of the employ is : "<< emp_name <<endl; 
           cout << " Employ type is : " << emp_type <<endl;
           cout << "Employ id of the employ is : " << emp_id << endl; 
           cout << "Salary of the employ is : " << wagesalary <<endl; 
           cout <<endl;
       } 
       
};  
int wageEmploye :: wage_Employ_id=23901;
class salesPerson : public Employ
{
    int sales; 
    int commission=10000; 
    int rate=100;
    double salesalary; 
    static int sale_Employ_id ; 
    public : 
       salesPerson()
       {
           this->emp_id=sale_Employ_id;  
           this->emp_type="sales employ";
           sale_Employ_id++;
       }
       void Accept() 
       {
           cout << "Enter the name of the employ : "<<endl; 
           cin.ignore(); 
           getline(cin,emp_name);
           cout << "Enter the no of hours employ was working " << endl;  
           cin >> this->hr;  
           cout << "Enter the no of items sold "<<endl; 
           cin >> this->sales; 
       }  
       void getSalary() 
       {
           salesalary=((hr*26)*rate)+sales*commission;
       } 
       
       void display() 
       {
           cout <<endl; 
           cout << " Name of the employ is : "<< emp_name <<endl; 
           cout << " Employ type is : " << emp_type <<endl;
           cout << "Employ id of the employ is : " << emp_id << endl; 
           cout << "Salary of the employ is : " << salesalary <<endl; 
           cout <<endl;
       } 
       
}; 

int salesPerson :: sale_Employ_id=24901;
int main()
{
    int emp_nos; 
    int wage_nos,sale_nos;
    int n,i=0,w=0,s=0; 
    int choice1; 
    int choice0; 
    
    cout << "Enter the no of wageEmploys data you want to store : " << endl; 
    cin >> wage_nos;
    Employ * ptr[wage_nos]; 
    for(int i=0;i<wage_nos;i++)
    {
        ptr[i]=new wageEmploye(); 
    } 
    cout << "Entre the no of salesEmploys data you want to store : " << endl;
    cin >> sale_nos;
    Employ * ptr1[sale_nos]; 
    for(int i=0;i<sale_nos;i++)
    {
        ptr1[i]=new salesPerson(); 
    } 
    emp_nos=wage_nos+sale_nos; 
     
    do 
    {  
        
        cout <<endl;
        cout <<"Choice 1 :" <<'\t'<<"Insert_data"<<endl;
        cout <<"Choice 2 :" <<'\t'<<"Update data"<<endl;
        cout <<"Choice 3 :" <<'\t'<<"Display all data"<<endl; 
        cout <<"Choice 0 :" <<'\t'<<"Exit"<<endl;
        cout <<endl; 
        choice1=choice();  
        while(!(choice1>=0&&choice1<=3))
        {
            cout << "Invalid input enter choice between 0 to 3" <<endl;
            choice1=choice();
        } 
        switch(choice1)
        {
            case Insert_data :

                if(i>=emp_nos)
                {
                    cout <<"There are only " << i <<" employs you can not insert any more data " <<endl;
                    break;
                } 
                cout <<endl;
                cout <<"Choice 1 :" <<'\t'<<"wage_Employe"<<endl;
                cout <<"Choice 2 :" <<'\t'<<"sales_Person"<<endl;
                cout <<endl; 
                int choice0; 
                choice0=choice(); 
                while(!(choice0>0&&choice0<=2))
                {
                    cout << "Invalid input enter choice between 1 or 2" <<endl;
                    choice0=choice();
                }
                switch(choice0)
                {
                    
                    case wage_Employe :  
                        if(w>=wage_nos)
                        {
                            cout <<"There are only " << wage_nos <<" wage employs you can not insert any more data for wage employs" <<endl;
                            break;
                        } 
                        ptr[w]->Accept(); 
                        ptr[w]->getSalary();
                        ptr[w]->display(); 
                        w++;  
                        i++;  
                        break; 

                    case sales_Person : 
                        if(s>sale_nos)
                        {
                            cout <<"There are only " << sale_nos <<" sales employs you can not insert any more data for sales employs" <<endl;
                            break;
                        }
                        ptr1[s]->Accept(); 
                        ptr1[s]->getSalary();
                        ptr1[s]->display(); 
                        s++;  
                        i++;
                        break; 
                }
                break;
            case Update_data : 
                cout <<"Enter the employ id of the employ whose data you want to update" << endl;
                cin >>n; 
                if(n>=23901&&n<(23901+wage_nos)) 
                {
                    while(!(n>=23901&&n<(23901+wage_nos))) 
                    {
                       cout <<"Enter the employ id of the employ whose data you want to update" << endl;
                       cin >>n;
                    }  
                    n=n%10;
                    ptr[n-1]->update(); 
                    break;
                } 
                else if(n>=24901&&n<(24901+sale_nos)) 
                {
                    while(!(n>=24901&&n<(24901+sale_nos))) 
                    {
                       cout <<"Enter the employ id of the employ whose data you want to update" << endl;
                       cin >>n;
                    }  
                    n=n%10;
                    ptr1[n-1]->update(); 
                    break;
                }
            case Display_all_data : 
                if(i<emp_nos-1)
                {
                    cout <<"Can not display data as not all the employs data has been inserted " << endl;
                    break;
                }
                else
                { 
                    for(int i=0;i<wage_nos;i++)
                    {
                        ptr[i]->display();
                    } 
                    for(int i=0;i<sale_nos;i++)
                    {
                        ptr1[i]->display();
                    }
                }  
                break;    
        }
    }while(choice1!=0);  
    for(int i=0;i<wage_nos;i++)
    {  
        delete ptr[i];
    } 
    for(int i=0;i<sale_nos;i++)
    {  
        delete ptr1[i];
    } 
    return 0;
} 
