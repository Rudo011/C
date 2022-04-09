#ifndef VECTOR_HPP
#define VECTOR_HPP

#include <cstdlib>

template <typename T> class vector
{
	private:	
		T* m_data;
		size_t m_capacity;
		size_t m_current;
	public:
		vector()
		{
			m_data = new T[1];
			m_capacity = 1;
			m_current = 0;
		}
		~vector()
		{
			delete[] m_data;
		}

		void assign(T, size_t);
		void push_back(T data);
		void push_front(T data);
		void print();
		void pop_back();
		void resize(size_t);
		void insert(size_t, T);
		void erase(size_t);
		void clear(); 
		void swap(vector<T>&);

		bool empty();

		T get(size_t);
		T end();
		T begin();

		int size();
		int max_size();
};

#endif
