#include <iostream>

int main() {

  int gryffindor=0;
  int hufflepuff=0;
  int ravenclaw=0;
  int slytherin=0;
  int answer1,answer2,answer3,answer4;
  
  // The magic starts here
  std::cout<<"The Sorting Hat Quiz!";
  std::cout<<"1. When I'm dead, I want people to remember me as: \n";
  std::cout<<" \n";
  std::cout<<"1) The Good \n";
  std::cout<<"2) The Great \n";
  std::cout<<"3) The Wise \n";
  std::cout<<"4) The Bold \n";
  std::cout<<"Type a number ";
  std::cin>>answer1;
  
  if (answer1>0 && answer1<5){
  	switch(answer1){ 
      case 1:
      	hufflepuff=hufflepuff+1;
        break;
      case 2:
      	slytherin=slytherin+1;
        break;
      case 3:
      	ravenclaw=ravenclaw+1; 
        break;
      case 4:
      	gryffindor=gryffindor+1; 
        break;
    }
  
    
  }
  else{
  	std::cout<<"Invalid input. /n";  
  }
  
  std::cout<<"2. Dawn or Dusk? \n";
  std::cout<<" \n";
  std::cout<<"1) Dawn \n";
  std::cout<<"2) Dusk \n";
  std::cout<<"Type a number ";
  std::cin>>answer2;
  
  if(answer2==1){
  	gryffindor=gryffindor+1;
    ravenclaw=ravenclaw+1;
  }
  else if(answer2==2){
  	hufflepuff=hufflepuff+1;
    slytherin=slytherin+1;
  }
  else{
    std::cout<<"Invalid input. /n";
  }
  
  std::cout<<"3.Which kind of instrument most pleases your ear? \n";
  std::cout<<" \n";
  std::cout<<"1) The violin \n";
  std::cout<<"2) The trumpet \n";
  std::cout<<"3) The piano \n";
  std::cout<<"4) The drumThe Bold \n";
  std::cout<<"Type a number ";
  std::cin>>answer3;
  
  if (answer3>0 && answer3<5){
  	switch(answer3){ 
      case 1:
      	slytherin=slytherin+1;
        break; 
      case 2:
      	hufflepuff=hufflepuff+1;
        break;
      case 3:
      	ravenclaw=ravenclaw+1;
        break;
      case 4:
      	gryffindor=gryffindor+1; 
        break;}
      }

    else{
     std::cout<<"Invalid input. /n";   
    }
    
  std::cout<<"4.Which road tempts you most? \n";
  std::cout<<" \n";
  std::cout<<"1) The wide, sunny grassy lane \n";
  std::cout<<"2) The narrow, dark, lantern-lit alley \n";
  std::cout<<"3) The twisting, leaf-strewn path through woods \n";
  std::cout<<"4) The cobbled street lined (ancient buildings) \n";
  std::cout<<"Type a number ";
  std::cin>>answer4;
  
  if (answer4>0 && answer4<5){
  	switch(answer4){ 
      case 1:
        hufflepuff=hufflepuff+1;
        break; 
      case 2:
        slytherin=slytherin+1;
        break;
      case 3:
        gryffindor=gryffindor+1;
        break;
      case 4:
      	ravenclaw=ravenclaw+1;
        break;  }
    }
    else{
     std::cout<<"Invalid input. /n";   
    }
    
    int max=0;
    std::string house;
    
    if (gryffindor > max) {

  max = gryffindor;
  house = "Gryffindor";

}

if (hufflepuff > max) {

  max = hufflepuff;
  house = "Hufflepuff";

}

if (ravenclaw > max) {

  max = ravenclaw;
  house = "Ravenclaw";

}

if (slytherin > max) {

  max = slytherin;
  house = "Slytherin";

}

std::cout << house << "!\n";
    
    

  return 0;
}
