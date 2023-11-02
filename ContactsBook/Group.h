#pragma once
#include "Contact.h"

class Group
{
	std::string name;
	int size;
	int count;
	Contact* contacts;
public:
	Group();
	Group(std::string name, int size);
	~Group();
	std::string getName() const;
	int getSize() const;
	int getCount() const;
	Contact* getContacts() const;
	void addContact(const Contact& c);
	void delContact(std::string name);
};

