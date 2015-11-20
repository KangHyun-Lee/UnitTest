#pragma once
class CCalculator
{
public:
	CCalculator(int a, int b);
	virtual ~CCalculator(void);
	
public:
	virtual int Calculate() = 0;

private:
	int m_iA;
	int m_iB;
};