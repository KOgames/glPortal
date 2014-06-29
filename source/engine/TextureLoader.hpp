#ifndef TEXTURELOADER_HPP
#define TEXTURELOADER_HPP

#include "Texture.hpp"
#include <map>
#include <string>

namespace glPortal {

class TextureLoader {
public:
  static Texture getTexture(std::string path);
private:
  static Texture uploadTexture(unsigned char* data, int width, int height, int bytes);
  static std::map<std::string, Texture> textureCache;
};

} /* namespace glPortal */

#endif /* TEXTURELOADER_HPP */