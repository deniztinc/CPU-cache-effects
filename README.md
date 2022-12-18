# CPU-cache-effects
Step size and array size effects on run time / access time.


The StepSize file is to observe how changing step size affects run time.
The run times are very similar especially after stepSize = 15, this
shows that the run times are dominated by the cache misses rather than what’s done
inside the loop. 
The run time is stabilized compared to the run times when the number
of steps were smaller, after a certain number for the size of the array, run time becomes
very consistent. It is predicted that the cache line size was
found around array size 10.

The ArraySize file is on the effect of array size on run time to access an
element in the array. The access time was mostly longer compared to the previous
access time, and there were cache misses in both L1 and L2.

It is shown in this experiment that L1 misses are mostly acceptable because they
take less time, but L2 misses could not be allowed as much since they take much longer
time, causing a long wait.
