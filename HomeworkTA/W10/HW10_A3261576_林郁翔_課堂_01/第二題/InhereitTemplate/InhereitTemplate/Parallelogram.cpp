#include "Parallelogram.h"
template<typename T>
Parallelogram<T>::Parallelogram(T l, T w, T h)
{
	setParallelogram(l, w, h);
}
template<typename T>
void Parallelogram<T>::setParallelogram(T l, T w, T h){
	Quadrilateral::setLength(l);
	Quadrilateral::setWidth(w);
	setHeight(h);

}
template<typename T>
Parallelogram<T>::~Parallelogram()
{
}
template<typename T>
T &Parallelogram<T>::getHeight(){
	return  height;
}


template<typename T>
Parallelogram<T> &Parallelogram<T>::setHeight(T h){
	height = h;
	return *this;
}


template<typename T>
T Parallelogram<T>::getArea(){

	return Quadrilateral::getLength()*Parallelogram::getHeight();

}
