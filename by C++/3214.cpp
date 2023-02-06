#include <iostream>

int main() {
    int E, F, C, total_bottles, sodas;
    std::cin >> E >> F >> C;
    total_bottles = E + F;
    sodas = 0;
    while (total_bottles >= C) {
        sodas += total_bottles / C;
        total_bottles = total_bottles / C + total_bottles % C;
    }
    std::cout << sodas << std::endl;
    return 0;
}
