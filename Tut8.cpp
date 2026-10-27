// Write a program in C++ to Read and Display the information of Employees Using Multiple Inheritance
#include <iostream>
#include <string>
using namespace std;

class BasicInfo
{
protected:
   int emp_id;
   string name;

public:
   void getBasicInfo()
   {
      cout << "Enter employee ID: ";
      cin >> emp_id;
      cin.ignore();
      cout << "Enter employee name: ";
      getline(cin, name);
   }

   void displayBasicInfo() const
   {
      cout << "Employee ID : " << emp_id << endl;
      cout << "Name : " << name << endl;
   }
};

class DepartmentInfo
{
protected:
   string dept_name;
   string designation;

public:
   void getDepartmentInfo()
   {
      cout << "Enter department: ";
      getline(cin, dept_name);
      cout << "Enter designation: ";
      getline(cin, designation);
   }

   void displayDepartmentInfo() const
   {
      cout << "Department : " << dept_name << endl;
      cout << "Designation : " << designation << endl;
   }
};

class Employee : public BasicInfo, public DepartmentInfo
{
   float salary;

public:
   void getEmployeeData()
   {
      getBasicInfo();
      getDepartmentInfo();
      cout << "Enter salary: ";
      cin >> salary;
   }

   void displayEmployeeData() const
   {
      cout << "\nEmployee Information" << endl;
      displayBasicInfo();
      displayDepartmentInfo();
      cout << "Salary : " << salary << endl;
   }
};

int main()
{
   Employee emp;
   emp.getEmployeeData();
   emp.displayEmployeeData();
   return 0;
}

/*
OUTPUT:
Enter employee ID: 101
Enter employee name: Asha Patil
Enter department: Electronics
Enter designation: Assistant Engineer
Enter salary: 45000

Employee Information
Employee ID : 101
Name : Asha Patil
Department : Electronics
Designation : Assistant Engineer
Salary : 45000
*/
