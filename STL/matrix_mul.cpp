#include <iostream>
#include <vector>

using namespace std;

void mat_mul(const vector<vector<int> >&a, int row_a, const vector<vector<int> >&b, int row_b, vector<vector<int> >&c, int col_c)
{
	for(int i = 0; i < row_a; i++)
	  for(int j = 0; j < col_c; j++)
		for(int k = 0; k < row_b; k++)
			c[i][j] += a[i][k]*b[k][j];
}

/*
int main()
{
	vector<vector<int> > a(2, vector<int>(3));
	vector<vector<int> > b(3, vector<int>(4));
	vector<vector<int> > c(2, vector<int>(4));

	a[0][0] = 6;  a[0][1] = 5;  a[0][2] = -2;
	a[1][0] = -1; a[1][1] = -4; a[1][2] = 0;

	b[0][0] = 6;  b[0][1] = 1;  b[0][2] = 7;  b[0][3] = 3;
	b[1][0] = 2;  b[1][1] = 4;  b[1][2] = -1; b[1][3] = 5;
	b[2][0] = 8;  b[2][1] = 9;  b[2][2] = 10; b[2][3] = 11;

	int row_a = 2;
	int row_b = 3;
	int col_c = 4;

	mat_mul(a,row_a,b,row_b, c,col_c);

	/*
        c = {
            30   8  17   21	 
           -14 -17  -3  -23
            }
	*/
    /*
	for(int i = 0;i < row_a ; i++) {
		for(int j = 0; j < col_c; j++) {
		 cout << c[i][j] << " " ;
		}
		cout << endl;
	}
	cout << endl;	

	return 0;
}*/