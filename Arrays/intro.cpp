#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Array with function
void printArray(int arr[], int size){
     cout<<"printing the array"<<endl;
     //print the array
     for(int i=0; i<size; i++){
          cout<<arr[i]<<" ";
     }
     cout<<"printing done"<< endl;
}


int main(){

     //declaring an array
     int number[15];

     //accessing an array
     cout<<"value at 15 index "<<number[14]<<endl;

     //initialsing an array
     int second[3]= {5,7,11};

     int third[15] = {2,7};
     int n=15;
     printArray(third,15);
     
     //Accessing an array
     cout<<"value at 2 is "<< second[2]<<endl;
     return 0;
}