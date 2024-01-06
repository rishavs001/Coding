#include <iostream>
#include <cmath>
using namespace std;
class Line {
  private:
    double len;
  public:
    Line() {
      len=0;
    }
    Line(double l) {
      len=l;
    }
    double getLen() {
      return len;
    }
};
class Triangle {
  private:
    Line side1,side2,side3;
  public:
    Triangle(Line l1,Line l2,Line l3) {
      side1=l1;
      side2=l2;
      side3=l3;
    }
    Triangle(const Triangle &t) {
      side1=t.side1;
      side2=t.side2;
      side3=t.side3;
    }
    void setSides(Line l1,Line l2,Line l3) {
      side1=l1;
      side2=l2;
      side3=l3;
    }
    void showSides() {
      cout<<"Side 1: "<<side1.getLen()<<endl;
      cout<<"Side 2: "<<side2.getLen()<<endl;
      cout<<"Side 3: "<<side3.getLen()<<endl;
    }
    float findArea() {
      double s=(side1.getLen()+side2.getLen()+side3.getLen())/2;
      return sqrt(s*(s-side1.getLen())*(s-side2.getLen())*(s-side3.getLen()));
    }
};
int main() {
  double len1,len2,len3;
  cout<<"Enter the length of side 1: ";
  cin>>len1;
  Line side1(len1);
  cout<<"Enter the length of side 2: ";
  cin>>len2;
  Line side2(len2);
  cout<<"Enter the length of side 3: ";
  cin>>len3;
  Line side3(len3);
  Triangle tri(side1,side2,side3);
  cout<<"The sides of the triangle are:"<<endl;
  tri.showSides();
  cout<<"The area of the triangle is: "<<tri.findArea()<<endl;
  return 0;
}
