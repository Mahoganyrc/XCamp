#include <iostream>

struct Coord {
    int x;
    int y;
};
int n;
int m;
int counter=0;
int board[400][400];
bool visited[400][400];
int memo[400][400];
int max_size=0;
void findPossible (int x, int y, int step) {
    if ( x < 0 || y < 0 || x >= n || y >= m ) {
        return;
    }

    if ( memo[x][y]==100 ) {
       // return;
    }

    if (visited[x][y]) {
        return;
    }

    if (step >= board[x][y] && board[x][y] != -1 ) {
       return;
    }
    if (step > max_size ) {
        return;
    }
    visited[x][y] = true;

    if (board[x][y] == -1 || board[x][y] > step) {
        board[x][y] = step;
    }
    counter++;
//    std::cout <<counter<< std::endl;
//    for (int ii = 0; ii < n; ii++) {
//        for (int jj = 0; jj < m; jj++) {
//            std::cout << board[ii][jj] << " ";
//        }
//        std::cout << std::endl;
//    }
//    std::cout << std::endl;



   // std::cout << "horse on [" << x << "][" << y << "]" << " step:" << y <<std::endl;
//    findPossible(x+2,y+1,step+1);
//    findPossible(x+2,y-1,step+1);
//    findPossible(x+1,y+2,step+1);
//    findPossible(x+1,y-2,step+1);
//    findPossible(x-2,y+1,step+1);
//    findPossible(x-2,y-1,step+1);
//    findPossible(x-1,y+2,step+1);
//    findPossible(x-1,y-2,step+1);


    findPossible(x-2,y-1,step+1);
    findPossible(x-1,y-2,step+1);
    findPossible(x+1,y-2,step+1);
    findPossible(x+2,y-1,step+1);
    findPossible(x+2,y+1,step+1);
    findPossible(x+1,y+2,step+1);
    findPossible(x-1,y+2,step+1);
    findPossible(x-2,y+1,step+1);



    visited[x][y] = false;
    memo[x][y] = 100;



}
int main () {
    Coord start;
    std::cin >> n >> m >> start.x >> start.y;
    max_size = (std::max(m,n)+std::min(m,n)/2)+1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            board[i][j] = -1;
        }
    }

    findPossible (start.x-1,start.y-1,0);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cout << board[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout <<counter<< std::endl;

}
