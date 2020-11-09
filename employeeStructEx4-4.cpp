#include <iostream>
#include <iomanip>

using namespace std;

struct employee{
    int emp_number;
    float emp_compensation;
    
};

int main(){
    employee emp1, emp2, emp3;

    cout<<"Enter the employee number and his compensation for first employee: ";
    cin>>emp1.emp_number>>emp1.emp_compensation;
    cout<<"Enter the employee number and his compensation for second employee: ";
    cin>>emp2.emp_number>>emp2.emp_compensation;
    cout<<"Enter the employee number and his compensation for third employee: ";
    cin>>emp3.emp_number>>emp3.emp_compensation;
    cout << "Employee number"<<setw(8)<<"Employee compensation"<<endl;
    cout<<emp1.emp_number<<setw(8)<<emp1.emp_compensation<<" dollers"<<endl;
    cout<<emp2.emp_number<<setw(8)<<emp2.emp_compensation<<" dollers"<<endl;
    cout<<emp3.emp_number<<setw(8)<<emp3.emp_compensation<<" dollers"<<endl;
    return 0;
}
