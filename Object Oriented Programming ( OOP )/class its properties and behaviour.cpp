//Author : Nahin the Coder
//Date : 17-01-2022

#include<bits/stdc++.h>
using namespace std;

class Employee{
    
    public:
        string name; //properties or attributes
        double age;//properties or attributes
        double salary;//properties or attributes

    void PrintEmployee() //behaviour
    {
        cout<<"Employee Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Salary : "<<salary<<" USD"<<endl;
    }
   

};


int main()
{
    //custom data type ->Employee
    //employee1 is a "Employee" type variable
	  Employee employee1;


    employee1.name = "Nahin";
    employee1.age = 25;
    employee1.salary = 105000;
    employee1.PrintEmployee();

    


	
	return 0;
}
