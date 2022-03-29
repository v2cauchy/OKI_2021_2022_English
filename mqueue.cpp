/*
//class implementing queue in C++
//the same functionality as STL (Standard Template Library ) class queue in C++ 
//with usage example
//Version 1.3
Consists
a. Program template
b. defintion of class mqueue 
c. Constructor
d. empty() method
Author: Daniel Olkowski / Olimpijskie Kolo Informatyczne
 */
 
#include <iostream>
#include <vector>
using namespace std;

class mqueue {
public:
 mqueue() { 
    first = last = -1;
 } 
 bool empty() {
    if (first == -1 ) 
        return true; 
    return false; 
 }	
 
private:
 vector<int> elements;
 int first, last;
};	

int main() {
 mqueue	payments;
 
 cout << "empty?: " << payments.empty() << "\n"; 

 return 0;
}