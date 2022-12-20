#include "Conversion.hpp"

Conversion::Conversion(void):
	 _c(0), _i(0), _f(0.0f), _d(0.0),
	_char(""), _int(""), _float(""), _double("")
{
	//std::cout << "Conversion created. Default." << std::endl;
}

Conversion::Conversion(const char *input) :
	input(input), _c(0), _i(0), _f(0.0f), _d(0.0),
	_char(""), _int(""), _float(""), _double("")
{
	//std::cout << "Conversion created." << std::endl;
}

Conversion::Conversion(const Conversion & src)
{
	//std::cout << "Copy constructor called. " << std::endl;
	 *this = src;
}

Conversion::~Conversion(void)
{
	//std::cout << "Conversion destroyed." << std::endl;
}

Conversion & Conversion::operator=(const Conversion & rhs)
{
	if (this != &rhs)
	{
		input = rhs.input;
		_c = rhs._c;
		_i = rhs._i;
		_f = rhs._f;
		_d = rhs._d;
		_char = rhs._char;
		_int = rhs._int;
		_float = rhs._float;
		_double = rhs._double;
	}
	return *this;
}

bool Conversion::isLimit(const char *input) {
	static const std::string limits[3] = {"-inf", "inf", "nan"};

	for (int i = 0; i < 3; i++){
		if (input == limits[i] || input == limits[i] + "f"){
			_char = IMPOSSIBLE;
			_int = IMPOSSIBLE;
			_float = limits[i];
			_double = limits[i];
			return true;
		}
	}
	return false;
}

int Conversion::getType(){
	if (isLimit(input)){
		return LIMIT;
	}
	if (strlen(input) == 1 && !isdigit(input[0]))
		return CHAR_TYPE;
	if (strlen(input) == 1 && isdigit(input[0]))
		return INT_TYPE;
	char *end = NULL;
	double d_input = std::strtod(input, &end);
	if (*end != 0 && (strlen(end) != 1 || *end != 'f'))
		return WRONG_TYPE;
	if (*end == 'f')
		return FLOAT_TYPE;
	std::size_t found = std::string(input).find('.');
	if (found == std::string::npos &&
	d_input >= std::numeric_limits<int>::min() && d_input <= std::numeric_limits<int>::max())
		return INT_TYPE;
	return DOUBLE_TYPE;
}

void Conversion::convert(){
	int type = getType();
	if (type == LIMIT){
		return ;
	}
	char *end = NULL;
	double d_input = std::strtod(input, &end);
	if (type == CHAR_TYPE){
		convertFromChar();
	}
	if (type == INT_TYPE){
		convertFromInt(d_input);
	}
	if (type == FLOAT_TYPE){
		convertFromFloat(d_input);
	}
	if (type == DOUBLE_TYPE){
		convertFromDouble(d_input);
	}
	if (type == WRONG_TYPE){
		setWrong();
	}
}

void Conversion::convertFromChar(){
	_c = input[0];
	_i = static_cast<int>(_c);
	_f = static_cast<float>(_c);
	_d = static_cast<double>(_c);
}

void Conversion::convertFromInt(double input){
	_i = static_cast<int>(input);
	if (isascii(_i) && isprint(_i)){
		_c = static_cast<char>(_i);
	}
	else if (isascii(_i) && !isprint(_i)){
		_char = NON_PRINTABLE;
	}
	else {
		_char = IMPOSSIBLE;
	}
	_f = static_cast<float>(input);
	_d = input;
}

void Conversion::convertFromFloat(double input){
	if (input < std::numeric_limits<int>::min() || input > std::numeric_limits<int>::max()){
		_int = IMPOSSIBLE;
	}
	else {
		_i = static_cast<int>(input);
		if (isascii(_i) && isprint(_i)){
			_c = static_cast<char>(_i);
		}
		else if (isascii(_i) && !isprint(_i)){
			_char = NON_PRINTABLE;
		}
		else {
			_char = IMPOSSIBLE;
		}
	}
	_f = static_cast<float>(input);
	_d = input;
}

void Conversion::convertFromDouble(double input){
	if (input < std::numeric_limits<int>::min() || input > std::numeric_limits<int>::max()){
		_int = IMPOSSIBLE;
		_char = IMPOSSIBLE;
	}
	else {
		_i = static_cast<int>(input);
		if (isascii(_i) && isprint(_i)){
			_c = static_cast<char>(_i);
		}
		else if (isascii(_i) && !isprint(_i)){
			_char = NON_PRINTABLE;
		}
		else {
			_char = IMPOSSIBLE;
		}
	}
	if (input < -std::numeric_limits<float>::max() || input > std::numeric_limits<float>::max()){
		_float = IMPOSSIBLE;
	}
	else {
		_f = static_cast<float>(input);
	}
	_d = input;
}

void Conversion::setWrong(){
	_char = IMPOSSIBLE;
	_int = IMPOSSIBLE;
	_float = IMPOSSIBLE;
	_double = IMPOSSIBLE;
}


// print
void Conversion::charToPrint(std::ostream & o) const {
	o << "char : ";
	if (_char.empty()){
		o << _c << std::endl;
		return ;
	}
	o << _char << std::endl;
}

void Conversion::intToPrint(std::ostream & o) const {
	o << "int : ";
	if (_int.empty()){
		o << _i << std::endl;
		return ;
	}
	o << _int << std::endl;
}

void Conversion::floatToPrint(std::ostream & o) const {
	std::cout << std::fixed;
	std::cout.precision(1);
	o << "float : ";
	if (_float.empty()){
		o << _f << "f" << std::endl;
		return ;
	}
	o << _float + "f" << std::endl;
}

void Conversion::doubleToPrint(std::ostream & o) const {
	std::cout << std::fixed;
	std::cout.precision(1);
	o << "double : ";
	if (_double.empty()){
		o << _d << std::endl;
		return ;
	}
	o << _double << std::endl;
}

std::ostream & operator<<(std::ostream & o, Conversion const & rhs){
	rhs.charToPrint(o);
	rhs.intToPrint(o);
	rhs.floatToPrint(o);
	rhs.doubleToPrint(o);
	return o;
}
