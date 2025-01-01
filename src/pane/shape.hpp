#pragma once

#include <functional>
namespace dwb {
namespace plane {
template <typename T>
class Shape {
  virtual void Transform(T offsetX, T offsetY) = 0;
  virtual void Scale(T rate) = 0;
  virtual void Scale(T rateX, T rateY) = 0;
};

} // namespace plane
} // namespace dwb