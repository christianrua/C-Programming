#include <iostream>

int main() {
	
  // Declare a variable
  for(int i=0;i<=100;i++){
    if (i%3==0 && i%5==0){
      std::cout<<"FizzBuzz \n";
    }
    else if (i%3==0){
      std::cout<<"Fizz \n";
    }
    else{
      std::cout<< i <<"\n";
    }  
  }
  
  
  return 0;
}
