#include <iostream>

int main() {
    std::string s = "Hello /* not a comment */ world";
    int a = 5; /* ��� ����������� */
    int b = 6; // ���� ����������� ������ ��������
    std::cout << s << std::endl;
    return 0;
}