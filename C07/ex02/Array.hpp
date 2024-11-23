#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <cstdlib>

template< typename T >
class	Array
{
	public:
		Array<T>(void) : _array(NULL), _size(0)  //data(nullptr) try
		{
		}

		Array<T>(unsigned int n) : _array(new T[n]), _size(n)
		{
		}

		Array<T>(Array<T> const & src) :  _array(new T[src._size]), _size(src._size)
		{
   		 	for (unsigned int i = 0; i < _size; ++i)
        		_array[i] = src._array[i];
    	}

		virtual ~Array<T>(void)
		{
			delete [] this->_array;
		}

		Array	operator=(const Array &rhs) {
			if (this != &rhs)
			{
				if (_array)
					delete[] _array;
				_size = rhs._size;
				_array = new T[_size];
				for (unsigned int i = 0; i < _size; ++i)
					_array[i] = rhs._array[i];
			}
			return (*this);
		}

		T	& operator[](unsigned int idx)
		{

				if (idx >= this->size()) // idx < 0 is useless since unsigned int n
					throw Array<T>::IndexException();
				else 
					return _array[idx];

		}

		class IndexException : public std::exception
    	{
        	public:
            	virtual const char* what() const throw()
				{
					return "The index is outside the array bounds";
				};
    	};

		unsigned int	size(void) const
		{
			return _size;
		}
		
		T	*GetArray(void) const
		{
			return _array;
		}

	private:
		T 				*_array;
		unsigned int	_size;
};

#endif