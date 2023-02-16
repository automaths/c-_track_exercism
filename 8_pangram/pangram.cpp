#include "pangram.h"

namespace pangram {
    bool is_pangram(std::string str){
        char c = 'a';
        while (c <= 'z')
        {
            if (str.find_first_of(c) == std::string::npos && str.find_first_of(c - 32) == std::string::npos)
                return false;
            ++c;
        }
        return true;
    }
}  // namespace pangram
