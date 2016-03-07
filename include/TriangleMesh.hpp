#ifndef __TRIANGLE_MESH_HPP__
#define __TRIANGLE_MESH_HPP__

#include <iostream>
#include <vector>

#include "Triangle.hpp"
#include "Ray.hpp"
#include "BBox.hpp"

class TriangleMesh
{
public:
  TriangleMesh() = default;
  bool intersect(const Ray &_ray); //also needs a diff geo when implemented
  void printData();

  std::vector<Triangle> m_tris;
  BBox m_meshBound;

private:
  bool intersectBBox(const Ray&_ray);
  bool intersectMesh(const Ray&_ray);
};

#endif //__TRIANGLE_MESH_HPP__
