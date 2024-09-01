#pragma once
#include "object.hpp"
#include <memory>
#include <vector>

namespace dwb {
class Canvas {
public:
  Canvas() : object() {};
  void Add(std::unique_ptr<Object> object) { this->object.push_back(object); }

  std::vector<std::unique_ptr<Object>> object;
};
} // namespace dwb