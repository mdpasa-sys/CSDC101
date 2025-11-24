#include <iostream>
using namespace std;

//function that use pass by value
void passByValue(int num){
    num += 10; //attemp to modify
    cout<<"Inside passByValue(): num = "<< num << endl;
}

//function that use pass by reference
void passByReference(int &num){
    num += 10; //attemp to modify
    cout<<"Inside passByReference(): num = "<< num << endl;
}

int main() {
  int a = 5;
  int b = 5;
  
  //demonstrate pass by value
  cout<<"Before passByValue(): a = "<< a << endl;
   passByValue(a);
   cout<<"After  passByValue(): a = "<< a << endl;
   
   //demonstrate pass by reference
    cout<<"Before passByReference(): b = "<< b << endl;
   passByReference(b);
   cout<<"After  passByReference(): b = "<< b << endl;
   
   return 0;
}