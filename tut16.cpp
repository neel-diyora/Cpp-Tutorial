#include<iostream>
using namespace std;

// structures in c++ :
  typedef struct employee
{
    /* data */
    int eId;
    char favChar;
    float salary;
}ep;

int main(){
     ep neel;
     
     neel.eId = 1;
     neel.favChar = 'c';
     neel.salary = 120000000;
     cout<<"the value is "<<neel.eId<<"."<<endl;
     cout<<"the value is "<<neel.favChar<<"."<<endl;
     cout<<"the value is "<<neel.salary<<"."<<endl;
    
    return 0;
}