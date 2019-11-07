/*
 * anagramy.cpp
 */


#include <iostream>
using namespace std;

int main(int argc, char **argv)
{   
    //wzór rekurencyjny na silnie n = (n-1) * n
    int r = 4;
	char napis[] = "krab";
    int i1, i2, i3, i4;
    int count = 0;

    for(i1 = 0; i1 < r; i1++){
        for(i2 = 0; i2 < r; i2++){
            if (i1 == i2) continue; //continue przerywa wykonywanie pętli i przechodzi do następnej iteracji, funkcja break bezwzględnie przerywa pętle
            for(i3 = 0; i3 < r; i3++){ 
                if (i2==i3 || i3==i1) continue;
                for(i4 = 0; i4 < r; i4++){
                    if (i3==i4 || i4==i1 || i4==i2) continue;
                    cout << napis[i1] << napis[i2] << napis[i3] << napis[i4] << endl;
                    count += 1;
        }}}}
    cout << count;
        
	return 0;
}

