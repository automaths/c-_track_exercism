#include "raindrops.h"

namespace raindrops {
    std::string convert(int n) {
        std::string str;
        if (!(n % 3))
            str.append("Pling");
        if (!(n % 5))
            str.append("Plang");
        if (!(n % 7))
            str.append("Plong");
        if (str.size() == 0)
            str = std::to_string(n);
        return (str);
    }
}  // namespace raindrops
