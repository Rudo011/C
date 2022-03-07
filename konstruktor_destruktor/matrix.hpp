#include <cstdlib>
#include <list>

#ifndef MATRIX_HPP
#define MATRIX_HPP

class matrix
{
	public:
		matrix(size_t s);
		matrix(vector &, vector &);
		~matrix();
		void rbg_lcnel(size_t);
		void print();
		void BIG_MATRIX(unsigned int**, unsigned int**, unsigned int**, unsigned int**, unsigned int**, unsigned int**,                                      unsigned int**, unsigned int**, unsigned int**, unsigned int**);
		size_t m_wight;
		size_t m_heigth;
		unsigned int** m_data;
};

#endif	
