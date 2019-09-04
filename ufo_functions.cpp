#include <iostream>
#include <vector>

// Define functions
void display_status(std::vector<char> incorrect, std::string answer){
		std::cout<<"\n Incorrect Guesses:\n";
    for(int i = 0; i < incorrect.size(); i++){
    	 std::cout << incorrect[i] << ' ';	  
    }
    
    std::cout << "\n Codeword:\n";
  	for (int i = 0; i < answer.length(); i++) {
    	std::cout << answer[i] << ' ';
  	}  
}


void greet(){
std::cout<<"=============\n";
std::cout<<"UFO: The Game\n";
std::cout<<"=============\n";
std::cout<<"
