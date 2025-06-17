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

    cout << "Исходный массив:" << endl;
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
    cout << "\nПовторяющиеся элементы:" << endl;
    bool foundDuplicates = false;
    for (auto const& [number, count] : counts) {
        if (count > 1) {
            cout << "Число " << number << " повторяется " << count << " раз(а)." << endl;
            foundDuplicates = true;
        }
    }

    if (!foundDuplicates) {
        cout << "В массиве нет повторяющихся элементов." << endl;
    }

    return 0;
}