#ifndef DEQUE_HPP
#define DEQUE_HPP

template <typename T>
class deque
{
	private:
		T* m_data;
		size_t m_size;
		size_t m_capacity_size;
		int m_front;
		int m_back;
		int m_count;
	private:
		void initialize()
		{
			m_data = new T[m_size];
		}
	public:
		deque(size_t size)
			:m_data(0)
			,m_size(size)
			,m_capacity_size(size)
			,m_front(-1)
			,m_back(-1)
			,m_count(-1)
		{
		}
		~deque()
		{
			delete[] m_data;
		}

		T& operator[](size_t);

		bool full();
		bool empty();

		void push_front(const T&);
		void push_back(const T&);
		void pop_back();
		void pop_front();
		void resize();
		void print();
		void clear();
	
		T max_size();
		T size();
		T& begin();
		T& end();
};

#endif
