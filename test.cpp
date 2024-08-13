#include <iostream>
#include <string>
using namespace std;

#include <windows.h>

wstring tetromino[7];//创建7种方块
int nFieldWidth = 12;//场地宽
int nFieldHeight = 18;//场地高
unsigned char *pField = nullptr;

int Rotate(int px, int py, int r)//方块旋转
{
    switch(r % 4)
    {
        case 0: return py * 4 + px;//0度
        case 1: return 12 + py - (px * 4);//90度
        case 2: return 15 - (py * 4) - px;//180度
        case 3: return 3 - py + (px * 4);//270度
    }
    return 0;
}

int main(){ 
    //创建素材
   tetromino[0].append(L"..X.");
   tetromino[0].append(L"..X.");
   tetromino[0].append(L"..X.");
   tetromino[0].append(L"..X.");

   tetromino[0].append(L"..X.");
   tetromino[0].append(L".XX.");
   tetromino[0].append(L".X..");
   tetromino[0].append(L"....");

   tetromino[0].append(L".X..");
   tetromino[0].append(L".XX.");
   tetromino[0].append(L"..X.");
   tetromino[0].append(L"....");

   tetromino[0].append(L"....");
   tetromino[0].append(L".XX.");
   tetromino[0].append(L".XX.");
   tetromino[0].append(L"....");

   tetromino[0].append(L"..X.");
   tetromino[0].append(L".XX.");
   tetromino[0].append(L"..X.");
   tetromino[0].append(L"....");

   tetromino[0].append(L"....");
   tetromino[0].append(L".XX.");
   tetromino[0].append(L"..X.");
   tetromino[0].append(L"..X.");

   tetromino[0].append(L"....");
   tetromino[0].append(L".XX.");
   tetromino[0].append(L"..X.");
   tetromino[0].append(L"..X.");

    pField = new unsigned char[nFieldHeight*nFieldWidth];//创建场地
    for(int x = 0;x < nFieldWidth; x++)//场地边界
        for(int y = 0;x < nFieldHeight; y++)
            pField[y*nFieldWidth + x] = (x == 0 || x == nFieldWidth - 1 || y == nFieldHeight - 1) ? 9 : 0;

    return 0;
}