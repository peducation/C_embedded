/* ---------------------------------------------------------------
Objective:  Program is to understand vectors of Standard 
            Template Library
Created by: Navjot Kaur
--------------------------------------------------------------*/

#include <iostream>
#include <vector>
using namespace std;

int main(){
    //Assign vector
    vector<int> vec;

    //Fill in array with 12 seven elements
    vec.assign(7, 12);
    cout <<"The vector elements are: ";
    for(int i = 0; i < 7; i++){
        cout <<vec[i] <<" ";
    }

    //insert 24 to the last position
    vec.push_back(23);
    int s = vec.size();
    cout <<"\n The last element is: "<<vec[s - 1];

    //prints the vector after push back
    cout <<"\n The vector elements after push back are: ";
    for(int i = 0; i < vec.size(); i++){
        cout <<vec[i] <<" ";
    }

    //remove last element
    vec.pop_back();

    //prints the vactor
    cout <<"\n The vector elements after ppo_back are: ";
    for(int i = 0; i < vec.size(); i++){
        cout <<vec[i] <<" ";
    }

    //insert 10 at the beginning
    vec.insert(vec.begin(), 10);
    cout <<"\n the first element after inserting element is: "<<vec[0];

    //prints the vector
    cout <<"\n The vector elements after inseration are: ";
    for(int i = 0; i < vec.size(); i++){
        cout <<vec[i] <<" ";
    }

    //remove first element
    vec.erase(vec.begin());
    cout <<"\n the first element after erasing first element is:  " <<vec[0];

    //insert at the beginning
    vec.emplace_back(20);
    s = vec.size();
    cout <<"\n The last element after inserting element is: "<<vec[s - 1];

    //Erases the vector
    vec.clear();
    cout <<"\nVector size after clear(): " <<vec.size();

    //Two vectors to swap
    vector<int> obj1, obj2;
    obj1.push_back(2);
    obj1.push_back(4);
    obj2.push_back(3);
    obj2.push_back(6);

    cout <<"\nVector1: ";
    for(int i = 0; i <obj1.size(); i++){
        cout <<obj1[i]<<" ";
    }

    cout <<"\nVector2: ";
    for(int i = 0; i <obj2.size(); i++){
        cout <<obj2[i]<<" ";
    }

    //Swap obj1 and obj2
    obj1.swap(obj2);
    cout <<"\n After swaping vector1: ";
    for(int i = 0; i <obj1.size(); i++){
        cout <<obj1[i] <<" ";
    }

    cout <<"\n Vector2: ";
    for(int i = 0; i <obj2.size(); i++) {
        cout << obj2[i] << " ";

    }
    return 0;
}
