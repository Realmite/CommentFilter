#include <iostream>

int main() {
    std::string s = "Hello /* not a comment */ world";
    int a = 5; /* это комментарий */
    int b = 6; // этот комментарий должен остаться
    std::cout << s << std::endl;
    return 0;
}