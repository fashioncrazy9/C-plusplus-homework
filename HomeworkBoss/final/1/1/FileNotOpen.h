#pragma once
#include <stdexcept>
using namespace std;
class FileNotOpen :public runtime_error
{
public:
	FileNotOpen():runtime_error("[#]EXCEPTION:�ɮ׶}�ҿ��~�S�����ɮ�"){}
};

