Steps to Execute MPI
Vi p1.c
Mpicc –o p1 p1.c
Mpirun –np 2 ./p1

Steps to Execute OpenMP
Vi p1.c
cc -o p1 -fopenmp p1.c
./p1

Steps to Execute Pthreads
Vi thread.c
Cc thread.c –o thread –lpthread
./thread
