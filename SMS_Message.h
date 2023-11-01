#pragma once
#include <iostream>
#include <vector>
using namespace std;

#include "Message.h"

class SMS_Message : public Message
{
private:
	vector<string> sms_messages;

public:
	SMS_Message(){}


	// Setters
	void setHeader(string header) override {
		sms_messages.push_back(header);
	}

	void setText(string text) override {
		sms_messages.push_back(text);
	}

	void setFooter(string footer) override {
		sms_messages.push_back(footer);
	}

	vector<string> getResult() override {
		return sms_messages;
	}
};

