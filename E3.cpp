#include<iostream>
using namespace std;
// this is for finding the largest prime factor of a given number
#include<math.h>
bool checkprime(long int number);//forward declaration

int main(){
    long int primenum = 0; 
    int answer = 0; 
    cout << "What number do we need the largest prime factor of? " << endl;
    cin >> primenum; 
    bool done =1;
    long int fct = pow(primenum,0.5);
    while(done){
       if (fct % 2 == 0){fct = fct -1;}
        if( checkprime(fct) && primenum % fct == 0){ 
          answer = fct;
          done = 0;}
        fct = fct -2;  
    } 
 
   cout << " The largest prime factor of " << primenum << " is " << answer<< endl; 



 return 0;
}



bool checkprime(long int number){
     bool isprime = 1;
     if(number == 2 || number ==3){isprime = 1;}
     else if( number % 2 ==0 || number % 3 ==0){isprime = 0;}
     else{
         int i = 5; 
         while( i*i < number){
            if( number % i == 0 || number % (i+2) == 0){isprime = 0;}
            else{ i = i +6;}
         }
     } 
     return isprime; 
}
