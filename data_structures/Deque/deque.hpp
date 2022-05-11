#ifndef DEQUE_HPP
#define DEQUE_HPP

#include <cstdlib>

template <typename T>
class deque
{
	private:
		T* m_data;
		size_t m_current;
		size_t m_capacity;
		size_t m_front;
		size_t m_back;
	public:
		deque()
		{
			m_data = new T[1];	
			m_capacity = 1;
			m_current = 0;
		}
		~deque()
		{
			delete[] m_data;
		}

		T& operator[](size_t);
		
		bool empty();

		void print();
		void push_back(T);
		void push_front(T);
		void pop_back();
		void pop_front();
		void resize(size_t);
		void clear();
		void erase(size_t);

		int begin();
		int back();
		int size();
		int max_size();
};

#endif
