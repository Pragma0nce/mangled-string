#pragma once

#include "stdafx.h"
class MangledString
{
private:
	int dataSize;

	std::vector<std::string> dataList;
	std::string prefix;
	int numDataSources;

	void GeneratePrefix();
public:

	MangledString();
	~MangledString() {};

	void AddSource(const std::string newData);
	std::string ToString() const;
	friend std::ostream& operator<<(std::ostream& os, const MangledString& dt);
};