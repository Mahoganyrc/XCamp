//#include <iostream>
//#include <sstream>
//
//void merge(int array[], int left[], int right[], int leftSize, int rightSize) {
//    int i = 0;
//    int l = 0;
//    int r = 0;
//    while (l < leftSize && r < rightSize) {
//        if (left[l] < right[r]) {
//            array[i] = left[l];
//            i++;
//            l++;
//        } else {
//            array[i] = right[r];
//            i++;
//            r++;
//        }
//    }
//    while (l < leftSize) {
//        array[i] = left[l];
//        i++;
//        l++;
//    }
//    while (r < rightSize) {
//        array[i] = right[r];
//        i++;
//        r++;
//    }
//}
//
//void mergeSort(int array[], int arraySize) {
//    if (arraySize <= 1) {
//        return;
//    }
//    int mid = arraySize / 2;
//    int left[mid];
//    int right[arraySize - mid];
//    for (int i = 0; i < mid; i++) {
//        left[i] = array[i];
//    }
//    for (int i = mid; i < arraySize; i++) {
//        right[i - mid] = array[i];
//    }
//    mergeSort(left, mid);
//    mergeSort(right, arraySize - mid);
//    merge(array, left, right, mid, arraySize - mid);
//}
//
//int main() {
//    int size;
//    int array[1000];
//    std::cin >> size;
//    std::string inputString;
//    std::getline(std::cin, inputString);
//    std::getline(std::cin, inputString);
//    std::istringstream is(inputString);
//    for (int i = 0; i < size; i++) {
//        int value;
//        is >> value;
//        array[i] = value;
//    }
//    mergeSort(array, size);
//    for (int j = 0; j < size; j++) {
//        std::cout << array[j] << " ";
//    }
//    return 0;
//}
