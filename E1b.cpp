#include<iostream>
using namespace std;
int main(){
     int number = 0; 
     int sum = 0; 
      cout << "What number are we finding multiples of 3,5 less than it? " << endl;
      cin >> number;
     for(int a =1; a<number; a++){
     if( a% 3 == 0){ sum += a;}
     	else if(a%5 == 0){ sum += a;}

     }

     std::cout << " The sum of multiples of 3 and 5 less than " << number << " is:  " << sum << endl;


	return 0;

}
