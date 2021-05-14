#include<iostream>
#include<stdlib.h>
using namespace std;
char square[10]={'0','1','2','3','4','5','6','7','8','9'};
int checkWin(){
	if (square[1]==square[4] && square[4]==square[7]){
		return '1';
	}
	if (square[2]==square[5] && square[5]==square[8]){
		return '1';
	}
	if (square[3]==square[6] && square[6]==square[9]){
		return '1';
	}
	if (square[1]==square[2] && square[2]==square[3]){
		return '1';
	}
	if (square[4]==square[5] && square[5]==square[6]){
		return '1';
	}
	if (square[7]==square[8] && square[8]==square[9]){
		return '1';
	}
	if (square[1]==square[5] && square[5]==square[9]){
        return '1';
	}
	if (square[3]==square[5] && square[5]==square[7]){
        return '1';
	}
}
void drawBoard(){
system("clear");
    cout<<"Created By Harsh Verma.\n";
	cout<<"\n\n\t\t\t\t\t\tT i c  T a c  T o e  G a m e\n\n\t\t\t";
	cout<<"\t\t\t*******************************";
	cout<<"\n\n\t\t\t\t\t\t PLAYER 1 (X)  --  PLAYER 2 (O) \n\n\n";
	cout<<"\t\t\t\t\t\t      |      |      \n";
	cout<<"\t\t\t\t\t\t  "<<square[1]<<"   |   "<<square[2]<<"  |   "<<square[3]<<"   \n";
	cout<<"\t\t\t\t\t\t______|______|______\n";
	cout<<"\t\t\t\t\t\t      |      |      \n";
	cout<<"\t\t\t\t\t\t  "<<square[4]<<"   |   "<<square[5]<<"  |   "<<square[6]<<"   \n";
	cout<<"\t\t\t\t\t\t______|______|______\n";
	cout<<"\t\t\t\t\t\t      |      |      \n";
	cout<<"\t\t\t\t\t\t  "<<square[7]<<"   |   "<<square[8]<<"  |   "<<square[9]<<"   \n";
	cout<<"\t\t\t\t\t\t______|______|______\n";
	cout<<"\t\t\t\t\t\t      |      |      \n";
}
int main (){
	drawBoard();
	int p11,p12,p13,p14,p21,p22,p23,p24,p15;
	cout<<"PLAYER 1 - ";
	cin>>p11;
	if (p11>9){
	cout<<"invalid Input";
	exit(1);
	}
	square[p11]={'X'};
	drawBoard();
    if(checkWin()=='1'){
    cout<<"PLAYER 1 WINS.";
    exit(1);
    }
	cout<<"PLAYER 2 - ";
	cin>>p21;
	if (p21>9){
	cout<<"invalid Input";
	exit(1);
	}
	square[p21]={'O'};
	drawBoard();
	if(checkWin()=='1'){
    cout<<"PLAYER 2 WINS.";
    exit(1);
    }
	cout<<"PLAYER 1 - ";
	cin>>p12;
	if (p12>9){
	cout<<"invalid Input";
	exit(1);
	}
	square[p12]={'X'};
	drawBoard();
	if(checkWin()=='1'){
    cout<<"PLAYER 1 WINS.";
    exit(1);
    }
	cout<<"PLAYER 2 - ";
	cin>>p22;
	if (p22>9){
	cout<<"invalid Input";
	exit(1);
	}
	square[p22]={'O'};
	drawBoard();
	if(checkWin()=='1'){
    cout<<"PLAYER 2 WINS.";
    exit(1);
    }
	cout<<"PLAYER 1 - ";
	cin>>p13;
	if (p13>9){
	cout<<"invalid Input";
	exit(1);
	}
	square[p13]={'X'};
	drawBoard();
	if(checkWin()=='1'){
    cout<<"PLAYER 1 WINS.";
    exit(1);
    }
	cout<<"PLAYER 2 - ";
	cin>>p23;
	if (p23>9){
	cout<<"invalid Input";
	exit(1);
	}
	square[p23]={'O'};
	drawBoard();
	if(checkWin()=='1'){
    cout<<"PLAYER 2 WINS.";
    exit(1);
    }
    cout<<"PLAYER 1 - ";
	cin>>p14;
	if (p14>9){
	cout<<"invalid Input";
	exit(1);
	}
	square[p14]={'X'};
	drawBoard();
	if(checkWin()=='1'){
    cout<<"PLAYER 1 WINS.";
    exit(1);
    }
	cout<<"PLAYER 2 - ";
	cin>>p24;
	if (p24>9){
	cout<<"invalid Input";
	exit(1);
	}
	square[p24]={'O'};
	drawBoard();
	if(checkWin()=='1'){
    cout<<"PLAYER 2 WINS.";
    exit(1);
    }
	cout<<"PLAYER 1 - ";
	cin>>p15;
	if (p15>9){
	cout<<"invalid Input";
	exit(1);
	}
	square[p15]={'O'};
	drawBoard();
	if(checkWin()=='1'){
    cout<<"PLAYER 1 WINS.";
    exit(1);
    }
}
