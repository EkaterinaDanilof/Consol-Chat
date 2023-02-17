#pragma once
#include<string>
using namespace std;

class message
{
	const string from_;
	const string to_;
	const string text_;
	
public:
	message(const string& from, const string& to, const string& text) :from_(from), to_(to), text_(text) {}

	const string& getFrom() const { return from_; }
	const string& getTo() const { return to_; }
	const string& getText() const { return text_; }
};

