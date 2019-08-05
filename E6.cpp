#include<iostream>

using namespace std;

int main(){
    long sumnat = 0;
    long sumsquare = 0;
    for(int i = 1; i < 101; i++){
      sumnat += i; 
      sumsquare += i*i; 
    }
    sumnat *= sumnat;
    int answer = sumnat - sumsquare;
    cout << " The difference between (1+ ...20) ^2 and (1^2 + ... + 20^2) is: " << answer << endl;


  return 0; 
}
