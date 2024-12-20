#pragma once

#include "biquad.h"
#include <cmath>
#include <functional>

#include <concepts>

template <std::floating_point T>
constexpr auto pi =
    static_cast<T>(3.1415926535897932384626433832795);

template <std::floating_point T>
constexpr auto sqrt2 = static_cast<T>(2.0 * 0.707106781186547524401);

template <std::floating_point T>
constexpr auto sqrt2over2 = static_cast<T>(0.707106781186547524401);
