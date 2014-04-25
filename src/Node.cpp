/*
 * Node.cpp
 *
 *  Created on: Apr 24, 2014
 *      Author: cynthia
 */

#include "Node.h"

// Default Constructor
Node::Node() {

}

// Sets
void Node::setValue(int value) {

	this->value = value;
}

void Node::addNeighbor(Node *neighbor) {

	neighbors.push_back(neighbor);
}

int Node::getValue() {

	return value;
}

int Node::getSumNeighborsValue() {

	int sum = 0;

	for (int i = 0; i < neighbors.size(); i++) {

		Node curr = *neighbors.at(i);
		sum += neighbors.at(i)->getValue();
	}

	return sum;
}

