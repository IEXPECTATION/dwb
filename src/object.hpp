
#include <initializer_list>
#include <stdexcept>

namespace dwb {

class Object {
public:
  virtual ~Object() = 0;
};

template <std::size_t dimension, typename T = float>
class Point : public Object {
public:
  Point() : coordicator{} {}
  Point(std::initializer_list<T> initializer_list);

  T &operator[](size_t index) {
    if (index > dimension) {
      throw std::out_of_range("");
    }
    return coordicator[index];
  }

  T &operator[](size_t index) const {
    if (index > dimension) {
      throw std::out_of_range("");
    }
    return coordicator[index];
  }

  ~Point() override {}

private:
  T coordicator[dimension];
};

template <std::size_t dimension, typename T = float>
class Line : public Object {
public:
  Line(Point<dimension, T> begin, Point<dimension, T> end) {
    this->Begin = begin;
    this->End = end;
  }

  ~Line() override {}

  Point<dimension, T> Begin;
  Point<dimension, T> End;
};

template <std::size_t dimension, typename T = float>
class Triangle : public Object {
public:
  Triangle(Point<dimension, T> p1, Point<dimension, T> p2,
           Point<dimension, T> p3)
      : P1(p1), P2(p2), P3(p3) {}

  ~Triangle() override {}

  Point<dimension, T> P1;
  Point<dimension, T> P2;
  Point<dimension, T> P3;
};

} // namespace dwb