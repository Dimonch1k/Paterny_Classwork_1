#pragma once
#include <iostream>
using namespace std;


#include "Builder.h"
#include "Email_Message.h"
#include "Message.h"

class Email_Builder : public Builder
{
private:
	Email_Message* message = new Email_Message();

public:
	void reset() override {
		message = new Email_Message();
	}

	void buildHeader() override
	{
		message->setHeader("Email Header");
	}

	void buildText() override
	{
		message->setText("Email Text");
	}

	void buildFooter() override
	{
		message->setFooter("Email Footer");
	}

	Message* build() override
	{
		Message* result = this->message;
		this->reset();
		return result;
	}




	// OTHER

	~Email_Builder() {
		delete message;
	}

	Email_Builder() = default;

	bool operator==(const Email_Builder& other) const
	{
		return false;
	}

	Email_Builder(Email_Message* message)
		: message(message)
	{
	}
};
