#ifndef ABSTRACT_PRODUCT_FACTORY_H
#define ABSTRACT_PRODUCT_FACTORY_H

#include "luxury_product.h"
#include "medium_product.h"
#include "low_product.h"

class AbstractProductFactory {
public:
	virtual LuxuryProduct * CreateLuxury() = 0;
	virtual MediumProduct * CreateMedium() = 0;
	virtual LowProduct * CreateLow() = 0;
	virtual ~AbstractProductFactory();
};

#endif // ABSTRACT_PRODUCT_FACTORY_H