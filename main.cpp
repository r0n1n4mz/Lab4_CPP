#include"Official.h"
#include<iostream>
#include<fstream>

void readFile(const std::string& filename){
    std::ifstream file(filename);
    //Checking if file is open
    if (!file.is_open()) {
        std::cerr << "Failed to open the file: " << filename << std::endl;
        return;
    }
    //Reading the file by line and printing its content to the console
    std::string line;
    while (std::getline(file, line)) {
        std::cout << line << std::endl;
    }

    file.close();
}

int main() {
    Official person;
    std::cout<< "Enter official details:" << std::endl;
    std::cin >> person;
    std::cout << "Official details:" << std::endl;
    std::cout << person;
    person.saveTofile("official.txt");
    std::cout<<"Reading from file 'official.txt':" << std::endl;
    readFile("official.txt");

    return 0;
}