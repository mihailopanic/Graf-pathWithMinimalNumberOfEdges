#include <iostream>
using namespace std;

#include "GraphInt.h"

int main(int argc, char* argv[]) 
{
	GraphAsListsInt graph;

	graph.insertNode(40);
	graph.insertNode(30);
	graph.insertNode(20);
	graph.insertNode(10);

	graph.insertEdge(10, 20, 1);
	graph.insertEdge(10, 30, 3);
	graph.insertEdge(30, 20, 2);
	graph.insertEdge(30, 40, 4);
	graph.insertEdge(40, 20, 5);


	cout << "Put od 10 do 20: ";
	graph.pathWithMinimalNumberOfEdges(10, 20);
	cout << endl;

	cout << "Put od 10 do 40: ";
	graph.pathWithMinimalNumberOfEdges(10, 40);
	cout << endl;

	cout << "Put od 30 do 20: ";
	graph.pathWithMinimalNumberOfEdges(30, 20);
	cout << endl;

	cout << "Put od 10 do 50: ";
	graph.pathWithMinimalNumberOfEdges(10, 50);
	cout << endl;

	/*
	graph.insertNode(0);
	graph.insertNode(1);
	graph.insertNode(2);
	graph.insertNode(3);
	graph.insertNode(4);
	graph.insertNode(5);
	graph.insertNode(6);
	graph.insertNode(7);
	graph.insertNode(8);
	graph.insertEdge(1, 2);
	graph.insertEdge(2, 3);
	graph.insertEdge(3, 4);
	graph.insertEdge(4, 5);
	graph.insertEdge(2, 5);
	graph.insertEdge(2, 0);
	graph.insertEdge(4, 6);
	graph.insertEdge(5, 6);
	graph.insertEdge(8, 7);
	graph.insertEdge(7, 1);

	graph.insertEdge(5, 3);
	graph.insertEdge(6, 3);
    graph.insertEdge(6, 1);
	graph.insertEdge(1, 0);

	graph.print();
	*/

	cout << endl;

	/*
	cout << "Put od 8 do 6: ";
	graph.pathWithMinimalNumberOfEdges(8, 6);
	cout << endl;
	cout << "Put od 2 do 6: ";
	graph.pathWithMinimalNumberOfEdges(2, 6);
    cout << endl;
	cout << "Put od 2 do 4: ";
	graph.pathWithMinimalNumberOfEdges(2, 4);
	cout << endl;
	cout << "Put od 6 do 0: ";
	graph.pathWithMinimalNumberOfEdges(6, 0);
	cout << endl;
	cout << "Put od 0 do 3: ";
	graph.pathWithMinimalNumberOfEdges(0, 3);
	*/
}
