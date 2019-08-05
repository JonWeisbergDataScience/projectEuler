
#include<iostream>

using namespace std;
bool isPrime(int n);

int main(){
      long sumoprimes = 0;
      int index = 1;
      while( index< 2000000 ){
        if(isPrime(index)){ sumoprimes += index;}
        index += 1;
      }
      cout << "The sum of primes less than 2000000 is : " << sumoprimes << endl;


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


