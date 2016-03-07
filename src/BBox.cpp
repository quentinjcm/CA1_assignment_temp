#include <iostream>
#include <ngl/Vec3.h>

#include "BBox.hpp"

BBox::BBox()
{
  ngl::Vec3 temp(0.0, 0.0, 0.0);
  m_pMin = temp;
  m_pMax = temp;
  printData();
}

BBox::BBox(const ngl::Vec3 &_p):
  m_pMin(_p),
  m_pMax(_p)
{
  printData();
}

BBox::BBox(const ngl::Vec3  &_p1, const ngl::Vec3 &_p2)
{

}

void BBox::printData()
{
  std::cout << "Printing BBox\n";
  std::cout << "min: "<< m_pMin.m_x << " " << m_pMin.m_y << " " << m_pMin.m_z << "\n";
  std::cout << "max: "<< m_pMax.m_x << " " << m_pMax.m_y << " " << m_pMax.m_z << "\n";
  std::cout << std::endl;
}
