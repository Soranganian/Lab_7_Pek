#include "functions.hpp"
#include <iostream>

using namespace std;

int main()
{
    int matrix[100][100] = {0};
    int n;
    cout << "Enter n and matrix elements" << endl;
    cin >> n;
    Entermatrix(matrix, n);
    
    if (similarStr) {
        min_elem_in_column(matrix, n, max_prime(matrix, n));
        cout << endl;
        print_matrix(matrix, n);
    }

    return 0;
} 