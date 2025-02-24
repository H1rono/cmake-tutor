#include "MathFunctions.h"

#ifdef USE_MYMATH

    #include "mysqrt.h"

namespace mathfunctions {

double sqrt(double x) {
    return detail::mysqrt(x);
}

}

#else // USE_MYMATH

    #include <cmath>

namespace mathfunctions {

double sqrt(double x) {
    return std::sqrt(x);
}

}

#endif // USE_MYMATH
