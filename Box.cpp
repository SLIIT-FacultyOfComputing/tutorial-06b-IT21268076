#include "Box.h"
  void Box::setLength(double l){
    length = l;
  }
  void Box::setWidth(double w){
    width = w;
  }
  void Box::setHeight(double h){
    height = h;
  }
  int Box::getLength(){
    return length;
  }
int Box::getWidth(){
  return width;
}
int Box::getHeight(){
  return height;
}
// Implement setters and getters

// Implemenet the calcVolume() unction
int Box::calcVolume() {
  return length*width*height;
}
