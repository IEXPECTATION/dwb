#pragma once

#include "gl/gl_point.hpp"
#include "shape.hpp"
#include <vector>
namespace dwb {
namespace plane {
template <typename T>
class Line : public Shape<T> {
public:
  explicit Line(T startX, T startY, T endX, T endY) {
    points.emplace_back((startX, startY));
    points.emplace_back((endX, endY));
  }

  void Transform(T offsetX, T offsetY) override {
    for (auto point : points) {
      point[0] += offsetX;
      point[1] += offsetY;
    }
  }

  void Scale(T rate) const override { Scale(rate, rate); }

  void Scale(T rateX, T rateY) const override {
    for (auto point : points) {
      point[0] *= rateX;
      point[1] *= rateY;
    }
  }

private:
  const std::vector<gl::GLPoint<T, 2>> points{};
};

} // namespace plane
} // namespace dwb