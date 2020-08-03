#include <iostream>
#include <string>
#include <sstream>

int main() {
    // Init helper variable to get a pointer
    void* helper_variable;

    // Store pointer address inside string stream to stringify it
    std::stringstream string_stream;
    string_stream << helper_variable;

    // Store 8th changeable (hex) digit of pointer into string stream
    int random_hex_digit = std::stoi(string_stream.str().substr(10, 1), nullptr, 16);
    string_stream.str(std::string());
    string_stream << random_hex_digit;

    // Parse hex value into decimal
    int random_number;
    string_stream >> std::hex >> random_number;

    // Use random number to create output
    std::string result = (random_number % 2) ? "Heads" : "Tails";
    std::cout << result << std::endl;

    return 0;
}
