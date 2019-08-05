#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int checkhorizontal(int array[20][20]);//checks rows
int checkvertical(int array[20][20]);//checks columns
int checkdiagdown(int array[20][20]);// checks diagnal going downward
int checkdiagup(int array[20][20]);// checks diagnal going upward

int main(){
  string line;  
  ifstream gridfile("gridforEuler11.txt");
    
  int grid[20][20];
  //because we are checking a 20x20 grid
  int counter = 0;
  for(int i=0; i < 20;i++){
      for(int j=0; j < 20;j++){
         if( i > counter){counter++;}
         gridfile >> grid[i][j];
      }
  }
//the grid is set for math!

    int horisum = checkhorizontal(grid) ; 
    cout << " horizontal sum is: " << horisum << endl;  
    int vertisum = checkvertical(grid); 
    cout << " vertical sum is: " << vertisum << endl;  
    int diagdownsum = checkdiagdown(grid);
    cout <<" diagonal downward sum is: " << diagdownsum <<endl;
    int diagupsum = checkdiagup(grid);
    cout <<" diagonal upward sum is: " << diagupsum <<endl;
    
    return 0;

}
int checkvertical( int array[20][20]){
    int sum = 0;
   
    for(int j = 0; j < 20; j++){
      int temp;
        for(int i=0; i < 16; i++){
        int first = array[i][j];
        int second = array[i+1][j];
        int third = array[i+2][j];
        int fourth = array[i+3][j];
        temp = first*second*third*fourth;  
        if( temp > sum){ sum = temp;}// cout << "new max vert is: " << sum <<  "  starting at " << i+1 << "," << j+1 << endl;}
     }
   }
      

    return sum;
}

int checkhorizontal( int array[20][20]){
    int sum = 0;
     
    for(int j = 0; j < 20; j++){
      int temp;
        for(int i=0; i < 16; i++){
        int first = array[j][i];
        int second = array[j][i+1];
        int third = array[j][i+2];
        int fourth = array[j][i+3];
        temp = first*second*third*fourth;  
        if( temp > sum){ sum = temp;}
     }
   }
      

    return sum;
}

int checkdiagup(int array[20][20]){


    int sum = 0;
     
    for(int j = 0; j <16; j++){
      int temp;
        for(int i=0; i < 16; i++){
        int first = array[19-j][i];
        int second = array[19-j-1][i+1];
        int third = array[19-j-2][i+2];
        int fourth = array[19-j-3][i+3];
        temp = first*second*third*fourth;  
        if( temp > sum){ sum = temp;}
     }
   }
   return sum; 
}
int checkdiagdown(int array[20][20]){


    int sum = 0;
     
    for(int j = 0; j < 16; j++){
      int temp;
        for(int i=0; i < 16; i++){
        int first = array[j][i];
        int second = array[j+1][i+1];
        int third = array[j+2][i+2];
        int fourth = array[j+3][i+3];
        temp = first*second*third*fourth;  
        if( temp > sum){ sum = temp;}
     }
   }
   return sum; 
}
