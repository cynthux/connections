/*
 * Connections.cpp
 *
 *  Created on: Apr 24, 2014
 *      Author: cynthia
 */

#include "Connections.h"

#include <iostream>
#include <vector>
#include <map>

using namespace std;

// Default Constructor
Connections::Connections(int n, map<int, int> &mappingValues, vector<vector<bool> > &adjacencyMatrix) {

	this->n = n;
	this->mappingValues = mappingValues;

	nodes = new Node[n];
	usedValues = new bool[n];

	for (int i = 0; i < n; i++) {

		for (int j = i + 1; j < n; j++) {

			if (adjacencyMatrix[i][j]) {

				adjacencyMatrix[i][j] = 2;
				nodes[i].addNeighbor(&nodes[j]);
				nodes[j].addNeighbor(&nodes[i]);
			}
		}
	}
}

// Solve Method
void Connections::solve() {

	solve(0);
}

void Connections::solve(int position) {

	if (position == n) {

		if (checkConnections()) {

			printNodesValues();
		}
	}

	for (int i = 0; i < n; i++) {

		if (!usedValues[i]) {

			nodes[position].setValue(i);
			usedValues[i] = true;
			solve(position + 1);
			usedValues[i] = false;
		}
	}
}

bool Connections::checkConnections() {

	for (int i = 0; i < n; i++) {

		if (nodes[i].getSumNeighborsValue() != mappingValues[nodes[i].getValue()]) {

			return false;
		}
	}

	return true;
}

void Connections::printNodesValues() {

	for (int i = 0; i < n; i++) {

		cout << "Node " << i << " = " << nodes[i].getValue() << "\n";
	}

	cout << "\n";
}
