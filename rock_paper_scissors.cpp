#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;
//int computer = 0;
int y = 0;
//int result = 0;
//int x= 3;
//int you = 0;
void ask(){
    
}

int compute(int x, int *computer){
    int result;
    *computer = rand() %3;
    if (x == *computer){
            result = 0;
    }

    switch (x){
        case 0:
            if(*computer == 1){

                result = 1;
            }
            else if(*computer == 2){
                result = 2;
            }
            break;
        case 1:
            if(*computer == 0){
                result = 2;
            }
            else if(*computer == 2){
                result = 1;
            }
            break;
        case 2:
            if(*computer == 0){
                result = 1;
            }
            else if(*computer == 1){
                result = 2;
            }
            break;
        default:

            break;
        }
    return result;
}
int main(){
    std::cout << "How many rounds do you want to play : "; // Type a number and press enter
    std::cin >> y; // Get user input from the keyboard

    int computer = 0;
    int x;
    int result;
       
    srand(time(0));
    for(int i =0 ; i < y ; ++i){
        x = 3;
        
        while(x > 2){ 
            std::cout << "Type 0(rock) , 1(paper) , 2(scissors) : "; // Type a number and press enter
            std::cin >> x; // Get user input from the keyboard
        }
        
        string arr[3] = {"rock", "paper", "scissors"};
        string win[3] = {"you tied", "you lost", "you won"};
        //you = x;
        //std::cout << "Your number is: " << x;
        int result = 0;

        
        result = compute(x , &computer);
        
        std::cout << (i + 1)<< " round" << std:: endl;
        std::cout << "computer : " << arr[computer] << std::endl;
        std::cout << "you : " << arr[x] << std::endl;
        std::cout << win[result] << std::endl;
        //std::cout <<"computer : "<< computer << std::endl;
        /*
        if (x == computer){
            std::cout << "you tied" << std::endl;
        }
        if (x == 0){    
            if(computer == 1){
            std::cout << "computer : paper" << std::endl;
            std::cout << "you : rock" << std::endl;
            std::cout << "you lost" << std::endl;
            }
            else if(computer == 2){
            std::cout << "computer : scissors" << std::endl;
            std::cout << "you : rock" << std::endl;
            std::cout << "you won" << std::endl;
            }
        }else if (x == 1){
            if(computer == 0){
            std::cout << "computer : rock" << std::endl;
            std::cout << "you : paper" << std::endl;
            std::cout << "you won" << std::endl;
            }
            else if(computer == 2){
            std::cout << "computer : scissors" << std::endl;
            std::cout << "you : paper" << std::endl;
            std::cout << "you lost" << std::endl;
            }
        } else {
            if(computer == 0){
            std::cout << "computer : rock" << std::endl;
            std::cout << "you : scissors" << std::endl;
            std::cout << "you lost" << std::endl;
            }
            else if(computer == 1){
            std::cout << "computer : paper" << std::endl;
            std::cout << "you : scissors" << std::endl;
            std::cout << "you won" << std::endl;
            }
        }
        */
        //}
    }
   return 0;
}