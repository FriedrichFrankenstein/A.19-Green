#include <iostream>
#include <ctime>
#include <string>
#include <fstream>
#include <Windows.h>
 
const int A = 8;
const int B = A * A;
 
using namespace std;
 
class Sudoku {
private:
    int mass[A][A], checker[B], stov, lin;
public:
    void Input() {
        int a = 0;
 
        ifstream file_input("Input.txt");
 
        if (file_input.is_open()) {
            
            while (!file_input.eof()) {
                file_input >> stov;
 
                file_input >> lin;
                file_input >> mass[lin][stov];
 
                checker[a] = lin;
                checker[a + 1] = stov;
 
                a += 2;
            }
 
            file_input.close();
            cout << endl << "?????????? ? ?????..." << endl;
        }
        else {
        //    cout << "\n??????? ??????????, ???? ?? ????????!\n";
 
            cin.get();
            exit(EXIT_FAILURE);
        }
    }
 
    void Do() {
        for (int a = 0; a < A; a++) {
            for (int b = 0; b < A; b++) {
                if (mass[a][b] < 0) {
                    mass[a][b] = 1;
                }
                for (int c = 0; c < B; c += 2) {
                    if (!(a == checker[c] && b == checker[c+1]))
                        Obrah(a, b);
                }
            }
        }
 
    }
 
    void Obrah(int a, int b) {
        for (int trying = 0; trying < B; trying++) {
            for (int c = 0; c < A; c++) {
                if ((mass[a][b] == mass[a][c] && c != b) || (mass[a][b] == mass[c][b] && c != a))
                    mass[a][b] += 1;
                if (mass[a][b] > 8) {
                    mass[a][b] = 1;
                    c = 0;
                }
            }
        }
    }
 
    void Output() {
        ofstream txt("Result.txt");
 
        cout << "\n????????? ??????:\n\n";
        txt << "\n????????? ??????:\n\n";
 
        for (int a = 0; a < A; a++) {
            for (int b = 0; b < A; b++) {
                cout << "\t" << mass[a][b];
                txt << "\t" << mass[a][b];
            }
            cout << "\n\n";
            txt << "\n\n";
        }
        txt.close();
        cout << "\n????????? ?????? ????????? ? ????";
    }
};
 
class Time {
private:
    int time_begin, time_end, time;
public:
    Time() {};
 
    void Start() {
        time_begin = clock();
    }
 
    void End() {
        time_end = clock();
        time = time_end - time_begin;
 
        cout << endl << endl << "??? ????????? ????????: " << time << " ???." << endl;
    }
 
    ~Time() {};
};
 
int main() {
    system("color f0");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
 
    srand(time(NULL));
 
    Sudoku sud;
    Time ti;
 
    sud.Input();
    ti.Start();
 
    sud.Do();
 
    sud.Output();
    ti.End();
 
    cin.get();
    return 0;
}
