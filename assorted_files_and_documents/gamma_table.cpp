#include <iostream>
#include <iomanip>
#include <cmath>

const int MAX = 255;
const double g = 2.5;
int color_correct(int pre_color) {
    const double val = double(pre_color) / MAX;
    const double corrected = pow(val, g);
    return int(MAX*corrected);
}

int main() {
    for(int i = 0; i <= 255; i++) {
        std::cout << "8'd" << std::left << std::setw(7)
                  << color_correct(i) << ", ";
        if(i % 8 == 7)
            std::cout << "\n";
    }
}
