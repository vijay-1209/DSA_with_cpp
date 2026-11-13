#include<iostream>
using namespace std;

int main(){
    // creation of a 2D array
    int arr[3][4];

    // Initialization of a 2D- array
    // int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,14,16};

    // taking elements of the array as input
    cout<<"enter the elements of array row-wise"<< endl;
    for(int row=0; row<3; row++){
        for(int col=0; col<4; col++){
            cin>> arr[row][col];
        }
        cout<< endl;
    }

   /* cout<<"enter the elements of array col-wise"<< endl;
    for(int col=0; col<4; col++){
        for(int row=0; row<3; row++){
            cin>> arr[row][col];
        }
        cout<< endl;
    } */

    // printing the 2D array
    cout << "Printing the 2D array " << endl;
    for(int row=0; row<3; row++){
        for(int col=0; col<4; col++){
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
}