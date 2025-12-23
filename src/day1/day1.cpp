#include <fstream>

int password() {
    int starting_number = 50;
    int num_zeros = 0;
    std::ifstream file("day1/day1_input.txt");
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

int password2() {
    int starting_number = 50;
    int num_zeros = 0;
    std::ifstream file("day1/day1_input.txt");
    std::string current_line, direction;
    int number, check;
    while (std::getline(file, current_line)) {
        direction = current_line[0];
        number    = std::stoi(current_line.substr(1,current_line.size()));
        int i = 0;
        while (i < number) {
            if (direction == "L") {
                starting_number = (starting_number - 1) % 100;
            } else {
                starting_number = (starting_number + 1) % 100;
            }
            if (starting_number == 0) {
                num_zeros++;
            }
            i++;
        }
    }
    return num_zeros;
}
