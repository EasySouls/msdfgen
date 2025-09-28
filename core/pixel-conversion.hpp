
#pragma once

#include "arithmetics.hpp"

namespace msdfgen {

typedef unsigned char byte;

inline byte pixelFloatToByte(const float x) {
    return static_cast<byte>(~static_cast<int>(255.5f - 255.f * clamp(x)));
}

inline float pixelByteToFloat(const byte x) {
    return 1.f/255.f*static_cast<float>(x);
}

}
