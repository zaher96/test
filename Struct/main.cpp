//  main.cpp
//  Struct
//
//  Created by Zaher Natour on 04/12/2018.
//  Copyright � 2018 Zaher Natour. All rights reserved.
//

#include<iostream>
#include<string>
using namespace std;

struct Employee
{
    int emp_no;
    string job;
    string name;
    float salary;
    float bonus;
};

//Sets the employee's salary based on the position
void set_salaries(Employee emp[], int i)
{
    if(emp[i].job == "Senior_Lecturer"){
        emp[i].salary = 6000;
    }

	else if(emp[i].job == "Lecturer"){
        emp[i].salary = 5000;
    }

	else if(emp[i].job == "Admin_Assistant"){
        emp[i].salary = 2500;
    } else {
        emp[i].salary = 1500;
    }
}

//Sets the employee's bonus based on the position
void set_bonus(Employee emp[], int i){
    int net;
    if(emp[i].job == "Senior_Lecturer"){
        emp[i].bonus = 0.4;
    }

	else if(emp[i].job == "Lecturer"){
        emp[i].bonus = 0.3;
    }

	else if(emp[i].job == "Admin_Assistant"){
        emp[i].bonus = 0.2;
    }else {
        emp[i].bonus = 0.1;
    }
    net = emp[i].salary * emp[i].bonus;
    cout << net;

}

//Prints employee details
void display(Employee emp[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<"Employee's Number :"<<emp[i].emp_no<<"\n";
        cout<<"Employee's Name :"<<emp[i].name<<"\n";
        cout<<"Employee's Job Title :"<<emp[i].job<<"\n";
        cout<<"Employee's Salary :"<<emp[i].salary<<"\n";
        cout<<"Employee's Bonus : ";
        set_bonus(emp, i);
        cout<<"\n\n";
    }
}

int main()
{
    int size = 10;
    Employee emps[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter The Number of Employee: "<<i+1<<"\n";
        cin >> emps[i].emp_no;

        cout << "Enter The Name of Employee: "<<i+1<<"\n";
        cin >> emps[i].name;

        cout << "Enter The Job of Employee:"<<i+1<< "\n";
        cin >> emps[i].job;

        set_salaries(emps, i);
    }

    cout<<"\n";

    display(emps, size);
    cout<<"\n";

    return 0;
}

