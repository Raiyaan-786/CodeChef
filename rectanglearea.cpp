#include <iostream>

using namespace std;

class Rectangle{
    public:
    int width ; 
    int height ; 
    void display(){
        cout<<width<<" "<<height<<endl;
    }
};

class RectangleArea : public Rectangle{
    public:
    void readinput(){
        cin>>width>>height;
    }
    void display(){
        cout<<width*height<<endl;
    }
};

int main ()
{
    RectangleArea Area;
    Area.readinput();
    Area.Rectangle::display();
    Area.display();
    return 0;

}