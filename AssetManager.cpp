#include "AssetManager.h"

namespace KaCa
{
    void AssetManager::LoadTexture( std::string name, std::string fileName )
    {
        sf::Texture textu;

        if( textu.loadFromFile( fileName ) )
        {
            this->_textures[name] = textu;
        }
    }

    sf::Texture &AssetManager::GetTexture( std::string name )
    {
        return this->_textures.at( name );
    }

    void AssetManager::LoadFont( std::string name, std::string fileName )
    {
        sf::Font fon;

        if( fon.loadFromFile( fileName ) )
        {
            this->_fonts[name] = fon;
        }
    }

    sf::Font &AssetManager::GetFont( std::string name )
    {
        return this->_fonts.at( name );
    }
}
