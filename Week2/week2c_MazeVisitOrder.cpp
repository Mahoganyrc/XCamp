//#include <iostream>
//#include <sstream>
//
//int visitOrder = 1;
//
//void testPossible(int maze[100][100],int N, int M,  int sizeN, int sizeM) {
//    if (!maze[N][M] == 0 ) {
//        return;
//    } else {
//        maze[N][M] = visitOrder;
//        visitOrder++;
//    }
//
//    if (N-1 >= 0) {
//        testPossible(maze, N-1, M, sizeN, sizeM);
//    }
//
//    if (M-1 >= 0) {
//        testPossible(maze, N, M-1, sizeN, sizeM);
//    }
//    if (M+1 < sizeM) {
//        testPossible(maze, N, M+1, sizeN, sizeM);
//    }
//    if (N+1 < sizeN) {
//        testPossible(maze, N+1, M, sizeN, sizeM);
//    }
//
//
//
//
//}
//
//int main () {
//    int maze[100][100];
//    int M;
//    int N;
//    std::string input[100];
//
//    for (int i = 0; std::getline(std::cin, input[i]) && !input[i].empty(); i++) {
//    }
//
//    std::stringstream ss(input[0]);
//    int z = -2;
//    int num;
//    while (ss >> num) {
//        if (z == -2) {
//            N = num;
//            z++;
//        } else if (z == -1) {
//            M = num;
//        }
//    }
//
//    for (int i = 0; i <= N; i++) {
//        std::stringstream ss(input[i+1]);
//        for (int j = 0; j < M; j++) {
//            ss >> maze[i][j];
//        }
//    }
//    if (maze[0][0] == 1) {
//        for (int iii = 0; iii < N; iii++) {
//            for (int jjj = 0; jjj < M; jjj++) {
//                std::cout << "0" << " ";
//            }
//            std::cout << std::endl;
//        }
//        return 0;
//    }
//    testPossible(maze, 0, 0, N, M);
//
//
//
//
//    for (int valueOfN = 0; valueOfN < N; valueOfN++) {
//        for (int valueOfM = 0; valueOfM < M; valueOfM++) {
//
//            if (valueOfN == 0 && valueOfM == 0) {
//                std::cout << "1" << " ";
//                continue;
//            }
//            if(maze[valueOfN][valueOfM] == 1) {
//                std::cout << "0"<< " " ;
//            }else {
//                std::cout << maze[valueOfN][valueOfM] << " ";
//            }
//        }
//        std::cout << std::endl;
//    }
//
//
//
//}