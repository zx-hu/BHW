//Rock Paper Scissors
    
#include <iostream>
#include <vector>
#include <cstdlib> //for srand
#include <algorithm> //for find
#include <cctype> //for tolower

int main() {
    srand(time(0)); //for CPU generation
    std::cout << "Welcome to Rock Paper Scissors" << std::endl;
    std::cout << "Please pick \"Rock\", \"Paper\", \"Scissors\", or \"1, \"2, \"3 respectively. Type anything else to quit: ";
    
    std::string input;
    std::cin >> input;
    
    //change input to lowercase
    for (char& c : input){
        c = tolower(c);
    }
    
    std::vector<std::string> inputs = {"rock", "r", "paper", "p", "scissors", "s", "1", "2", "3"};
    while(std::find(inputs.begin(), inputs.end(), input) != inputs.end()){
        //convert user input to an int
        int userChoice;
        if(input == "rock" || input == "r" || input == "1"){
            userChoice = 1;
        }else if(input == "paper" || input == "p" || input == "2"){
            userChoice = 2;
        }else{
            userChoice = 3;
        }
        //CPU random number between 1 and 3
        int CPUchoice = rand() % 3 + 1;
        
        if(CPUchoice == 1){
            std::cout << "CPU threw rock" << std::endl;
        }else if(CPUchoice == 2){
            std::cout << "CPU threw paper" << std::endl;
        }else{
            std::cout << "CPU threw scissors" << std::endl;
        }
        
        //tie
        if(userChoice == CPUchoice){
            std::cout << "It's a tie!" << std::endl;
        }
        // user rock CPU scissors || user paper CPU rock || user scissors CPU paper
        else if ((userChoice == 1 && CPUchoice == 3) || (userChoice == 2 && CPUchoice == 1) || (userChoice == 3 && CPUchoice == 2)) {
            std::cout << "You win!" << std::endl;
        } else {
            std::cout << "You lose!" << std::endl;
        }
        
        std::cout << "Go again: ";
        std::cin >> input;
        
        //change input to lowercase
        for (char& c : input){
            c = tolower(c);
        }
        
    }
    std::cout << "Leaving the game";
    return 0;
}
