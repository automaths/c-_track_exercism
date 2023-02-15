#include "grains.h"

namespace grains {
    unsigned long long square(int rank) {
        if (rank == 1) {
            return 1;
        } else {
            return square(rank - 1) * 2;   
        }
    }
    unsigned long long total() {
        unsigned long long sum = 0;
        for (int i = 1; i <= 64; i++) {
            sum += square(i);
        }
        return sum;
    }
}  // namespace grains
