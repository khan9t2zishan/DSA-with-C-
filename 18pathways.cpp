//Program to find number of unique paths to reach bottom-right corner
// #include<iostream>
// using namespace std;
// int main()
// {


//     return 0;
// }
#include<iostream>
using namespace std;
int Unique_Paths (int row, int col) {
    if (row < 0 or col < 0)
        return 0;
    if (row == 0 || col == 0) {
        return 1;
    }   
    return Unique_Paths (row - 1, col) + Unique_Paths (row, col - 1); 
}

int main() {
    int rows,cols,paths;
    cout<<"Enter the number of rows and column: \n";
    cin>>rows>>cols;
    paths = Unique_Paths(rows-1, cols-1);
    cout << "Grid Rows : " << rows << " Columns : " << cols << " Paths : " << paths << endl;
    // rows = 3, cols = 3;
    // paths = Unique_Paths(rows-1, cols-1);
    // cout << "Grid Rows : " << rows << " Columns : " << cols << " Paths : " << paths << endl;
    return 0;
}
