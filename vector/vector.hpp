#ifndef VECTOR_HPP
#define VECTOR_HPP

#include <iostream>
#include <memory>

template < typename T, typename Alloc = std::allocator<T> >
class vector
{
	private:

	public :
		typedef				Alloc							allocator_type;
		typedef				std::ptrdiff_t					difference_type;
		typedef	typename	allocator_type::reference		reference;
		typedef	typename	allocator_type::const_reference	const_reference;
		typedef	typename	allocator_type::pointer			pointer;
		typedef	typename	allocator_type::const_pointer	const_pointer;

		typedef	typename	RandomAccessIterator<T>				iterator;
		typedef	typename	RandomAccessIterator<const T>		iterator;
		typedef	typename	reverse_iterator<iterator>			reverse_iterator;
		typedef	typename	reverse_iterator<const_iterator>	const_reverse_iterator;
};



#endif
