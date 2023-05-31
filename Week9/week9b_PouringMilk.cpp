#include <iostream>
#include <sstream>
#include <vector>


int sizeA;
int sizeB;
int sizeC;
int visited[20][20][20];


std::vector<int> solutions;

void findPossibleSolutions (int bucketA, int bucketB, int bucketC) {

    if (visited[bucketA][bucketB][bucketC] == true) {
        return;
    }

    if (sizeC != (bucketA + bucketB + bucketC) ) {
       // return;
    }
    if (bucketA == 0 ) {
        solutions.push_back(bucketC);
    }



    visited[bucketA][bucketB][bucketC] = true;
    std::cout  << "#1 " << bucketA << " " << bucketB << " " << bucketC << std::endl;

  // 10 to 8
    if (bucketC >= bucketA) {
        std::cout  << "#1 " << bucketA << " " << bucketB << " " << bucketC;
        std::cout << " ->" << sizeA << " " << bucketB << " " << bucketC - bucketA << std::endl;
        findPossibleSolutions(sizeA, bucketB, bucketC - bucketA);
    } else if (bucketC < bucketA) {
        std::cout  << "#2 " << bucketA << " " << bucketB << " " << bucketC;
        std::cout << " ->" << bucketA-bucketC << " " << bucketB << " " << 0 << std::endl;
        findPossibleSolutions(bucketA - bucketC, bucketB, 0);
    }

    if (bucketC >= bucketB) {
        std::cout  << "#3 " << bucketA << " " << bucketB << " " << bucketC;
        std::cout << " ->" << bucketA << " " << sizeB << " " << bucketC - bucketB << std::endl;
        findPossibleSolutions(bucketA, sizeB, bucketC - bucketB);
    } else if (bucketC < bucketB) {
        std::cout  << "#4  " << bucketA << " " << bucketB << " " << bucketC;
        std::cout << " ->" << bucketA << " " << bucketB- bucketC << " " << 0 << std::endl;
        findPossibleSolutions(bucketA, bucketB - bucketC, 0);
    }




    if (bucketB >= bucketA) {
        std::cout  << "#5 " << bucketA << " " << bucketB << " " << bucketC;
        std::cout << " ->" << sizeA << " " << bucketB-bucketA << " " << bucketC << std::endl;
        findPossibleSolutions(sizeA, bucketB - bucketA, bucketC);
    } else if (bucketB < bucketA) {
        std::cout  << "#6 " << bucketA << " " << bucketB << " " << bucketC;
        std::cout << " ->" << bucketA-bucketB << " " << 0 << " " << bucketC << std::endl;
        findPossibleSolutions(bucketA - bucketB, 0, bucketC);
    }

    if (bucketB >= bucketC) {
        std::cout  << "#7 " << bucketA << " " << bucketB << " " << bucketC;
        std::cout << " ->" << bucketA << " " << bucketB-bucketC << " " << sizeC8 9 << std::endl;
        findPossibleSolutions(bucketA, bucketB - bucketC, sizeC);
    } else if (bucketB < bucketC) {
        std::cout  << "#8 " << bucketA << " " << bucketB << " " << bucketC;
        std::cout << " ->" << bucketA << bucketB - bucketC << 0 << std::endl;
        findPossibleSolutions(bucketA, 0, bucketB + bucketC);
    }

    if (bucketA >= bucketB) {
        std::cout  << "#9 " << bucketA << " " << bucketB << " " << bucketC;
        std::cout << " ->" << bucketA - bucketB << sizeB << bucketC << std::endl;
        findPossibleSolutions(bucketA - bucketB, sizeB, bucketC);
    } else if (bucketA < bucketB) {
        std::cout  << "#10 " << bucketA << " " << bucketB << " " << bucketC;
        std::cout << " ->" << 0 << bucketA + bucketB << bucketC << std::endl;
        findPossibleSolutions(0, bucketA + bucketB, bucketC);
    }

    if (bucketA >= bucketC) {
        std::cout  << "#11 " << bucketA << " " << bucketB << " " << bucketC;
        std::cout << " ->" << bucketA - bucketC << bucketB << sizeC << std::endl;
        findPossibleSolutions(bucketA - bucketC, bucketB, sizeC);
    } else if (bucketA < bucketC) {
        std::cout  << "#12 " << bucketA << " " << bucketB << " " << bucketC;
        std::cout << " ->" << 0 << bucketB << bucketA + bucketC << std::endl;
        findPossibleSolutions(0, bucketB, bucketA + bucketC);
    }

    //visited [bucketA][bucketB][bucketC] = false;



}


int main () {
    std::cin >> sizeA >> sizeB >> sizeC;

    findPossibleSolutions(0,0,sizeC);

    for (int i = 0; i < solutions.size(); i++) {
        std::cout << solutions[i] << " ";
    }
    std::cout << std::endl;
    std::cout << sizeA << " " << sizeB << " " << sizeC << std::endl;
}
