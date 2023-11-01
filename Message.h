#pragma once
#include <iostream>
using namespace std;
#include <vector>

class Message
{
public:
	virtual void setHeader(string header) = 0;
	virtual void setText(string header) = 0;
	virtual void setFooter(string header) = 0;

	virtual vector<string> getResult() = 0;
};

