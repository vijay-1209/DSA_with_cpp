#include<iostream>
using namespace std;

// object-like macros
#define PI 3.14

// function-like macros 
#define PRINT(x) cout<<" The value is " << x;

int main(){
    /* // pre defined macros -> LINE,FILE,DATE,TIME
    cout<< " This is line " << __LINE__ << " in file " <<
    __FILE__ << endl;

    // compilation date
    cout<< " This program is complied on " << __DATE__ <<","<< __TIME__ << endl;
    */
    int r = 5;
    int l = 2;
    float area = PI * r * l;
    cout<<" Area is: "<< area << endl;

    int value = 42;
    PRINT(value);

    return 0;
}