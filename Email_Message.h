#pragma once
#include <iostream>
#include <vector>
using namespace std;

#include "Message.h"

class Email_Message : public Message
{
private:
	vector<string> e_messages;

public:
	Email_Message(){}


	// Setters
	void setHeader(string header) override {
		e_messages.push_back(header);
	}

	void setText(string text) override {
		e_messages.push_back(text);
	}

	void setFooter(string footer) override {
		e_messages.push_back(footer);
	}

	vector<string> getResult() override {
		return e_messages;
	}


};

