#ifndef ITERATOR_HPP
#define ITERATOR_HPP

namespace ft
{
	template < class Category,
			 class T,
			 class Distance = ptrdiff_t,
			 class Pointer = T*,
			 class Reference = T& >
	struct iterator
	{
		typedef	T			value_type;
		typedef	Distatnce	difference_type;
		typedef	Pointer		pointer;
		typedef	Reference	reference;
		typedef	Category	iterator_category;
	};
	private:
		
	public:
		Iterator(void);
		Iterator(const Iterator& ref);
		~Iterator(void);

		Iterator&	operator=(const Iterator it);
		Iterator&	operator+=(Iterator it);
		Iterator&	operator-=(Iterator it);
		Iterator&	operator[](const Iterator it);

		Iterator	operator+(const Iterator it) const;
		Iterator	operator-(const Iterator it) const;
		Iterator	operator*(const Iterator it) const;
		Iterator	operator++(void);
		Iterator	operator--(void);
		//Iterator	operator->

		bool		operator==(const Iterator it) const;
		bool		operator!=(const Iterator it) const;
		bool		operator<(const Iterator it) const;
		bool		operator>(const Iterator it) const;
		bool		operator<=(const Iterator it) const;
		bool		operator>=(const Iterator it) const;
}


#endif
