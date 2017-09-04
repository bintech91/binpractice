/*
 * bfs_shortest_reach.cpp
 *
 *  Created on: Oct 22, 2016
 *      Author: tanpt
 */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstdint>
#include <memory>
#include <vector>
#include <queue>
#include <string>
#include <sstream>
#include <cstdlib>
#include <cstring>

using namespace std;

#define LOOP(i,n) for((i)=0;(i)<(int)(n);(i)++)

#define UP 1
#define DOWN 2
#define LEFT 3
#define RIGHT 4

bool move(std::vector<std::vector<int> >& matrix, std::vector<pair<int,int>>& node_steps, const pair<int,int>& from, int direction);

bool move(std::vector<std::vector<int> >& matrix, std::vector<pair<int,int>>& node_steps, const pair<int,int>& from, int direction){
	if(((from.first == 0 || from.second == 0) ||(matrix[from.first - 1][from.second - 1] == 1))
		&&((from.first == 0 || from.second == 4) ||(matrix[from.first - 1][from.second + 1] == 1))
		&&((from.first == 4 || from.second == 0) ||(matrix[from.first + 1][from.second - 1] == 1))
		&&((from.first == 4 || from.second == 4) ||(matrix[from.first + 1][from.second + 1] == 1))){
		return true;
	}


	return false;
}
void solution(void) {
	int n;
	cin >> n;

	std::vector<pair<int,int> > stuck_nodes;
	for(int i = 0; i < n; i++){
		int x,y=0;

		cin >> x;
		cin >> y;

		pair<int,int> node = std::make_pair(x,y);
		stuck_nodes.push_back(node);
	}

	for(int r = 0; r < 5; r++){
		for(int c = 0; c < 5; r++){
			std::vector<std::vector<int> > matrix = {{0,0,0,0,0},
						{0,0,0,0,0},
						{0,0,0,0,0},
						{0,0,0,0,0},
						{0,0,0,0,0}};

			std::vector<pair<int,int>> node_steps;

			bool is_wrong = false;

			for(int i = 0; i < n; i++){
				if(r == stuck_nodes[i].first && c == stuck_nodes[i].second){
					is_wrong = true;
					break;
				}

				matrix[stuck_nodes[i].first][stuck_nodes[i].second] = 1;
			}

			if(is_wrong == true){
				continue;
			}

			node_steps.push_back(std::make_pair(r,c));

			if(move(matrix, node_steps, std::make_pair(r,c))){

			}
		}

	}
}

int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int TC, tc;
	cin >> TC;
	LOOP(tc,TC)
	{
		printf("Case #%d: .\n", tc + 1);
		solution();
	}
	return 0;
}
