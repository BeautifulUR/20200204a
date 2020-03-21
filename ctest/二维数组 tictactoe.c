#include<stdio.h>
int main()
{
    const int size=3;
    int board[size][size];
    int i,j;
    int numofx,numofo;
    int result=-1; //-1 和，1 X赢，0 O赢
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            scanf("%d",&board[i][j]);
        }
    }

    for(i=0;i<size&&result==-1;i++)
    {
        numofx=numofo=0;
        for(j=0;j<size;j++)
        {
            if(board[i][j]==0){
                numofo++;
            }else{
                numofx++;
            }
        }
        if(numofo==size){
            result=0;
        }else if(numofx==size){
            result=1;
        }
    } //行

    if(result==-1){
            for(j=0;j<size&&result==-1;j++)
            {
                numofx=numofo=0;
                for(i=0;i<size;i++)
            {
                if(board[i][j]==0){
                    numofo++;
                }else{
                    numofx++;
                    }
            }
            if(numofo==size){
                    result=0;
            }else if(numofx==size){
                    result=1;
                    }
            }
    }//列

    if(result=-1){
        for(i=0;i<size&&result==-1;i++){
            numofo=numofx=0;
            if(board[i][i]==1){
                numofx++;
            }else{
                numofo++;
            }
        }
        if(numofx==size){
            result=1;
        }else if(numofo==size){
            result=0;
        }
    } //主对角

    if(result=-1){
        for(i=0;i<size&&result==-1;i++){
            numofo=numofx=0;
            if(board[i][size-i-1]==1){
                numofx++;
            }else{
                numofo++;
            }
        }
        if(numofx==size){
            result=1;
        }else if(numofo==size){
            result=0;
        }
    }

    if(result==1){
        printf("X win");
    }else if(result==0){
        printf("O win");
    }else{
        printf("no winer");
    }
    return 0;
}
