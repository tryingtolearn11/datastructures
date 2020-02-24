



#include <vector>
using std::vector;
#include <iostream>
using std::cout;

vector<vector<bool> > world = {
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
};

// i want this to apply the rules to the world
size_t nbrCount(size_t i, size_t j,const vector<vector<bool> >&g)
{
	vector<vector<bool> >newworld;                  //declared new world
	for (int i =0; i<g.size(); ++i) {
		for (int j =0; j < g[i].size(); ++j) {
			newworld[i][j] = g[i][j];                  //copy old to new
			int count = 0; 			//count how many live neighbors
			int x = g.size();  //I rows
			int y = g[i].size(); //J colums
				int posI = (i+1);
				int negI = (i-1);
				int posJ = (j+1);
				int negJ = (j-1);

			if(newworld[(posI+x)%x][(negJ+y)%y] == true) { //top left cell
				count++;
			}
			else if (newworld[(posI+x)%x][j] == true) { //top middle cell
				count++;
			}
			else if (newworld[(posI+x)%x][(posJ+y)%y] == true) { //top right cell
				count++;
			}
			else if (newworld[i][(negJ+y)%y] == true) { //left cell
				count++;
			}
			else if (newworld[i][(posJ+y)%y] == true) { //right cell
				count++;
			}
			else if (newworld[(negI+x)%x][(negJ+y)%y] == true) { //bottom left
				count++;
			}
			else if (newworld[(negI+x)%x][j] == true ) { //bottom middle
				count++;
			}
			else if (newworld[(negI+x)%x][(posJ+y)%y] == true ) { //bottom right
				count++;
			}
			if ( count == 3) { //if cell has 3 neighbors
				newworld[i].push_back(true);
			}
				else {
					newworld[i].push_back(false);
				}

			}
		}
return newworld[i][j];

}

//prints grid
void display(vector<vector<bool> >&a)
{
	for (int row = 0; row < 10; row++) {
		vector<bool> temp;
		for (int column = 0; column < 20; column++) {
			temp.push_back(row);
		}
	}
	for (unsigned int i = 0; i < a.size(); i++){
		for (unsigned int j = 0; j < a[i].size(); j++) {
			cout << a[i][j];
		}
		cout << '\n';
	}
}


int main()
{
	/* NOTE: the vector 'world' above corresponds to the contents
	 * of ../res/tests/0.  TODO: apply the rules to the vector,
	 * write the result to standard output, and compare with the
	 * contents of ../tests/1. */
for (size_t i=0; i<world.size();i++){
	for (size_t j=0; j<world[i].size();j++){
		vector<vector<bool> >newworld; //intialize copy world
		newworld[i][j] = world[i][j]; //copy the old into new
		nbrCount(i,j,world); //im trying to apply the rules to the copy

    display(newworld); //print
	}
}


	return 0;
}




























