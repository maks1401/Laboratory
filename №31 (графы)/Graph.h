//�������� ������, ���. �31, �����
#pragma once
#include <iostream>
#include <vector>
#include "glut.h"
#include <string>
using namespace std;

extern int maxSize;

extern int WinW, WinH, R;

template <typename T>
class Graph
{
public:
	Graph();
	~Graph();
	int GetVertPos(const T& vertex);
	bool IsEmpty();
	bool IsFull();
	int GetAmountOfVerts();
	int GetAmountOfEdges();
	int GetWeight(const T& vertex1, const T& vertex2);
	vector<T> GetNbrs(const T& vertex);
	void InsertVertex(const T& vertex);
	void InsertEdge(const T& vertex1, const T& vertex2,int weight);
	void FillLabels(T& startVertex);
	void Dijsktra(T& startVertex);
	bool AllVisited(bool* visitedVerts);
	void Print();
	void DrawGraph();
private:
	T adjMatrix[20][20];
	vector<T> vertList;
	vector<int> labelList;
};

extern Graph <int> graph;

template <typename T>
Graph<T>::Graph()
{
	for (int i = 0; i < maxSize; ++i)
	{
		for (int j = 0; j < maxSize; ++j)
		{
			this->adjMatrix[i][j] = 0;
		}
	}
}

template <typename T>
Graph<T>::~Graph()
{

}

template <typename T>
int Graph<T>::GetVertPos(const T& vertex)
{
	for (int i = 0; i < this->vertList.size(); ++i)
	{
		if (this->vertList[i] == vertex) return i;
	}
	return -1;
}

template <typename T>
bool Graph<T>::IsEmpty()
{
	if (this->vertList.size() != 0) return false;
	else return true;
}

template <typename T>
bool Graph<T>::IsFull()
{
	return (vertList.size() == maxSize);
}

template <typename T>
int Graph<T>::GetAmountOfVerts()
{
	return this->vertList.size();
}

template<class T>
int Graph<T>::GetAmountOfEdges()
{
	int amount = 0;   
	if (!this->IsEmpty()) {      
		for (int i = 0, vertListSize = this->vertList.size(); i < vertListSize; ++i) {
			for (int j = 0; j < vertListSize; ++j) {
				if (this->adjMatrix[i][j] == 1)   
					amount += 1;    
			}
		}
		return amount;    
	}
	else
		return 0;      
}

template <typename T>
int Graph<T>::GetWeight(const T& vertex1, const T& vertex2)
{
	if (!this->IsEmpty())
	{
		int vertPos1 = GetVertPos(vertex1);
		int vertPos2 = GetVertPos(vertex2);
		return adjMatrix[vertPos1][vertPos2];
	}
	else return 0;
}

template<class T>
std::vector<T> Graph<T>::GetNbrs(const T& vertex) {
	std::vector<T> nbrsList;    
	int pos = this->GetVertPos(vertex);        
	if (pos != (-1)) {         
		for (int i = 0, vertListSize = this->vertList.size(); i < vertListSize; ++i) {
			if (this->adjMatrix[pos][i] != 0)   
				nbrsList.push_back(this->vertList[i]);      
		}
	}
	return nbrsList;    
}

template <typename T>
void Graph<T>::InsertVertex(const T& vertex)
{
	if (!this->IsFull()) this->vertList.push_back(vertex);
	else
	{
		cout << "���� ��������. ���������� �������� ����� �������" << endl;
		return;
	}
}

template<class T>
void Graph<T>::InsertEdge(const T& vertex1, const T& vertex2, int weight) {
	if (this->GetVertPos(vertex1) != (-1) && this->GetVertPos(vertex2) != (-1)) {
		int vertPos1 = GetVertPos(vertex1);
		int vertPos2 = GetVertPos(vertex2);
		if (this->adjMatrix[vertPos1][vertPos2] != 0) {
			cout << "����� ����� ����� ��������� ��� ����������" << endl;
			return;
		}
		else {
			this->adjMatrix[vertPos1][vertPos2] = weight;
		}
	}
	else {
		cout << "����� ������ (��� ����� �� ���) ��� � ����� " << endl;
		return;
	}
}

template <typename T>
void Graph<T>::FillLabels(T& startVertex)
{
	for (int i = 0, size = vertList.size();i<size; ++i)
	{
		labelList.push_back(1000000);
		
	}
	int pos = GetVertPos(startVertex);
	labelList[pos] = 0;
}

template <typename T>
bool Graph<T>::AllVisited(bool* visitedVerts)
{
	bool flag = true;
	for (int i = 0; i < vertList.size(); ++i)
	{
		if (visitedVerts[i] != true) flag = false;
	}
	return flag;
}

template <typename T>
void Graph<T>::Dijsktra(T& startVertex)
{
	int distance[6], count, index, i, u, m = startVertex;
	bool visited[6];
	for (i = 0; i < 6; i++)
	{
		distance[i] = INT_MAX; visited[i] = false;
	}
	distance[startVertex-1] = 0;
	for (count = 0; count < 6 - 1; count++)
	{
		int min = INT_MAX;
		for (i = 0; i < 6; i++)
			if (!visited[i] && distance[i] <= min)
			{
				min = distance[i]; index = i;
			}
		u = index;
		visited[u] = true;
		for (i = 0; i < 6; i++)
			if (!visited[i] && adjMatrix[u][i] && distance[u] != INT_MAX &&
				distance[u] + adjMatrix[u][i] < distance[i])
				distance[i] = distance[u] + adjMatrix[u][i];
	}
	cout << "��������� ���� �� ��������� ������� �� ���������:\t\n";
	for (i = 0; i < 6; i++) if (distance[i] != INT_MAX)
		cout << m << " > " << i + 1 << " = " << distance[i] << endl;
	else cout << m << " > " << i + 1 << " = " << "������� ����������" << endl;
}


template <typename T>
void Graph<T>::Print()
{
	if (!this->IsEmpty())
	{
		cout << "������� ��������� �����:" << endl;
		cout << " " << " ";
		for (int i = 0, vertListSize = this->vertList.size(); i < vertListSize; ++i)
		{
			cout<<" " << this->vertList[i] << " ";
		}
		cout << endl;
		for (int i = 0, vertListSize = this->vertList.size(); i < vertListSize; ++i)
		{
			cout << this->vertList[i] << " ";
			for (int j = 0; j < vertListSize; ++j)
			{
				cout << " " << this->adjMatrix[i][j] << " ";
			}
			cout << endl;
		}
	}
	else cout << "���� ����" << endl;
}



Graph<int> makeGraph();
extern struct vertCoord;
struct vertCoord
{
	int x, y;
};
extern vertCoord vertC[20];
void setCoord(int i, int n);
void drawCircle(int x, int y, int R);
void drawText(int num, int x1, int y1);
void drawVertex(int n);
void drawLine(int text, int x0, int y0, int x1, int y1);
void reshape(int w, int h);
void display();

template <typename T>
void Graph<T>::DrawGraph()
{
	int n = vertList.size();
	for (int i = 0; i < n; ++i)
	{
		setCoord(i, n);
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = i+1; j < n; ++j)
		{
			int a = adjMatrix[i][j];
			if (a != 0)
			{
				drawLine(a, vertC[i].x, vertC[i].y, vertC[j].x, vertC[j].y);
			}
		}
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = i - 1; j < n; ++j)
		{
			int a = adjMatrix[i][j];
			if (a != 0)
			{
				drawLine(a, vertC[i].x, vertC[i].y, vertC[j].x, vertC[j].y);
			}
		}
	}
	drawVertex(n);
}
