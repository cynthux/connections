/*
 * Node.h
 *
 *  Created on: Apr 24, 2014
 *      Author: cynthia
 */

#ifndef NODE_H_
#define NODE_H_

#include <vector>

using namespace std;

class Node {

private:

	int value;
	vector<Node*> neighbors;

public:

	// Constructor
	Node();

	// Sets
	void setValue(int value);
	void addNeighbor(Node *neighbor);

	// Getters
	int getValue();
	int getSumNeighborsValue();
};

#endif /* NODE_H_ */
