#include <iostream>
#include <vector>
#include <random> 
#include <map>    

using namespace std;

int main() {
    const int ROWS = 4;
    const int COLS = 5;
    int arr[ROWS][COLS];

    random_device rd;
    mt19937 gen(rd()); 
    uniform_int_distribution<> distrib(0, 15); 

    cout << "�������� ������:" << endl;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            arr[i][j] = distrib(gen);
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    map<int, int> counts; 
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            counts[arr[i][j]]++; 
        }
    }
    cout << "\n������������� ��������:" << endl;
    bool foundDuplicates = false;
    for (auto const& [number, count] : counts) {
        if (count > 1) {
            cout << "����� " << number << " ����������� " << count << " ���(�)." << endl;
            foundDuplicates = true;
        }
    }

    if (!foundDuplicates) {
        cout << "� ������� ��� ������������� ���������." << endl;
    }

    return 0;
}