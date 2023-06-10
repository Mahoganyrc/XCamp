//#include <iostream>
//#include <sstream>
//#include <vector>
//
//
//int sizeA;
//int sizeB;
//int sizeC;
//int visited[20][20][20];
//
//
//std::vector<int> solutions;
//
//void findPossibleSolutions (int bucketA, int bucketB, int bucketC) {
//
//    if (visited[bucketA][bucketB][bucketC] == true) {
//        return;
//    }
//
//    if (sizeC != (bucketA + bucketB + bucketC) ) {
//       // return;
//    }
//    if (bucketA == 0 ) {
//        solutions.push_back(bucketC);
//    }
//
//
//
//    visited[bucketA][bucketB][bucketC] = true;
//
//
//    /// Pouring from C to A
//    if (bucketC + bucketA <= sizeA) {
//        findPossibleSolutions(bucketC + bucketA, bucketB, 0);
//
//    } else if (bucketC + bucketA > sizeA) {
//        findPossibleSolutions(sizeA, bucketB, bucketC - (sizeA - bucketA));
//    }
//
//    /// Pouring from C to B
//    if (bucketC + bucketB <= sizeB) {
//        findPossibleSolutions(bucketA, bucketC + bucketB, 0);
//
//    } else if (bucketC + bucketB > sizeB) {
//        findPossibleSolutions(bucketA, sizeB, bucketC - (sizeB - bucketB));
//
//    }
//
//    /// Pouring from B to A
//    if (bucketB + bucketA <= sizeA) {
//        findPossibleSolutions(bucketA + bucketB, 0, bucketC);
//
//    } else if (bucketB + bucketA > sizeA) {
//        findPossibleSolutions(sizeA, bucketB - (sizeA - bucketA), bucketC);
//
//    }
//
//    /// Pouring from A to B
//    if (bucketA + bucketB <= sizeB) {
//        findPossibleSolutions(0, bucketA+bucketB, bucketC);
//
//    } else if (bucketA + bucketB > sizeB) {
//        findPossibleSolutions(bucketA - (sizeB-bucketB), sizeB, bucketC);
//
//    }
//
//    /// Pouring from A to C
//    if (bucketA + bucketC <= sizeC) {
//        findPossibleSolutions(0, bucketB, bucketC+bucketA);
//
//    } else if (bucketA + bucketC > sizeC) {
//        findPossibleSolutions(bucketA - (sizeC - bucketC), bucketB, sizeC);
//
//    }
//
//    /// Pouring from B to C
//    if (bucketB + bucketC <= sizeC) {
//        findPossibleSolutions(bucketA, 0, bucketC + bucketB);
//
//    } else if (bucketA < bucketC) {
//        findPossibleSolutions(bucketA, bucketB - (sizeC - bucketC), sizeC);
//
//    }
//
//    //visited [bucketA][bucketB][bucketC] = false;
//
//
//
//}
//
//
//int main () {
//    std::cin >> sizeA >> sizeB >> sizeC;
//
//    findPossibleSolutions(0,0,sizeC);
//
//    for (int i = 0; i < solutions.size(); i++) {
//        for (int j = i + 1; j < solutions.size(); j++) {
//            if (solutions[i] > solutions[j]) {
//                int temp = solutions[i];
//                solutions[i] = solutions[j];
//                solutions[j] = temp;
//            }
//        }
//    }
//    for (int i = 0; i < solutions.size(); i++) {
//        std::cout << solutions[i] << " ";
//    }
//
//}
