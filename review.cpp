#include <vector>
#include <iostream>

int main() {

  int odd;
  int even;
  std::vector<int> numbers = {2, 4, 3, 6, 1, 9};
  for (int i=0; i< numbers.size();i++){
    if(numbers[i]%2==0){
      even=even+numbers[i];
    }else{
      odd=odd*numbers[i];
    }
  }
  std::cout<<"Sum of even numbers is "<<even<<"\n";
  std::cout<<"Product of odd numbers is "<<odd<<"\n";
  return 0;
}
