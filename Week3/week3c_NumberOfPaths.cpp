#include <iostream>
#include <sstream>

int maze[20][20];
int pathCount = 0;
int size;

void findNumberOfPaths (int x, int y) {
    if (x == (size-1) && y == (size-1)) {
        pathCount++;
        return;
    }
    if (maze[x][y] == 1) {
         return;
    }
    if (maze[x][y] == 2) {

        return;
    }
    if (maze[x][y] == 0) {
        maze[x][y] = 2;
    }

    if (x + 1 < size) {
        findNumberOfPaths(x + 1, y);
    }
    if (y + 1 < size) {
        findNumberOfPaths(x, y + 1);
    }
    if (x - 1 >= 0) {
        findNumberOfPaths(x - 1, y);
    }
    if (y - 1 >= 0) {
        findNumberOfPaths(x, y - 1);
    }
    maze[x][y] = 0;




}

int main () {
    int x = 0;
    int y = 0;

    std::string input[1000];
    int z = -2;

    for (int i = 0; std::getline(std::cin, input[i]) && !input[i].empty(); i++) {

    }
    std::stringstream ss(input[0]);
    int n;
    while (ss >> n) {
        z++;
        if (z == -1) {
            size = n;
        }
    }

    z = 0;
    for (int i = 0; i < size; i++) {
        std::stringstream ss(input[i+1]);
        for (int j = 0; j < size; j++) {
            ss >> maze[i][j];
        }
    }

    findNumberOfPaths(x, y);
    std::cout << pathCount << std::endl;
    return 0;
}