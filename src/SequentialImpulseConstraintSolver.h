#pragma once

#include "ConstraintSolver.h"

namespace BulletSharp
{
	public ref class SequentialImpulseConstraintSolver : ConstraintSolver
	{
	internal:
		SequentialImpulseConstraintSolver(btSequentialImpulseConstraintSolver* solver);

	public:
		SequentialImpulseConstraintSolver();

#ifndef DISABLE_CONSTRAINTS

		unsigned long Rand2();
		int RandInt2(int n);

		property unsigned long RandSeed
		{
			unsigned long get();
			void set(unsigned long value);
		}

	internal:
		property btSequentialImpulseConstraintSolver* UnmanagedPointer
		{
			btSequentialImpulseConstraintSolver* get() new;
		}
#endif
	};
};
