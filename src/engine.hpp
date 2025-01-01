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

  void Show() {
    // TODO: Engine should select a canvas to show.
    canvas[0]->Show();
  }

private:
  std::vector<std::shared_ptr<dwb::Canvas>> canvas;
};