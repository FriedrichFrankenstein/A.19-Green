#include <iostream>

using namespace std;

class Point{
    public:
    double x;
    double y;
};

class Triangle{
    public:
    Point a,b,c;
};

int GDE(Point A, Point B, Point K){
    double R=(K.x-A.x)*(B.y-A.y)-(K.y-A.y)*(B.x-A.x);
    if(R>0){
        return 1;
    }else if(R==0){
        return 0;
    }else
        return -1;
}

int main()
{
    Triangle tr;
    Point p;
    cin>>tr.a.x>>tr.a.y;
    cin>>tr.b.x>>tr.b.y;
    cin>>tr.c.x>>tr.c.y;
    cin>>p.x>>p.y;
    if(GDE(tr.a,tr.b,p)==GDE(tr.a,tr.c,p) && GDE(tr.a,tr.b,p)==GDE(tr.c,tr.b,p) )
        cout << "Outside!" << endl;
    else
        cout<<"Inside!"<<endl;
    return 0;
}
