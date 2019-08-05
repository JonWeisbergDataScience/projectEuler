#include<iostream>

using namespace std;
bool isPrime(int n); 
int main(){
     int primes = 2;
     int answer = 0;
     int currentnum =5;
     int currentprime = 5;
     while(primes < 10001){
     if(isPrime(currentnum)){primes +=1; currentprime = currentnum; }
     currentnum += 2;
    }
    cout << "The 10001st prime is: " << currentprime << endl; 
  return 0; 
}


bool isPrime(int n)
{
    if (n <= 1)  return false;
    if (n <= 3)  return true;
          
    if (n%2 == 0 || n%3 == 0) return false;
    for (int i=5; i*i<=n; i=i+6){
      if (n%i == 0 || n%(i+2) == 0) return false;
                                               }
      return true;
}


