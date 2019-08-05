#include<iostream>
using namespace std;

int is_palindrome(int n); 
//this is fine for a 6 digit number, but we need to be more clever for a bigger problem
int main(){
   int pal = 1;
   bool finished = 0;
   int bp = 100001; 
   int bignum;
   for(int a=999; a > 99; a--){
       for(int b= 999; b > 99; b--){
       bignum = a*b;
       if(is_palindrome(bignum) == 1 && bignum > bp){ bp = bignum; }
       }
   }
   
   cout << "The biggest palindrome formed by multiplying 2 3-digit numbers is: " << bp << endl; 
  return 0; 
}

int is_palindrome(int n){
   int check = 0;
   int remainder =0;
   int reverse_num = 0;
   int temp = n;
   while(temp!=0)
   {
    remainder=temp%10;
    reverse_num=reverse_num*10+remainder;
    temp/=10;
   }
   if( reverse_num == n){ check = 1;}
   return check;
   
}
                         
