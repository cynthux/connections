/*
 * Connections.h
 *
 *  Created on: Apr 24, 2014
 *      Author: cynthia
 */

#ifndef CONNECTIONS_H_
#define CONNECTIONS_H_

#include <map>

#include "Node.h"

using namespace std;

class Connections {

private:

	int n;
	Node* nodes;
	bool* usedValues;
	map<int, int> mappingValues;

public:

	// Constructor
	Connections(int n, map<int, int> &mappingValues, vector<vector<bool> > &adjacencyMatrix);
	void solve();

private:

	void solve(int position);
	bool checkConnections();
	void printNodesValues();
};


#endif /* CONNECTIONS_H_ */
