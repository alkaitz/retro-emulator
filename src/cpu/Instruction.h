/*
 * Instruction.h
 *
 *  Created on: Jul 30, 2017
 *      Author: alkaitz
 */

#ifndef INSTRUCTION_H_
#define INSTRUCTION_H_

#include <memory>

class Instruction {
public:
	Instruction();
	Instruction(int cycles);
	virtual ~Instruction();

	virtual void execute() = 0;
	virtual std::shared_ptr<Instruction> next() = 0;

private:
	int cpuCycles = 4;
};

#endif /* INSTRUCTION_H_ */
