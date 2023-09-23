#include<iostream>
using namespace std; 
int Employ_id = 23901;
enum{Insert_data=1,Update_data,Display_all_data};
enum{Emp_Name=1,Emp_Salary};
int choice()
{
    int choice;
    cout << "Enter your choice " <<endl;
    cin >> choice;
    return choice;
}
class Employ
{
    
    string emp_name;
    double salary; 
    public : 
        int emp_id;
        Employ()
        {
           this->emp_id=Employ_id; 
           Employ_id++;
        } 
        Employ(int emp_id,string emp_name,double salary)
        {

        }  
        void Accept()
        {
            cout << "Enter the name of the employ : "<<endl; 
            cin.ignore(); 
            getline(cin,emp_name); 
            cout << "Enter the salary of the employ" << endl; 
            cin >> salary;
        } 
        void display()
        {
            cout <<endl;
            cout << "Employ id of the employ is : " << emp_id << endl;
            cout << " Name of the employ is : "<< emp_name <<endl; 
            cout << " Salaray of the employ is : " << salary << endl;
            cout <<endl;
        } 
        void update()
        {   
            cout <<endl;
            cout <<"Choice 1 :" <<'\t'<<"Emp_Name"<<endl;
            cout <<"Choice 2 :" <<'\t'<<"Emp_Salary"<<endl;
            cout <<endl;
            int choice2=choice(); 
            while(!(choice2>0&&choice2<=2))
            {
               cout << "Invalid input enter choice between 1 or 2" <<endl;
               choice2=choice();
            } 
            switch(choice2)
            {
                case Emp_Name :
                    cout << "Enter the new name of the employ : "<<endl; 
                    cin.ignore(); 
                    getline(cin,emp_name); 
                    break; 
                case Emp_Salary :
                    cout << "Enter the new salary of the employ" << endl;
                    cin >> this->salary; 
                    break;
            }

        }

}; 
int main()
{
    int emp_nos;
    int n,i=0; 
    int choice1;
    cout << "Enter the no of employs" << endl; 
    cin >> emp_nos;
    Employ *employs=new Employ[emp_nos]; 
    do 
    {  
        
        cout <<endl;
        cout <<"Choice 1 :" <<'\t'<<"Insert_data"<<endl;
        cout <<"Choice 2 :" <<'\t'<<"Update data"<<endl;
        cout <<"Choice 3 :" <<'\t'<<"Display all data"<<endl; 
        cout <<"Choice 0 :" <<'\t'<<"Exist"<<endl;
        cout <<endl; 
        choice1=choice();  
        while(!(choice1>=0&&choice1<=3))
        {
            cout << "Invalid input enter choice between 1 to 3" <<endl;
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
                employs[i].Accept();  
                employs[i].display();
                i++;
                break;
            case Update_data : 
                cout <<"Enter the employ id of the employ whose data you want to update" << endl;
                cin >>n; 
                while(!(n>=23901&&n<(23901+emp_nos))) 
                {
                   cout <<"Enter the employ id of the employ whose data you want to update" << endl;
                   cin >>n;
                }  
                n=n%10;
                employs[n-1].update(); 
                break; 
            case Display_all_data : 
                if(i<emp_nos-1)
                {
                    cout <<"Can not display data as not all the employs data has been inserted " << endl;
                    break;
                }
                else
                { 
                    for(int i=0;i<emp_nos;i++)
                    {
                        employs[i].display();
                    }
                }  
                break;    
        }
    }while(choice1!=0); 
    return 0;
}
