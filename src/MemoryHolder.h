/*
 * MemoryHolder.h
 *
 *  Created on: Jul 30, 2017
 *      Author: alkaitz
 */

#ifndef MEMORYHOLDER_H_
#define MEMORYHOLDER_H_

template <typename T>
class MemoryHolder {
public:
	MemoryHolder() = default;
	virtual ~MemoryHolder() = default;

	T readMemory();
	void writeMemory(T value);
};

#endif /* MEMORYHOLDER_H_ */
