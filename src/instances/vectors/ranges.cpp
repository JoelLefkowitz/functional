#include "ranges.hpp"
#include <cstddef>
#include <numeric>

std::vector<size_t> functional::range(size_t limit) {
    std::vector<size_t> sizes(limit);
    std::iota(sizes.begin(), sizes.end(), 0);
    return sizes;
}
