// Generated by dia2code
#ifndef RENDER__LAYER__H
#define RENDER__LAYER__H

#include <SFML/Graphics.hpp>

namespace sf {
  class Texture;
  class VertexArray;
};
namespace state {
  class State;
};
namespace sf {
  class Drawable;
  class Transformable;
}


namespace render {

  /// class Layer - 
  class Layer : public sf::Drawable, public sf::Transformable {
    // Attributes
  private:
    sf::Texture texture;
    sf::VertexArray quads;
    // Operations
  public:
    bool loadField (state::State& stateLayer, sf::Texture& textureTileset, sf::Vector2u textSize, unsigned int width, unsigned int  height, int tileSize);
    bool loadFieldEffect (state::State& stateLayer, sf::Texture& textureTileset, sf::Vector2u textSize, unsigned int width, unsigned int height, int tileSize, int mode);
    bool loadPlayer (state::State& stateLayer, sf::Texture& textureTileset, sf::Vector2u textSize, unsigned int width, unsigned int height, int tileSize);
    bool loadPlayerEffect (state::State& stateLayer, sf::Texture& textureTileset, sf::Vector2u textSize, unsigned int width, unsigned int height, int tileSize);
    bool loadCursor (state::State& stateLayer, sf::Texture& textureTileset, sf::Vector2u textSize, unsigned int width, unsigned int height, int tileSize);
    bool loadInfos (state::State& stateLayer, sf::Texture& textureTileset, sf::Vector2u textSize, unsigned int width, unsigned int height, int tileSize);
    bool loadInfosBack (state::State& stateLayer, sf::Texture& textureTileset, sf::Vector2u textSize, unsigned int width, unsigned int height, int tileSize);
    virtual void  draw (sf::RenderTarget& target, sf::RenderStates states) const;
    sf::VertexArray getQuads ();
    // Setters and Getters
  };

};

#endif
