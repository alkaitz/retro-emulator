/*
 * LoadInstruction.h
 *
 *  Created on: Jul 30, 2017
 *      Author: alkaitz
 */

#ifndef LOADINSTRUCTION_H_
#define LOADINSTRUCTION_H_

#include <memory>
#include "Instruction.h"
#include "../MemoryHolder.h"

class LoadInstruction: public Instruction {
public:
	LoadInstruction();
	LoadInstruction(std::shared_ptr<MemoryHolder<int> > origin,
			std::shared_ptr<MemoryHolder<int> > target);
	virtual ~LoadInstruction();

	virtual void execute();

private:
	std::shared_ptr<MemoryHolder<int> > mOrigin;
	std::shared_ptr<MemoryHolder<int> > mTarget;
};

#endif /* LOADINSTRUCTION_H_ */
