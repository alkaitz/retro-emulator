/*
 * LoadInstruction.cpp
 *
 *  Created on: Jul 30, 2017
 *      Author: alkaitz
 */

#include "LoadInstruction.h"

LoadInstruction::LoadInstruction():LoadInstruction(nullptr, nullptr)
{
}

LoadInstruction::LoadInstruction(
		std::shared_ptr<MemoryHolder<int> > origin,
		std::shared_ptr<MemoryHolder<int> > target) :
		Instruction(4), mOrigin(origin), mTarget(target)
{

}

LoadInstruction::~LoadInstruction()
{
}

void LoadInstruction::execute(void) {
	mTarget->writeMemory(mOrigin->readMemory());

}
