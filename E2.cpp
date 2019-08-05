#include<iostream>
using namespace std;
int main(){
   int a_n,a_1,a_2; //the point will be a_n = a_1 + a_2 which is the definition of the fibonacci sequence
   a_1 = 1;
   a_2 = 1;
   a_n = a_1 + a_2;
   int sum = 0;
   while(a_n < 4000000){
     if(a_n%2==0){ sum += a_n;}
     int temp = a_n;
     a_n += a_2; //the new a_n is the old one plus the previous term
     a_1 = a_2;//this line does not actually matter after the first iteration
     a_2 = temp;//the old a_n is the new previous term
   }
   cout <<" The sum of the first 4000000 Fibonacci even numbers is: " << sum << endl;
   return 0;
}
