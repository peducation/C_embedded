/* ---------------------------------------------------------------
Objective:  Program is to understand begin() and end() finctions 
             in vectors.
Created by: Navjot Kaur
--------------------------------------------------------------*/

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec1;

    for(int i = 1; 1 <= 10; i++)
    vec1.push_back(i);

    cout <<"Understanding begin() and end() functions:  "<<endl;
    for(auto i = vec1.begin(); i != vec1.end(); ++i)
    cout << *i << " ";
    
    return 0;
}