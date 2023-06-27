//Q:- Find the area and circumference of circle.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

double circumference(int r){
     return 2*3.14*r;
}

double area(int r){
     return 3.14*r*r;
}

int main(){

     int r = 3;
     cout<<"area of circle is "<<area(r)<<endl;
     cout<<"Circumference of circle is "<<circumference(r)<<endl;
     
     return 0;
}