//MAVI - Unidad 3 Ejercicio 4
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>

using namespace sf;
//Declarar textura y los 8 sprites de plataformas
Texture texture;
Sprite sprite_1;
Sprite sprite_2;
Sprite sprite_3;
Sprite sprite_4;
Sprite sprite_5;
Sprite sprite_6;
Sprite sprite_7;
Sprite sprite_8;

int main() {


	sf::RenderWindow App(sf::VideoMode(800, 600, 32), "Plataformas");

	texture.loadFromFile("Unidad3_Assets/plataforma.jpg");

	float SizeTx = (float)texture.getSize().x;
	float SizeTy = (float)texture.getSize().y;

	sprite_1.setTexture(texture);
	sprite_2.setTexture(texture);
	sprite_3.setTexture(texture);
	sprite_4.setTexture(texture);
	sprite_5.setTexture(texture);
	sprite_6.setTexture(texture);
	sprite_7.setTexture(texture);
	sprite_8.setTexture(texture);

	float escalaX = 0.13f; //Escala en X de los sprites
	float escalaY_1 = 0.2f, escalaY_2 = 0.4f, escalaY_3 = 0.6f, escalaY_4 = 0.8f, escalaY_5 = 1.0f, 
		  escalaY_6 = 1.2f, escalaY_7 = 1.4f;   //Escala en Y de los sprites
	float sizeWindowY = 600.0f;  //Tamaño en eje Y de la pantalla
	
	sprite_1.setScale(escalaX, escalaY_1);
	sprite_2.setScale(escalaX, escalaY_2);
	sprite_3.setScale(escalaX, escalaY_3);
	sprite_4.setScale(escalaX, escalaY_4);
	sprite_5.setScale(escalaX, escalaY_5);
	sprite_6.setScale(escalaX, escalaY_6);
	sprite_7.setScale(escalaX, escalaY_7);
	sprite_8.setScale(1.1f, escalaX);

	float positionX = SizeTx * escalaX; //Posición en X en base al tamaño de textura y escala en X
	sprite_1.setPosition(positionX * 1, sizeWindowY - (SizeTy * escalaY_1));
	sprite_2.setPosition(positionX * 3, sizeWindowY - (SizeTy * escalaY_2));
	sprite_3.setPosition(positionX * 5, sizeWindowY - (SizeTy * escalaY_3));
	sprite_4.setPosition(positionX * 7, sizeWindowY - (SizeTy * escalaY_4));
	sprite_5.setPosition(positionX * 9, sizeWindowY - (SizeTy * escalaY_5));
	sprite_6.setPosition(positionX * 11, sizeWindowY - (SizeTy * escalaY_6));
	sprite_7.setPosition(positionX * 13, sizeWindowY - (SizeTy * escalaY_7));
	//Sprite horizontal respecto a posición del último vertical
	sprite_8.setPosition(positionX * 15, sizeWindowY - (SizeTy * escalaY_7)); 

	while (App.isOpen())
	{
		sf::Event event;
		while (App.pollEvent(event)) {
			if (event.type == sf::Event::Closed)
				App.close();
		}

		App.clear();

		App.draw(sprite_1);
		App.draw(sprite_2);
		App.draw(sprite_3);
		App.draw(sprite_4);
		App.draw(sprite_5);
		App.draw(sprite_6);
		App.draw(sprite_7);
		App.draw(sprite_8);

		App.display();
	}
	return 0;
}
