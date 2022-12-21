#ifndef CONVERSION_HPP
# define CONVERSION_HPP

#include <iostream>
#include <ctype.h>
#include <climits>
#include <cfloat>

#define NON_PRINTABLE "Non displayable"
#define IMPOSSIBLE "impossible"

class Conversion
{
	private:
		const char *input;
		char	_c;
		int 	_i;
		float	_f;
		double	_d;

		std::string _char;
		std::string _int;
		std::string _float;
		std::string _double;

		static const int CHAR_TYPE = 0;
		static const int INT_TYPE = 1;
		static const int FLOAT_TYPE = 2;
		static const int DOUBLE_TYPE = 3;
		static const int LIMIT = 4;
		static const int WRONG_TYPE = 5;

		int getType();

		void convertFromChar();
		void convertFromInt(double input);
		void convertFromFloat(double input);
		void convertFromDouble(double input);
		void setWrong();

		bool isLimit(const char *input);

	public:
		Conversion(void);
		Conversion(const char *input);
		Conversion(const Conversion & src);
		virtual ~Conversion(void);
		Conversion & operator=(Conversion const & rhs);

		void convert();

		void charToPrint(std::ostream & o) const;
		void intToPrint(std::ostream & o) const;
		void floatToPrint(std::ostream & o) const;
		void doubleToPrint(std::ostream & o) const;

};

std::ostream & operator<<(std::ostream & o, Conversion const & rhs);

#endif
