
#include <iostream>
#include <climits>
#include <algorithm>

int main () {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    long long smal = LONG_LONG_MIN;
    long long max = 0;
    long long last = 0;
    long long temp;
    long long n;
    std::cin >> n;

    while (n--) {
        std::cin >> temp;
        if (temp > smal) {
            smal = temp;
        }
        last += temp;
        if (last < 0) {
            last = 0;
        }
        if (max < last) {
            max = last;
        }
    }

    if (max == 0) {
        std::cout << smal << std::endl;
    } else {
        std::cout << max << std::endl;
    }
    return 0;
}
