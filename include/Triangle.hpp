#ifndef __TRIANGLE_HPP__
#define __TRIANGLE_HPP__

#include <ngl/Vec3.h>
#include <ngl/Util.h>
#include "Ray.hpp"

//needs to implement calcN() and calcD()
//need an intersection method

class Triangle
{
public:
  Triangle(ngl::Vec3 _v1, ngl::Vec3 _v2, ngl::Vec3 _v3,
           ngl::Vec3 _n1, ngl::Vec3 _n2, ngl::Vec3 _n3);
  bool Intersect(const Ray &_ray);
  void printData();

private:
  const ngl::Vec3 m_v1;
  const ngl::Vec3 m_v2;
  const ngl::Vec3 m_v3;
  const ngl::Vec3 m_n1;
  const ngl::Vec3 m_n2;
  const ngl::Vec3 m_n3;
  ngl::Vec3 m_n;
  ngl::Vec3 m_d;

  void calcN();
  void calcD();

};


#endif //__TRIANGLE_HPP__
