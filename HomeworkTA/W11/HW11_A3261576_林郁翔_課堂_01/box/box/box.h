#pragma once
#include "Quadrilateral.h"

class box
{
private :
	double l, w, h;
	Quadrilateral<double> q[3];
	//
	//2.�Ѧҡ��W§��������Ρ�
	//���g�@���O�������顦�A��֦��T���ݩ�private��"�ܼ�:���B�e�B���C�H�ΤT�ӡ�����Ρ����O�������C
	//�~�Ӥ��e�����⦡�����O�����p�⤧�ΡC
	//�H�ΥHpublic�U�\��禡�F
	//(a) �򥻪�l�غc�l�P���e���ק�BŪ���禡�C
	//(b) �p�⦹�����魱�n(�^�Ǥ@�Ʀr)�C
	//(c) �p�⦹���������`��(�^�Ǥ@�Ʀr)�C
	//(d) �p�⦹��������n(�^�Ǥ@�Ʀr)�C
	//(e) �b�غc�l���|�̷өҵ��������e���]�m�T�ت���Ϊ����e�C
	//(f) �����ܤT�ت��諬��T�C

public:
	double getLength();
	double getWidth();
	double getHeight();
	box &setLength(double s=1.0);
	box &setWidth(double s=1.0);
	box &setHeight(double s=1.0);
	double getArea();
	double Girth();
	double Volum();
	box&setQuadrilateral();
	void printQuadrilateral();
	box();
	box(double,double,double);
	~box();
};

