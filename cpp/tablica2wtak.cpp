#include <iostream>
#include <iomanip>

using namespace std;

#define N   11
#define M   11

int main(int argc, char **argv)
{
	int tab2w[N][M];
    int i, j;
    
    srand(time(NULL)); 
    for(i=1; i < N; i++){
        for(j=1; j < M; j++){
            tab2w[i][j] = i*j;
            cout << setw(4) << tab2w[i][j] << " ";
        }
        cout << endl;
    }
    
	return 0;
}
