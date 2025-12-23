#include <fstream>

int password() {
    int starting_number = 50;
    int num_zeros = 0;
    std::ifstream file("day1_input.txt");
    std::string current_line, direction;
    int number;
    while (std::getline(file, current_line)) {
        direction = current_line[0];
        number    = std::stoi(current_line.substr(1,current_line.size()));
        if (direction == "L") {
            starting_number = starting_number - number;
        }
        if (direction == "R") {
            starting_number = starting_number + number;
        }
        if (starting_number % 100 == 0) {
            num_zeros++;
        }
    }
    return num_zeros;
}