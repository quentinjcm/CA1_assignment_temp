#include <iostream>
#include <vector>

#include "TriangleMesh.hpp"
#include "Triangle.hpp"
#include "Ray.hpp"
#include "BBox.hpp"

bool TriangleMesh::intersect(const Ray &_ray)
{
  std::cout << "Calculating mesh intetrsection" << std::endl;
  intersectBBox(_ray);
  intersectMesh(_ray);
  return true;
}

void TriangleMesh::printData()
{
  for(Triangle i: m_tris) i.printData();
}

bool TriangleMesh::intersectBBox(const Ray &_ray)
{
  std::cout << "Intersecting bbox" << std::endl;
  return true;
}

bool TriangleMesh::intersectMesh(const Ray &_ray)
{
  std::cout << "Intersecting mesh" << std::endl;
  return true;
}
