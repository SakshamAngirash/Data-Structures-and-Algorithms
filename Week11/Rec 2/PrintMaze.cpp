#include<iostream> 
#include<string>
using namespace std; 

int maze(int sr , int sc , int er, int ec)
{
    if(sr>er|| sc>ec) return 0; 
    if(sr==er && sc ==ec) return 1;
    int rw = maze(sr, sc+1 , er, ec);  //rightways 
    int dw = maze(sr+1,sc,er,ec); //downways
    return rw+dw;
}

void printpath(int sr , int sc , int er, int ec ,string s )
{
    if(sr>er|| sc>ec) return ; 
    if(sr==er && sc ==ec) 
    {   cout<<s<<endl;
        return;
    }
    printpath(sr, sc+1 , er, ec ,s+'r');  //rightways 
    printpath(sr+1,sc,er,ec,s+'d'); //downways
}

//can we somehow do it with use of two variables
int maze2(int r , int c)
{
    if(r<1|| c<1) return 0; 
    if(r==1 && c == 1) return 1;
    int rw = maze2(r,c-1);  //rightways 
    int dw = maze2(r-1,c); //downways
    return rw+dw;
}

int main()
{
    cout<<maze2(2,2);
}