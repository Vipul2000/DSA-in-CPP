//Q:-Write a function to print squares of the first 5 natural number.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int square(int x){
     return x * x;
}

int main(){
     for (int i = 0; i <= 5; i++)
     {
          cout<<square(i)<<" " ;
     }
     
     return 0;
}