#include <iostream>
#include <cstdlib>

int main() {
	srand(time(NULL));
  int answer=std::rand() % 10;
  // Your future is here
  std::cout<<"MAGIC 8-BALL:";
  
  switch(answer){
    case 0: 
     std::cout<<"As I see it, yes.";
     break;
    case 1: 
     std::cout<<"It is certain.";
     break;
    case 2: 
     std::cout<<"It is decidedly so.";
     break;
    case 3: 
     std::cout<<"Very doubtful.";
     break;
    case 4: 
     std::cout<<"Yes - definitely.";
     break;
    case 5: 
     std::cout<<"You may rely on it.";
     break;
    case 6: 
     std::cout<<"Outlook not so good.";
     break;
    case 7: 
     std::cout<<"My reply is no.";
     break;
    case 8: 
     std::cout<<"Don't count on it.";
     break;
    case 9: 
     std::cout<<"Concentrate and ask again.";
     break;
    case 10: 
     std::cout<<"Cannot predict now.";
     break;
  }
  
  
 return 0; 
}
