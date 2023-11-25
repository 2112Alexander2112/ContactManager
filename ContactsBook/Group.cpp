#include "framework.h"
#include "Group.h"
#include <vector>

Group::Group()
	: name("--"), size(20), count(0)
{
	contacts[size] = {};
}

Group::Group(std::string name, int size)
	: name(name), size(20), count(0)
{
	contacts[size] = {};
}

Group::~Group()
{
}

std::string Group::getName() const
{
	return name;
}

int Group::getSize() const
{
	return size;
}

int Group::getCount() const
{
	return count;
}

Contact* Group::getContacts() const
{
	return contacts;
}

void Group::addContact(const Contact& c)
{
}

void Group::delContact(std::string name)
{
}
