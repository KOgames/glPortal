#ifndef ENTITY_HPP
#define ENTITY_HPP

#include "Mesh.hpp"
#include "Texture.hpp"
#include <util/math/Vector3f.hpp>

namespace glPortal {

class Entity {
public:
  Entity() :
      position(0, 0, 0), rotation(0, 0, 0), scale(1, 1, 1) {
  }
  Mesh mesh;
  Texture texture;

  Vector3f position;
  Vector3f rotation;
  Vector3f scale;
};

} /* namespace glPortal */

#endif /* ENTITY_HPP */
