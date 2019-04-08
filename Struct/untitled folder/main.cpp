//  main.cpp
//  Struct
//
//  Created by Zaher Natour on 04/12/2018.
//  Copyright © 2018 Zaher Natour. All rights reserved.
//

#include<iostream>
#include<string>
using namespace std;

struct employee
{
    int emp_no;
    string job;
    string name;
    float salary;
    float bonus;
};

void set_salaries(employee emp)
{
    if(emp.job == "senior lecturer"){
        emp.salary = 6000;
    }
    if(emp.job == "lecturer"){
        emp.salary = 5000;
    }
    if(emp.job == "admin assistant"){
        emp.salary = 2500;
    }else {
        emp.salary = 1500;
    }
}

void set_bonus(employee emp){
    if(emp.job == "senior lecturer"){
        emp.bonus = 20/100;
    }
    if(emp.job == "lecturer"){
        emp.bonus = 10/100;
    }
    if(emp.job == "admin assistant"){
        emp.bonus = 5/100;
    }else {
        emp.bonus = 2.5/100;
    }
}
int main()
{
    
    employee emps[10];

    for ( int i = 0; i < 10; i++)
    {
        cout << "Enter Employee Details Number: ";
        cin >> emps[i].emp_no;
     
        cout << "Enter The Name For Employee Number ("<< emps[i].emp_no <<") :";
        cin >> emps[i].name;
        
        cout << "Enter The job For Employee Number ("<< emps[i].emp_no <<") :";
        cin >> emps[i].job;

        set_salaries(emps[i]);

        set_bonus(emps[i]);
        //Set the salary after adding the bonus
        emps[i].salary = emps[i].salary + (emps[i].salary * emps[i].bonus);

    }
    for (int i = 0; i < 10; i++)
    {
        cout << "Employee Number: " << emps[i].emp_no <<"\n";
        cout << "Employee Name: " << emps[i].name << "\n";
        cout << "Job Name: " << emps[i].job <<"\n";
        cout << "Salary: " << emps[i].salary <<"\n";
        cout << "Bonus: " << emps[i].bonus <<"\n";
    }
    system("pause");
}
