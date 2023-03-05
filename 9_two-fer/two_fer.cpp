#include "two_fer.h"

namespace two_fer
{
    string two_fer() {
        string ret("One for you, one for me.");
        return ret;
    }
    string two_fer(string name) {
        string ret = "One for " + name + ", one for me.";
        return ret;
    }
} // namespace two_fer

