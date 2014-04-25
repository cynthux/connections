/*
 * ConnectionsMain.cpp
 *
 *  Created on: Apr 24, 2014
 *      Author: cynthia
 */

#include <iostream>
#include <vector>
#include <map>

#include "Connections.h"

using namespace std;

void solveConnections44();
void solveConnections77();

int main() {

	solveConnections77();
	solveConnections44();

	return 0;
}

void solveConnections44() {

	int n = 13;
	vector<vector<bool> > adjacencyMatrix(n, vector<bool>(n));
	map<int, int> mappingValues;

	cout << "hola" << endl;

	mappingValues.insert(make_pair(0, 18));
	mappingValues.insert(make_pair(1, 12));
	mappingValues.insert(make_pair(2, 21));
	mappingValues.insert(make_pair(3, 16));
	mappingValues.insert(make_pair(4, 6));
	mappingValues.insert(make_pair(5, 23));
	mappingValues.insert(make_pair(6, 22));
	mappingValues.insert(make_pair(7, 27));
	mappingValues.insert(make_pair(8, 0));
	mappingValues.insert(make_pair(9, 5));
	mappingValues.insert(make_pair(10, 41));
	mappingValues.insert(make_pair(11, 19));
	mappingValues.insert(make_pair(12, 10));

	adjacencyMatrix[0][1] = true;
	adjacencyMatrix[0][3] = true;
	adjacencyMatrix[1][2] = true;
	adjacencyMatrix[1][3] = true;
	adjacencyMatrix[1][5] = true;
	adjacencyMatrix[3][4] = true;
	adjacencyMatrix[3][7] = true;
	adjacencyMatrix[4][7] = true;
	adjacencyMatrix[4][9] = true;
	adjacencyMatrix[5][6] = true;
	adjacencyMatrix[5][7] = true;
	adjacencyMatrix[5][8] = true;
	adjacencyMatrix[5][11] = true;
	adjacencyMatrix[6][8] = true;
	adjacencyMatrix[7][9] = true;
	adjacencyMatrix[7][10] = true;
	adjacencyMatrix[7][11] = true;
	adjacencyMatrix[8][12] = true;

	Connections connections(n, mappingValues, adjacencyMatrix);
	connections.solve();

	cout << "hola" << endl;
}

void solveConnections77() {

	int n = 10;
	vector<vector<bool> > adjacencyMatrix(n, vector<bool>(n));
	map<int, int> mappingValues;

	mappingValues.insert(make_pair(0, 7));
	mappingValues.insert(make_pair(1, 12));
	mappingValues.insert(make_pair(2, 8));
	mappingValues.insert(make_pair(3, 17));
	mappingValues.insert(make_pair(4, 20));
	mappingValues.insert(make_pair(5, 16));
	mappingValues.insert(make_pair(6, 12));
	mappingValues.insert(make_pair(7, 5));
	mappingValues.insert(make_pair(8, 4));
	mappingValues.insert(make_pair(9, 14));

	adjacencyMatrix[0][1] = true;
	adjacencyMatrix[1][3] = true;
	adjacencyMatrix[1][4] = true;
	adjacencyMatrix[2][4] = true;
	adjacencyMatrix[3][5] = true;
	adjacencyMatrix[3][6] = true;
	adjacencyMatrix[3][7] = true;
	adjacencyMatrix[4][7] = true;
	adjacencyMatrix[5][8] = true;
	adjacencyMatrix[6][8] = true;
	adjacencyMatrix[6][9] = true;
	adjacencyMatrix[8][9] = true;

	Connections connections(n, mappingValues, adjacencyMatrix);
	connections.solve();
}
