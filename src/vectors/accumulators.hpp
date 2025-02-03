#ifndef FUNKY_VECTORS_ACCUMULATORS_HPP
#define FUNKY_VECTORS_ACCUMULATORS_HPP

#include <vector>

namespace funky {
    // average: std::vector<T> → T
    template <typename T>
    T average(const std::vector<T> &vec);
}

#endif
