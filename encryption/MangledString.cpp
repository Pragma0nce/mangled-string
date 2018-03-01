#include "stdafx.h"

MangledString::MangledString()
	:numDataSources(0), dataSize(0)
{

}

void MangledString::GeneratePrefix()
{
	prefix.clear();
	for (int i = 0; i < numDataSources - 1; i++)
	{
		prefix.append("0");
	}
	prefix.append(std::to_string(numDataSources));
};

void MangledString::AddSource(const std::string newData)
{
	numDataSources++;
	if (numDataSources == 1)
	{
		dataSize = newData.length();
		for (int i = 0; i < dataSize; i++)
		{
			dataList.push_back("-");
		}
	}

	if (newData.length() != dataSize) {
		throw std::invalid_argument("Data string is not the correct length");
		return;
	}

	GeneratePrefix();

	for (int i = 0; i < dataSize; i++)
	{
		dataList[i] += (newData[i]);
	}

};

std::string MangledString::ToString() const
{
	std::string result = prefix;

	for (auto i : dataList)
	{
		result += i;
	}

	return (result);
};

std::ostream& operator<<(std::ostream& os, const MangledString& dt)
{
	os << dt.ToString();
	return os;
}