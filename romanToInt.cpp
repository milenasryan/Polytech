#include <iostream>
#include <map>
#include <string>
#include <stdexcept>

int RomanToInteger(const std::string& rom) {
    std::map<char, int> nums;
    nums['I'] = 1;
    nums['V'] = 5;
    nums['X'] = 10;
    nums['L'] = 50;
    nums['C'] = 100;
    nums['D'] = 500;
    nums['M'] = 1000;

    int res = 0;

    for (int i = 0; i < rom.size(); ++i) {
        if (i < rom.size() - 1 && nums[rom[i]] < nums[rom[i + 1]]) {
            res -= nums[rom[i]];
        } else {
            res += nums[rom[i]];
        }
    }

    return res;
}

int main() {
    std::string rom;
    std::cout << "Enter your number in Roman numerals system: ";
    std::cin >> rom;

    try {
        for (char& c : rom) {
            c = std::toupper(c);
        }

        int result = RomanToInteger(rom);
        std::cout << "The number is: " << result << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}

