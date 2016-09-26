/**
* First order high-pass filter
* Dimitris Tassopoulos 2016
*/
#pragma once
#include "filter_common.h"

class FO_HPF {
public:

	FO_HPF();
	virtual ~FO_HPF();
	tp_coeffs calculate_coeffs(int fc, int fs = 44100);
	F_SIZE filter(F_SIZE sample);

private:
	F_SIZE m_xnz1, m_xnz2, m_ynz1, m_ynz2;
	tp_coeffs m_coeffs;
};
