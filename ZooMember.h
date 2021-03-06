/*
 * ZooMember.h
 *
 *  Created on: May 22, 2017
 *      Author: rlarson
 */

#ifndef ZOOMEMBER_H_
#define ZOOMEMBER_H_

#include "ZooPatron.h"

class ZooMember : public ZooPatron {
public:
	ZooMember(std::string name);
	virtual ~ZooMember();

	virtual bool HasAnimalShowAccess()
	{
		return true;
	}
	virtual bool HasEarlyAccess()
	{
		return true;
	}
};

#endif /* ZOOMEMBER_H_ */
