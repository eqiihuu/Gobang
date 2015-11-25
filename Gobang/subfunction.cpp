#include "head.h"


//struct Pos{
//	int x;
//	int y;
//	int status;
//};

int computer[Size][Size][Direction] = {0};
int player[Size][Size][Direction] = {0};
//int chessBoard[Size][Size] = { 0 };

//Main Process Function, choose the best position for computer
int* getBestPos(int Board[Size][Size]){
	int bestPos[2] = { 0, 0 };
	return bestPos;
};

//Get the pos of player from cmd input
int* getInputPos(){
	int inputPosX = 0, inputPosY = 0;
	cout << "Chess Pos (X, Y): ";
	cin >> inputPosX >> inputPosY;
	int inputPos[2] = { inputPosX, inputPosY };
	return inputPos;
};

//Check whether the game is over
int checkWin(int Board[Size][Size]){
	int winner = 0;
	return winner;
};

//Add a chess onto the chessBoard and show
void addChess(int Board[Size][Size], int PosX, int PosY, int who){
	cout << "("<<PosX<<","<< PosY<<")";
	Board[PosX][PosY] = who;
	showBoard(Board);
};

//Show the chessboard
void showBoard(int Board[Size][Size]){
	cout << "\n-------------------------------------------------";
	for (int i = 0; i < Size; i++){
		cout << "\n|  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |";
		cout << "\n|";
		for (int j = 0; j < Size; j++){
			cout << "--";
			switch (Board[i][j]){
			    case 0: {cout << " "; break; }
			    case 1: {cout << "*"; break; }
			    case 2: {cout << "O"; break; }
			}
		}
		cout << "--|"<<i;
	}
	cout << "\n-------------------------------------------------\n";
	cout << "   0  1  2  3  4  5  6  7  8  9  10 11 12 13 14\n";
};

/*
int maxMinAlphaBetaCut(int** chessBoard, int whiteOrBlack, int depth, Point opPos, int alpha, int beta)
{
	int bestValue, curValue;  // bestValue����õķ����� curValue����̽���Ӻ󣬸ô����ӵķ���

	if (isBE5AtPoint(chessBoard, whiteOrBlack == 2 ? 1 : 2, opPos))   // �����������Էֳ�ʤ��
	{   
		if (whiteOrBlack == 1){ return FIVE_ALIKE; }  // ����Ӯ������Ϊʲô����2�أ���Ϊ����whiteOrBlack��opPos���෴��ϵ
		else { return -FIVE_ALIKE; }  // ���Ӯ
	}
	else if (depth == 0){ bestValue = getValue(chessBoard); }   //���Ϊ0����ֵ����
	     else{// ���濪ʼ�������˼�֦˼��ļ���С����
		     if (whiteOrBlack == 2)  // �˽ڵ�Ϊ���԰��ӣ�ȡ����ֵ
		     {// ���濪ʼ�Ը��������µ��ӽ�������
			     for (int i = 0; i <= 14; i++)
			     {
				     for (int j = 0; j <= 14; j++)
				     {
					     if (chessBoard[i][j] == 0)  // �����������
					     {
							 if (alpha >= beta) { return alpha; } // alpha��֦
						     chessBoard[i][j] = whiteOrBlack; // ��̽����
						     curValue = maxMinAlphaBetaCut(chessBoard, 1, depth - 1, cocos2d::Point(i, j), alpha, beta);
						     chessBoard[i][j] = 0;  // ��������
						     if (curValue > alpha){alpha = curValue;} //�ӽڵ�����ֵ��¼��alpha��
					      }
				      }
			      }
			      bestValue = alpha;
		      }// end if (whiteOrBlack == 2)
		      else if (whiteOrBlack == 1)  // �˽ڵ�Ϊ��Һ��ӣ�ȡ��Сֵ
		      {
			      for (int i = 0; i <= 14; i++)
			      {
				      for (int j = 0; j <= 14; j++)
				      {
					      if (chessBoard[i][j] == 0)  // �����������
					      {
							  if (alpha >= beta) { return beta; } // beta��֦
						      chessBoard[i][j] = whiteOrBlack; // ��̽����
						      curValue = maxMinWithAlphaBetaCut(chessBoard, 2, depth - 1, cocos2d::Point(i, j), alpha, beta);
						      chessBoard[i][j] = 0;  // ��������
							  if (curValue < beta){beta = curValue;} //�ӽڵ����Сֵ��¼��beta��	      
					       }
				      }
			       } // end else if (whiteOrBlack == 1) 
			       bestValue = beta;
		      }
	      }  // end else : (depth > 0)
	return bestValue;
}*/