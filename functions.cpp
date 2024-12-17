#include <cmath>
#include <iostream>

void Entermatrix(int matrix[100][100], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cin >> matrix[i][j];
        }
    }
}

bool is_prime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    for (int i = 2; i < ceil(sqrt(n)) + 1; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
int max_prime(int matrix[100][100], int n) {
    int max = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (is_prime(matrix[i][j]) & max < matrix[i][j]) max = matrix[i][j];
        }
    }
    return max;
}

void print_matrix(int matrix[100][100], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int similarStr(int matrix[100][100], int n) {
    bool same = true;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = 0; k < n; k++) {
                if (!same) break;
                if (matrix[i][k] != matrix[j][k]) same = false;
            }
            if (same) return true;
            same = true;
        }
    }
    return false;
}

void min_elem_in_column(int matrix[100][100], int n, int value) {
    for (int i = 0; i < n; i++) {
        int minimal = 1000000, index;
        for (int j = 0; j < n; j++) {
            if (matrix[j][i] < minimal) {
                minimal = matrix[j][i];
            }
        }
        for (int j = 0; j < n; j++) {
            if (matrix[j][i] == minimal) {
                matrix[j][i] = value;
            }
        }
    }
}

