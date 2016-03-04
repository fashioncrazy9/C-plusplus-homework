#pragma once
#include <stdexcept>
using namespace std;
class FileNotOpen :public runtime_error
{
public:
	FileNotOpen():runtime_error("[#]EXCEPTION:檔案開啟錯誤沒有此檔案"){}
};

