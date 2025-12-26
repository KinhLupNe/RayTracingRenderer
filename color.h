#ifndef COLOR_H
#define COLOR_H

#include "vec3.h"

#include <iostream>
#include <ostream>

using color = vec3;

void write_color(std::ostream &oss, const color &pixel_color)
{
  auto r = pixel_color.x();
  auto g = pixel_color.y();
  auto b = pixel_color.z();

  // Trans 0 1 to 0 255
  int rbyte = int(255.999 * r);
  int gbyte = int(255.999 * g);
  int bbyte = int(255.999 * b);

  // write out pixel_color

  oss << rbyte << ' ' << gbyte << ' ' << bbyte << '\n';
}

#endif // !COLOR_H
