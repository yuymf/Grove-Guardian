#include "GridObject.h"

GridObject::GridObject() {

}

GridObject::~GridObject() {

}

void GridObject::onTick() {
	
}

void GridObject::onHour(int hour) {

}

void GridObject::onDay() {
	
}

void GridObject::kill() {
	dead = true;
}

sf::Color GridObject::getMapColor() {
	return sf::Color::White;
}
