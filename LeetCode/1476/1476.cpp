/*
Date: 09/06/2020
Author: jiachongliu
Title: 1476. Subrectangle Queries
Times: 1
*/

class Solution {
public:
	   SubrectangleQueries(vector<vector<int>>& rectangle) {
	   	   rec = rectangle;
	   }

	   void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue) {
	   	   for (int i = row1; i <=row2; ++i) {
	   	   	   for (int j = row2; j <= row2; ++j) {
	   	   	   	   rec[i][j] = newValue;
	   	   	   }
	   	   }
	   }

	   int getValue(int row, int col) {
	   	   return rec[row][col];
	   }

private:
	   vector<vector<int>> rec;
};