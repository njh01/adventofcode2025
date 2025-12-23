#include <fstream>
#include <iostream>

int password() {
    int num_zeros = 0;
    std::ifstream file("day1_input.txt");
    std::string current_line, direction, number;
    while (std::getline(file, current_line)) {
        direction = current_line[0];
        number    = std::stoi(current_line.substr(1,current_line.size()));
    }
    return num_zeros;
}