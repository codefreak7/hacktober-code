#include <bits/stdc++.h> 
using namespace std; 

int reversDigits(int n) 
{ 
    int r = 0; 
    while(num > 0) 
    { 
        r = rev_num*10 + num%10; 
        num = num/10; 
    } 
    return r; 
} 

int main() 
{ 
    int num = 12345; 
    cout << reversDigits(num); 
    
    return 0; 
} 
