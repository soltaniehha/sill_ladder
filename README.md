Spin Incoherent Luttinger Liquid Ladders
===========

Class of variational Ansatze for the spin-incoherent ground state of a Luttinger liquid coupled to a spin bath

> Interacting one-dimensional electron systems are generally referred to as “Luttinger liquids,” after the effective low-energy theory in which spin and charge behave as separate degrees of freedom with independent energy scales. The “spin-incoherent Luttinger liquid” describes a finite-temperature regime that is realized when the temperature is very small relative to the Fermi energy, but larger than the characteristic spin energy scale. Similar physics can take place in the ground state, when a Luttinger liquid is coupled to a spin bath, which effectively introduces a “spin temperature” through its entanglement with the spin degree of freedom. We show that the spin-incoherent state can be written as a factorized wave function, with a spin wave function that can be described within a valence bond formalism. This enables us to calculate exact expressions for the momentum distribution function and the entanglement entropy. This picture holds not only for two antiferromagnetically coupled t-J chains, but also for the t -J -Kondo chain with strongly interacting conduction electrons. We argue that this theory is quite universal and may describe a family of problems that could be dubbed “spin incoherent.”

For technical details please look at our paper [M. Soltanieh-ha and A. E. Feiguin, Phys. Rev. B 86, 205120 (2012)](http://journals.aps.org/prb/abstract/10.1103/PhysRevB.86.205120) which is also attached to the project.


## Exact Diagonalization (ED) Test

To make sure you have all the tools in order to reproduce our results you can check this c++ code that diagonalizes a symmetric real Hamiltonian. The code is in the folder DiagonalizationTest, and one need to have LAPACK/dsyev package and dmtk. Both packages can be found in the LAPACK and dmtk folders.