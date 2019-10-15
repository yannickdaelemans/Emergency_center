#include "Sensor.h"

Sensor::Sensor(int int_id, int enum_type) {
	// TODO - implement Sensor::Sensor
	throw "Not yet implemented";
}

Sensor::Sensor() {
    // TODO - implement Sensor::Sensor
    throw "Not yet implemented";
}

int Sensor::getId() {
	return this->id;
}

void Sensor::setId(int newId) {
    this->id = newId;
}

std::vector<Action*> Sensor::getActions() {
	// TODO - implement Sensor::getActions
	throw "Not yet implemented";
}

void Sensor::setActions(std::vector<Action*> actions) {
	// TODO - implement Sensor::setActions
	throw "Not yet implemented";
}

std::string Sensor::getVendor() {
	return this->vendor;
}

void Sensor::setVendor(std::string newVendor) {
    this->vendor = newVendor;
}

void Sensor::removeComponent(Component* toBeRemoved) {
	// TODO - implement Sensor::removeComponent
	throw "Not yet implemented";
}

void Sensor::test() {
	// TODO - implement Sensor::test
	throw "Not yet implemented";
}

void Sensor::activate() {
	// TODO - implement Sensor::activate
	throw "Not yet implemented";
}

void Sensor::deactivate() {
	// TODO - implement Sensor::deactivate
	throw "Not yet implemented";
}

std::string Sensor::getInfo() {
	// TODO - implement Sensor::getInfo
	throw "Not yet implemented";
}
