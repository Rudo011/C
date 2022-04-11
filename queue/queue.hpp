#ifndef QUEUE_HPP
#define QUEUE_HPP

template <typename T>
class queue
{
	private:
		T* m_data;
		size_t m_capacity;
		size_t m_current;
	public:
		queue()
		{
			m_data = new T[1];
			m_capacity = 1;
			m_current = 0;
		}

		~queue()
		{
			delete [] m_data;
		}
	
		void push(T);
		void pop();
		void print();
		
		bool empty();

		T size();
		T max_size();
		T front();
		T back();
};

#endif
