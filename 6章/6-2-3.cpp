//ob+obだけでなくob+intも行えるよう、+をオーバーロードする
#include <iostream>
using namespace std;

class coord{
    int x, y;//座標値
    public:
        coord() { x = 0; y = 0;}
        coord(int i, int j) { x = i; y = j; }
        void get_xy(int &i, int &j) { i = x; j = y;}
        coord operator+(coord ob2);// ob + ob
        coord operator+(int i);// ob + int
};
// + をcoordクラスに対してオーバーロードする
coord coord::operator+(coord ob2)
{
    coord temp;
}

//ob+intを行えるよう、+ をオーバーロードする
coord coord::operator+(int i)
{
    coord temp;
    temp.x = x + i;
    temp.y = y + i;

    return temp;
}

int main()
{
    coord o1(10, 10), o(5.3), o3;
    intx, y;
    o3 = o1 + o2;//2つのオブジェクトの加算。operator+(coord)を呼ぶ
    o3.get_xy(x, y);
    cout << "(o1+o2) X :" << x << ",Y: " << y << "\n";

    o3 = o1 + 100;//2つのオブジェクトの加算。operator+(int)を呼ぶ
    o3.get_xy(x, y);
    cout << "(o1 +100) X: " << x << ",Y: " << y << "\n";

    return 0;

}