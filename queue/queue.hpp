#ifndef QUEUE_HPP
#define QUEUE_HPP

template <typename T>
class queue
{
	private:
		T* m_data;
		int m_capacity;
		int m_front;
		int m_back;
		int m_current;
	public:
		queue()
		{
			m_data = new T[1];
			m_capacity = 1;
			m_current = 0;
			m_front = 0;
			m_back = 0;
		}

		~queue()
		{
			delete [] m_data;
		}
	
		void push_back(int);
		
		bool empty();

};

#endif
