/*well my english is not very well, but here the explanation in my mother tongue: bueno el ejercicio consiste en hacer 
version digital del juego The Big Bang Theory - Rock, Paper, Scissors, Lizard, Spock, 
entonces, se requiere de un generador de numeros aletorios, 
y se requiere de una logica para determinar quien le gana a quien, dependiendo del resultado del numero aleatorio.
*/
#include <iostream>
#include <stdlib.h>

int main() {
  srand (time(NULL));
  int computer = rand() % 5 + 1;//here could be zero, so add 1
  int user =0;
  // Live long and prosper
  std::cout << "====================\n";
  std::cout << "rock, paper, scissors,Lizard, Spock! !\n";
  std::cout << "====================\n";

  std::cout << "1) ✊\n";
  std::cout << "2) ✋\n";
  std::cout << "3) ✌️\n";
  std::cout << "4) 🖖\n";
  std::cout << "5) 👈 (lizard)\n";

  std::cout << "shoot! ";
  std::cin>>user;
  
  switch(user){
    case 1:
      if(computer==1){
        std::cout << "✊\n";
        std::cout << "tie \n";
      }
      else if(computer==2){
       std::cout << " ✋\n"; 
       std::cout << "you lose \n"; 
      }
      else if(computer==3){
       std::cout << " ✌️\n"; 
       std::cout << "you win \n";   
      }
      else if (computer==4){
       std::cout << " 🖖\n";
       std::cout << "you lose \n"; 
      }
      else{
        std::cout << " 👈 \n";
        std::cout << "you win \n";
      }
      break;
      
      case 2:
      if(computer==1){
        std::cout << "✊\n";
        std::cout << "you win \n";
      }
      else if(computer==2){
       std::cout << " ✋\n"; 
       std::cout << "tie \n"; 
      }
      else if(computer==3){
       std::cout << " ✌️\n"; 
       std::cout << "you lose \n";   
      }
      else if (computer==4){
       std::cout << " 🖖\n";
       std::cout << "you win \n"; 
      }
      else{
        std::cout << " 👈 \n";
        std::cout << "you lose \n";
      }
      break;
      
      case 3:
      if(computer==1){
        std::cout << "✊\n";
        std::cout << "you lose \n";
      }
      else if(computer==2){
       std::cout << " ✋\n"; 
       std::cout << "you win \n"; 
      }
      else if(computer==3){
       std::cout << " ✌️\n"; 
       std::cout << "tie \n";   
      }
      else if (computer==4){
       std::cout << " 🖖\n";
       std::cout << "you lose \n"; 
      }
      else{
        std::cout << " 👈 \n";
        std::cout << "you win \n";
      }
      break;
      
      case 4:
      if(computer==1){
        std::cout << "✊\n";
        std::cout << "you win \n";
      }
      else if(computer==2){
       std::cout << " ✋\n"; 
       std::cout << "you lose \n"; 
      }
      else if(computer==3){
       std::cout << " ✌️\n"; 
       std::cout << "you win \n";   
      }
      else if (computer==4){
       std::cout << " 🖖\n";
       std::cout << "tie \n"; 
      }
      else{
        std::cout << " 👈 \n";
        std::cout << "you lose \n";
      }
      break;
      
      case 5:
      if(computer==1){
        std::cout << "✊\n";
        std::cout << "you lose \n";
      }
      else if(computer==2){
       std::cout << " ✋\n"; 
       std::cout << "you win \n"; 
      }
      else if(computer==3){
       std::cout << " ✌️\n"; 
       std::cout << "you lose \n";   
      }
      else if (computer==4){
       std::cout << " 🖖\n";
       std::cout << "you win \n"; 
      }
      else{
        std::cout << " 👈 \n";
        std::cout << "tie \n";
      }
      break;
      
      
  }
  
  
  return 0;
}
