#include<iostream>

using namespace std;

int main(){
    long int large_f = 1;
    long int current_divider = 3; 
    long int n = 1; 
    cout << "What number do we need the largest prime factor of? " << endl;
    cin >> n;
    long int bign = n;
    while( n % 2 ==0){ //we divide out all factors of 2 first leaving only odd factors left
      large_f = 2;
       n = n/2;
    }
    while(n != 1){
       while( n % current_divider == 0){
        large_f = current_divider;
        n = n/current_divider; 
       } 
       current_divider = current_divider + 2; 
    }
    cout << " The largest prime factor of " << bign <<" is " << large_f << endl; 
  return 0;
}
