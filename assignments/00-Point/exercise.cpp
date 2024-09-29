#include <iostream>
#include "Point.hpp"

int main() 
{
  Point p1;
  Point p2(1,1);

  std::cout << "Distancia entre p1(" << p1.getX() << "," << p1.getY() <<") y p2(" 
  << p2.getX() << "," << p2.getY() << ") es " << p1.distance(p2) << "\n";
}
