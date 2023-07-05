//#include <iostream>
//
//int inputX;
//int inputY;
//int inputM;
//int output = 0;
//bool visited[6969][6969];
//
//void findPossible (int x, int y, int amount) {
//    if (amount > inputM || visited[x][y] ) {
//        return;
//    }
//    if (amount > output) {
//        output = amount;
//    }
//    visited[x][y] = true;
//    findPossible(x+1,y,amount+inputX);
//    findPossible(x,y+1,amount+inputY);
//
//
//}
//
//int main () {
//
//    std::cin >> inputX >> inputY >> inputM;
//    findPossible(0,0,0);
//    std::cout << output << std::endl;
//
//}