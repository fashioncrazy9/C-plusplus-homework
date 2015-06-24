#include "Quadrilateral.h"

template<typename T>
Quadrilateral<T>::Quadrilateral(T l, T w)
{
	setLength(l).setWidth(w);
}

template<typename T>
T Quadrilateral<T>::getArea(){
	return getWidth()*getLength();
}
template<typename T>
T Quadrilateral<T>::getGirth(){
	return (getWidth() + getLength())*2.0;
}


template<typename T>
Quadrilateral<T> &Quadrilateral<T>::setWidth(T w){
	width = w;
	return *this;
}
template<typename T>
T Quadrilateral<T>::getWidth(){
	return width;
}

template<typename T>
Quadrilateral<T> &Quadrilateral<T>::setLength(T l){
	length = l;
	return *this;
}
template<typename T>
T Quadrilateral<T>::getLength(){
	return length;
}