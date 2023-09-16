#include <iostream>
#include <cmath>
char edges[1069][1069];
int main () {
    int n;
    std::cin >> n;
    double zz = sqrt(2);
    char x;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cin >> x;
            edges[i][j] = x;
        }
    }

    for (int i = 0; i < n; i++) {
        int output = 0;
        for (int j = i; j < n; j++) {
            if (edges[j][i] == '1') {
                output++;
            }
            if (edges[i][j] == '1') {
                output++;
            }
        }
        std::cout << output/2 << " ";
    }
    std::cout << std::endl;
}