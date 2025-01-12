//Bubble Sort Algorithm
    
#include <iostream>
#include <vector>

//modifies the input vector
void BubbleSort(std::vector<int>& numbers){
    for(int i = 0; i < numbers.size(); i++){
        bool swapped = false;
        for(int j=0; j < numbers.size()-i-1; j++){
            if(numbers[j] > numbers[j+1]){
                int temp = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = temp;
                swapped = true;
            }
        }
        if(!swapped){
            break; //no swaps = vector is sorted
        }
    }
}



int main() {
    //Example
    std::vector<int> numbers = {5, 4, 7, 2, 11, 0};
    
    std::cout << "Unsorted Array: ";
    for (auto n : numbers){
        std::cout << n << " ";
    }
    std::cout << std::endl;
    
    BubbleSort(numbers);
    
    std::cout << "Sorted Array: ";
    for (auto n : numbers){
        std::cout << n << " ";
    }
    std::cout << std::endl;
    
    //User Input
    std::cout << "Input your own numbers, non-number to exit: ";
    int value;
    std::vector<int> userNumbers;
    
    while(true){
        std::cin >> value;
        if(std::cin.fail()){
            break;
        }
        userNumbers.push_back(value);
    }
    
    std::cout << "Unsorted Array: ";
    for (auto n : userNumbers){
        std::cout << n << " ";
    }
    std::cout << std::endl;
    
    BubbleSort(userNumbers);
    
    std::cout << "Sorted Array: ";
    for (auto n : userNumbers){
        std::cout << n << " ";
    }
    std::cout << std::endl;
    
}
