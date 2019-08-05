#include<iostream>

using namespace std;

int main(){
   int product = 0;

   for(int a = 1; a <1000; a++){
       for(int b=2; b < 1000; b++){
           for(int c = 3; c < 1000; c++){
            
               if( a*a + b*b - c*c == 0 && a + b + c ==1000){ product = a*b*c;}
           }
       }
   }
    cout <<"The product of a*b*c for pythagorean triples st a+b+c=1000 is: " << product << endl;


   return 0;
}
