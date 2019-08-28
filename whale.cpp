#include <iostream>
#include <vector>
#include <string>

int main() {
	// Whale, whale, whale.
  // What have we got here?
  std::string input = "turpentine and turtles"; 
  std::vector<char> vowels;

  vowels.push_back('a');
  vowels.push_back('e');
  vowels.push_back('i');
  vowels.push_back('o');
  vowels.push_back('u');
  
  std::vector<char> result;
  for (int i = 0; i < input.size(); i++) {
  	for(int j=0;j<vowels.size();j++){
    	if(input[i]==vowels[j]){
      	result.push_back(vowels[j]);
      }	 
    }
	}

for(int z=0;z<result.size();z++){
  if(result[z]=='e'){
    result[z]='ee';
  }else if(vowels[z]=='u'){
        	result[z]='uu';  
  }  
}  
  
for(int z=0;z<result.size();z++){
	std::cout<<result[z];   
}  
 
return 0;
}
