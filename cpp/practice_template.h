#ifndef PRACTICE_TEMPLATE_H
#define PRACTICE_TEMPLATE_H

template <typename T>
class TypeOperator {
public:
	TypeOperator();
	virtual ~TypeOperator();

	T Add(T a, T b);
	T Subtract(T a, T b);
};

#endif // PRACTICE_TEMPLATE_H