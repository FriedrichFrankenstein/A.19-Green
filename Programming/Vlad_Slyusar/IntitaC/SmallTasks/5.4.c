#include <iostream>

int main()

{
    const int MAX = 80; // ��������� ��������� - ����������� ������� �����
    char str[MAX];
    cout << "Input string: "; // �������� �������
    cin >> str; // �������� ������ �� �������� (� ���� - ��������� Enter)
    cout << "You�ve input: " << str << endl; // ������� �������� ����� �� �����
    return 0;
}
