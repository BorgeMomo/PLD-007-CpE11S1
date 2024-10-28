#include <iostream>
using namespace std;

int main() {
 
    string chessboard[64];

    chessboard[0] = 'R'; 
	chessboard[1] = 'N'; 
	chessboard[2] = 'B'; 
	chessboard[3] = 'Q'; 
	chessboard[4] = 'K'; 
	chessboard[5] = 'B'; 
	chessboard[6] = 'N'; 
	chessboard[7] = 'R'; 
	
    chessboard[8] = 'P'; 
	chessboard[9] = 'P';
	chessboard[10] = 'P'; 
	chessboard[11] = 'P'; 
	chessboard[12] = 'P'; 
	chessboard[13] = 'P'; 
	chessboard[14] = 'P'; 
	chessboard[15] = 'P'; 
	
    for (int i = 16; i < 48; i++) {
    chessboard[i] = ' '; 
    }
    chessboard[48] = 'P'; 
	chessboard[49] = 'P'; 
	chessboard[50] = 'P'; 
	chessboard[51] = 'P'; 
	chessboard[52] = 'P'; 
	chessboard[53] = 'P'; 
	chessboard[54] = 'P'; 
	chessboard[55] = 'P'; 
	
    chessboard[56] = 'R'; 
	chessboard[57] = 'N'; 
	chessboard[58] = 'B'; 
	chessboard[59] = 'Q'; 
	chessboard[60] = 'K'; 
	chessboard[61] = 'B'; 
	chessboard[62] = 'N'; 
	chessboard[63] = 'R'; 

    for (int row = 0; row < 8; row++) {
        for (int col = 0; col < 8; col++) {
        	cout << chessboard[row * 8 + col] << " "; 
        }
        cout << endl;
    }

    return 0;
}

