#ifndef INFO_HPP
#define INFO_HPP

#include <string>

template <typename T, typename K>
class info
{
	public:
		T m_key;
		K m_name;
	public:
		info(const T& key, const K& name)
			:m_key(key)
			,m_name(name)
		{
		}

};

#endif
