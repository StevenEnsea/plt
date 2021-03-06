// Generated by dia2code
#ifndef RENDER__STATELAYER__H
#define RENDER__STATELAYER__H

#include <vector>
#include <SFML/Graphics.hpp>

namespace render {
  class TileSet;
  class Layer;
};
namespace state {
  class State;
  class IObserver;
}

#include "TileSet.h"
#include "Layer.h"
#include "state/IObserver.h"
#include "state/State.h"

namespace render {

  /// class StateLayer - 
  class StateLayer : public state::IObserver {
    // Associations
    // Attributes
  protected:
    std::vector<TileSet> tilesets;
    std::vector<Layer> layers;
    int tileSize;
    sf::RenderWindow window;
    // Operations
  public:
    StateLayer ();
    std::vector<TileSet>& getTilesets ();
    std::vector<Layer>& getLayers ();
    void initLayers (state::State& state, int tileSize = 30);
    void displayLayers (state::State& state);
    void stateChanged (state::State& state);
    void draw (sf::RenderWindow& window);
    sf::RenderWindow& getWindow ();
    void initWindow (state::State& state);
    // Setters and Getters
    void setTilesets(const std::vector<TileSet>& tilesets);
    void setLayers(const std::vector<Layer>& layers);
    int getTileSize() const;
    void setTileSize(int tileSize);
    void setWindow(const sf::RenderWindow& window);
  };

};

#endif
