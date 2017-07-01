#ifndef LOW_PRODUCT_H
#define LOW_PRODUCT_H

class LowProduct {
public:
	virtual void SetPrice(int price) = 0;
	virtual int GetPrice() = 0;
	virtual ~LowProduct();
private:
	int price_;
};
#endif // LOW_PRODUCT_H