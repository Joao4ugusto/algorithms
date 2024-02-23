#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> generate(int numRows) {
    vector<vector<int>> result;
    
    if (numRows == 0) {
        return result;
    }
    
    result.push_back(vector<int>{1});
    
    for (int i = 1; i < numRows; i++) {
        vector<int> newRow;
        vector<int> prevRow = result[i - 1];
        
        newRow.push_back(1);
        
        for (int j = 1; j < i; j++) {
            newRow.push_back(prevRow[j - 1] + prevRow[j]);
        }
        
        newRow.push_back(1); 
        
        result.push_back(newRow);
    }
    
    return result;
}

int main() {
    int numRows;
    cout << "Enter the number of rows desired: ";
    cin >> numRows;
    
    vector<vector<int>> result = generate(numRows);
    
    cout << "Pascal's Triangle with " << numRows << " rows:" << endl;
    for (vector<int> row : result) {
        cout << "[";
        for (int num : row) {
            cout << num << ",";
        }
        cout << "]" << endl;
    }
    
    return 0;
}
