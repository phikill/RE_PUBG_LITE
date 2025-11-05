#ifndef CEF_INCLUDE_BASE_INTERNAL_CEF_ATOMICOPS_X86_WATCOM_H_
#define CEF_INCLUDE_BASE_INTERNAL_CEF_ATOMICOPS_X86_WATCOM_H_

#include <windows.h>

#include <stdint.h>

#include"libcef/base/cef_macros.h"

namespace base 
{
	namespace subtle 
	{

		// NoBarrier_CompareAndSwap
		// Atomic compare and swap for 32-bit integers.
		// Returns old value at *ptr.
		static Atomic32 NoBarrier_CompareAndSwap(volatile Atomic32* ptr, Atomic32 old_value, Atomic32 new_value);
		#pragma aux NoBarrier_CompareAndSwap = \
		    "mov eax, [esp+4]"         /* old_value */ \
		    "mov edx, [esp+8]"         /* ptr */ \
		    "mov ecx, [esp+12]"        /* new_value */ \
		    "lock cmpxchg [edx], ecx"  \
		    parm caller [eax] [edx] [ecx]  \
		    modify exact [eax edx ecx] \
		    value [eax]



		// NoBarrier_AtomicExchange
		// Atomically sets *ptr = new_value and returns old value.
		static Atomic32 NoBarrier_AtomicExchange(volatile Atomic32* ptr, Atomic32 new_value);
		#pragma aux NoBarrier_AtomicExchange = \
		    "xchg eax, [edx]" \
		    parm caller [edx] [eax] \
		    modify exact [eax] \
		    value [eax]


		// Barrier_AtomicIncrement
		// Atomically adds increment to *ptr and returns new value.
		static Atomic32 Barrier_AtomicIncrement(volatile Atomic32* ptr, Atomic32 increment);
		#pragma aux Barrier_AtomicIncrement = \
		    "lock xadd [edx], eax" \
		    "add eax, eax" \
		    parm caller [edx] [eax] \
		    modify exact [eax] \
		    value [eax]

		   

		// NoBarrier_AtomicIncrement
		// Same as Barrier_AtomicIncrement for x86.
		static Atomic32 NoBarrier_AtomicIncrement(volatile Atomic32* ptr, Atomic32 increment);
		#pragma aux NoBarrier_AtomicIncrement = \
		    "lock xadd [eax], edx" \
		    "add edx, edx" \
		    parm caller [eax] [edx] \
		    modify exact [edx] \
		    value [edx]

		// MemoryBarrier
		// Full memory fence using Windows API
		static void MemoryBarrier(void);
		#pragma aux MemoryBarrier = \
		    "lock add dword ptr [esp], 0" \
		    modify exact [eax]


		inline Atomic32 Acquire_CompareAndSwap(volatile Atomic32* ptr, Atomic32 old_value, Atomic32 new_value) 
		{
		    return NoBarrier_CompareAndSwap(ptr, old_value, new_value);
		}

		inline Atomic32 Release_CompareAndSwap(volatile Atomic32* ptr, Atomic32 old_value, Atomic32 new_value) 
		{
		    return NoBarrier_CompareAndSwap(ptr, old_value, new_value);
		}

		// NoBarrier_Store
		// Simple store without memory barrier
		static void NoBarrier_Store(volatile Atomic32* ptr, Atomic32 value);
		#pragma aux NoBarrier_Store = \
		    "mov [eax], edx" \
		    parm caller [eax] [edx] \
		    modify exact []

		// Acquire_Store
		// Atomic exchange acts as a store with acquire semantics
		static void Acquire_Store(volatile Atomic32* ptr, Atomic32 value);
		#pragma aux Acquire_Store = \
		    "xchg [eax], edx" \
		    parm caller [eax] [edx] \
		    modify exact [edx]

		// Release_Store
		// Simple store (no barrier)
		static void Release_Store(volatile Atomic32* ptr, Atomic32 value);
		#pragma aux Release_Store = \
		    "mov [eax], edx" \
		    parm caller [eax] [edx] \
		    modify exact []


		// NoBarrier_Load
		// Simple load without barrier
		static Atomic32 NoBarrier_Load(volatile const Atomic32* ptr);
		#pragma aux NoBarrier_Load = \
		    "mov eax, [esp+4]" \
		    "mov eax, [eax]" \
		    parm caller [] \
		    modify exact [eax] \
		    value [eax]


		// Acquire_Load
		// Load with acquire semantics (acts like simple load here)
		static Atomic32 Acquire_Load(volatile const Atomic32* ptr);
		#pragma aux Acquire_Load = \
		    "mov eax, [esp+4]" \
		    "mov eax, [eax]" \
		    parm caller [] \
		    modify exact [eax] \
		    value [eax]


		// Release_Load
		// Load with memory barrier (uses mfence)
		static Atomic32 Release_Load(volatile const Atomic32* ptr);
		#pragma aux Release_Load = \
		    "mfence" \
		    "mov eax, [esp+4]" \
		    "mov eax, [eax]" \
		    parm caller [] \
		    modify exact [eax] \
		    value [eax]

	}  /* namespace subtle */
}  /* namespace base */










#endif /* CEF_INCLUDE_BASE_INTERNAL_CEF_ATOMICOPS_X86_WATCOM_H_ */
