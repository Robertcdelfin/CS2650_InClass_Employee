#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
// Employee Class Declaration
class Employee
{
private:
	string name; // Employee's name
	int idNumber; // ID number
	string department; // Department name
	string position; // Employee's position
public:
	Employee(string n, int i, string d, string p);
	Employee(string n, int i);
	Employee();

	//getter for department
	string getdepartment() {
		return department;
	}
	//getter for name
	string getname() {
		return name;
	}
	//getter for number accessor
	int getidNumber() {
		return idNumber;
	}
	//getter/accessor for position
	string getposition() {
		return position;
	}
	//setter for department mutator
	void setdepartment(string d) {
		department = d;
	}

	void setposition(string d) {
		position = d;
	}
	void setname(string d) {
		name = d;
	}
	void setidNumber(int d) {
		idNumber = d;
	}
};
// Constructor #1
Employee::Employee(string n, int i, string d, string p)
{
	name = n;
	idNumber = i;
	department = d;
	position = p;

}
// Constructor #2
Employee::Employee(string n, int i)
{
	name = n;
	idNumber = i;
}
// Default constructor
Employee::Employee()
{
	name = " ";
	idNumber = 0;
	department = " ";
	position = " ";
}

// The displayEmployee function displays the data *
// in the Employee object passed as an argument. *
void displayEmployee(Employee e)
{
	cout << setw(20) << e.getname() << setw(20) << e.getidNumber() << setw(20) << e.getdepartment() << " " << setw(20) << e.getposition() << endl;
	// TODO

}
int main()
{
	//creates the employees
	Employee worker1("Susan Mayers", 47899, "Accounting", "Vice President");
	Employee worker2("Mark Jones", 39119, "IT", "Programmer");
	Employee worker3("Joy Rogers", 81774, "Manufacturing", "Engineer");
	// Display employee.
	cout << setw(10) << "		Name		IdNumber	 Department		Position" << endl;
	cout << endl;
	Employee workers[] = { worker1, worker2, worker3 };
	displayEmployee(workers[0]);
	displayEmployee(workers[1]);
	displayEmployee(workers[2]);
	return 0;
}