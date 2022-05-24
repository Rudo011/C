#ifndef HASH_ENTRY_HPP
#define HASH_ENTRY_HPP

#include <string>
#include <iostream>
#include <cstdlib>
	
const size_t size = 999;

class hash_entry
{
	public:
		unsigned long long int m_key;
		std::string m_name;
	public:
		hash_entry(unsigned long long int key, const std::string& name)
			:m_key(key)
			,m_name(name)
		{
		};
		
};

#endif
