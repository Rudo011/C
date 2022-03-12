#ifndef MATRIX_HPP
#define MATRIX_HPP

#include <cstdlib>
#include <vector>

class matrix
{
	public:
		matrix(size_t s);
		matrix(vector &, vector &);
		~matrix();
		void rgb_lcnel(size_t);
		void print();
		void average_rgb();
		void compare(matrix &, int);
		void merge(const std::vector <matrix*> &, size_t);
	private:
		size_t m_wight;
		size_t m_heigth;
		unsigned int** m_data;
};

#endif	
