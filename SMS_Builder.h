#pragma once
#include <iostream>
using namespace std;


#include "Builder.h"
#include "SMS_Message.h"
class SMS_Builder : public Builder
{
private:
	SMS_Message* message = new SMS_Message();

public:
	void reset() override {
		this->message = new SMS_Message();
	}

	void buildHeader() override
	{
		message->setHeader("SMS Header");
	}

	void buildText() override
	{
		message->setText("SMS Text");
	}

	void buildFooter() override
	{
		message->setFooter("SMS Footer");
	}


	Message* build()
	{
		Message* result = this->message;
		this->reset();
		return result;
	}



	// OTHER

	SMS_Builder() = default;

	SMS_Builder(SMS_Message* message)
		: message(message)
	{
	}

	bool operator==(const SMS_Builder& other) const
	{
		return false;
	}
};

