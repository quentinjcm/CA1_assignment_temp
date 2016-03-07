#include <iostream>
#include <ngl/Vec3.h>
#include <ngl/NGLStream.h>

#include "Triangle.hpp"
#include "Ray.hpp"

Triangle::Triangle(ngl::Vec3 _v1, ngl::Vec3 _v2, ngl::Vec3 _v3,
                   ngl::Vec3 _n1, ngl::Vec3 _n2, ngl::Vec3 _n3):
  m_v1(_v1), m_v2(_v2), m_v3(_v3),
  m_n1(_n1), m_n2(_n2), m_n3(_n3)
{
  calcN();
  calcD();
}

bool Triangle::Intersect(const Ray &_ray)
{
  std::cout << "Calculating Intersection" << std::endl;
  return true;
}

void Triangle::printData()
{
  std::cout << "Printing triangle data:\n";
  std::cout << "points:\n";
  std::cout << m_v1 << "\n" << m_v2 << "\n" << m_v3 << std::endl;

  std::cout << "normals:\n";
  std::cout << m_n1 << "\n" << m_n2 << "\n" << m_n3 << std::endl;

  std::cout << "n: " << m_n << std::endl;

  std::cout << "d: " << m_d << std::endl;
 }

void Triangle::calcN()
{
  m_n = ngl::calcNormal(m_v1, m_v2, m_v3);
  m_n.normalize();
}

void Triangle::calcD()
{
  m_d = (m_n.cross(m_v1)) * -1;
  m_d.normalize();
}

