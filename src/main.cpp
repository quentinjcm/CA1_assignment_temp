#include <iostream>
#include <memory>
#include <vector>

#include <ngl/Vec3.h>


#include "TriangleMesh.hpp"
#include "Triangle.hpp"

int main()
{
  ngl::Vec3 v1(1, 1, 0);
  ngl::Vec3 v2(0, 2, 0);
  ngl::Vec3 v3(3, 0, 0);

  ngl::Vec3 o(0, 0, 0);
  ngl::Vec3 d(0, 1, 0);

  Ray ray(o, d);

  Triangle tri = Triangle(v1, v2, v3, v1, v2, v3);
  TriangleMesh mesh;
  mesh.m_tris.push_back(tri);
  mesh.m_tris.push_back(tri);
  mesh.m_tris.push_back(tri);
  mesh.m_tris.push_back(tri);

  mesh.printData();
  mesh.intersect(ray);

  return EXIT_SUCCESS;
}
