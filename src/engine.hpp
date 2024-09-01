#pragma once

#include "canvas.hpp"
#include <memory>
#include <vector>
class Engine {
public:
  Engine() : canvas() {}
  void Add(std::shared_ptr<dwb::Canvas> canvas) {
    this->canvas.push_back(canvas);
  }

  std::vector<std::shared_ptr<dwb::Canvas>> canvas;
};