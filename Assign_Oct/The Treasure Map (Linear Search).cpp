#include <iostream>
using namespace std;
int main() {
    int n, m;
    std::cout << "Enter Order of Matrix: ";
    cin >> n >> m; 
    int matrix[n][m];
    std::cout << "Enter Matrix Elements: " << std::endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    int target;
    std::cout << "Enter Target Element: ";
    cin >> target; 
    bool found = false;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == target) {
                found = true;
                break; 
            }
        }
        if (found) break;
    }
    if (found)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}
