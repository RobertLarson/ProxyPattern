/*
 * Zoo.h
 *
 *  Created on: May 22, 2017
 *      Author: rlarson
 */

#ifndef ZOO_H_
#define ZOO_H_

class ZooPatron;

class Zoo {
public:
	Zoo();
	virtual ~Zoo();

	virtual void EnterZooEarly(ZooPatron * patron);
	virtual void AttendAnimalShow(ZooPatron * patron);
};

#endif /* ZOO_H_ */
