#pragma once

#include <cassert>
#include <cstddef>
namespace dwb {
namespace gl {
template <typename T, std::size_t length>
class GLPoint {
public:
  T &operator[](std::size_t index) const {
    assert(index < length);
    return points[index];
  }

private:
  const T points[length];
};

template <typename T, typename... TArgs>
GLPoint(T, TArgs... args) -> GLPoint<T, sizeof...(TArgs) + 1>;
} // namespace gl
} // namespace dwb