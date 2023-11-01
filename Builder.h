#pragma once
#include <iostream>
using namespace std;


#include "Message.h"
class Builder
{
public:
	virtual void reset() = 0;
	virtual void buildHeader() = 0;
	virtual void buildText() = 0;
	virtual void buildFooter() = 0;
	virtual Message* build() = 0;
};

