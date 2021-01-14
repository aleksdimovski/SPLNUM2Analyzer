This documents shows how to install all required tools from the paper 
¨A Decision Tree Lifted Domain for Analyzing Program Families with Numerical Features¨
if there is INTERNET CONNECTION. 

The reported results in the paper are obtained on the machine 
[Intel Core TM i7-8700 CPU@3.20GHz x 12, 8 GB Memory, 64-bit Ubuntu 18.04.5 LTS]


##############################################################################################
###  SPLNUM^2Analyzer --- Tuple-based, Decision tree-based, and BDD-based lifted analyzer  ###
##############################################################################################

Lifted Analyses Tool for SPLs with Boolean and Numerical Features. 

This tool is a research prototype static analyzer based on abstract interpretation 
designed for performing numerical static analyzes of #if-enriched C programs. 


## Author

	Aleksandar Dimovski (Sven Apel & Axel Legay)
	
	
# Installation

The tool requires the following applications and libraries:

* OCaml 

	```
	(sudo) apt-get install ocaml-interp
	```

* Findlib

	```
	(sudo) apt-get install ocaml-findlib
	```

* Menhir: LR(1) parser generator

	```
	(sudo) apt-get install menhir
	```
  
* Opam: https://opam.ocaml.org/doc/Install.html

	```
	(sudo) apt-get install opam
	```
* Initialize OPAM state
	```
	opam init      		  % during initilization allow opam to modify ~/.profile
	```	
	```
	eval $(opam env)      % update the current shell environment
	```    
* OUnit

	```
	opam install ounit
	```

* APRON: numerical abstract domain library

	```
	opam install depext
	opam depext apron
	opam install apron
	```
*  Set the Library Path variable in ~/.bashrc 
	```
	gedit ~/.bashrc"
	```
Then, set the Library Path by appending:  % first find the folder where libraries of apron are installed, e.g. "/home/username/.opam/default/share/apron/lib"
	```
	LD_LIBRARY_PATH=/home/username/.opam/default/share/apron/lib
	export LD_LIBRARY_PATH
	```
Log out of the current session, then log in and check:
	```
	echo $LD_LIBRARY_PATH
	```
	
* Zarith: arbitrary-precision integer operations

	```
	opam install zarith
	```


# Compiling lifted_analyzer

Once all required libraries are installed, 'ocamlbuild' can be used to build lifted_analyzer with the following command:

```
eval $(opam config env)                 % It will setup environment variables, that are necessary for the toolchain to work properly
```
```
ocamlbuild Main.native -use-ocamlfind -use-menhir -pkgs 'bddapron,apron,gmp,oUnit,zarith' -I utils -I domains -I frontend -I main -libs boxMPQ,octD,polkaMPQ,str,zarith,bddapron
```


# Usage

The analyzer performs a forward reachability analysis of programs with #ifdef-s.

The following general command-line options are recognized
(showing their default value):

	 -tuple								set to perform tuple-based lifted analysis
	 -tree								set to perform decision tree-based lifted analysis
	 -main main                         set the analyzer entry point (defaults to main)
	 -domain boxes|octagons|polyhedra   set the abstract domain (defaults to boxes)
	 -joinfwd 2                         set the widening delay in forward analysis


# Examples from the paper are found in the "tests" folder:

1. SIMPLE example from "Motivating Example" section

enter the folder that contains the tool, and write

$ ./Main.native -tuple -domain boxes tests/simple.c  	// to perform tuple-based lifted analysis using Interval domain of the simple.c file in the folder tests
$ ./Main.native -tuple -domain polyhedra tests/simple.c  // to perform tuple-based lifted analysis using Polyhedra domain of the simple.c file in the folder tests
$ ./Main.native -tree -domain boxes tests/simple.c  	// to perform decision tree-based lifted analysis using Interval domain of the simple.c file in the folder tests
$ ./Main.native -tree -domain polyhedra tests/simple.c  // to perform decision tree-based lifted analysis using Polyhedra domain of the simple.c file in the folder tests


2. Example4 from "Lifted Analysis based on Decision Trees" section

$ ./Main.native -tree -domain polyhedra tests/example4.c 


3. Example5 from "Lifted Analysis based on Decision Trees" section

$ ./Main.native -tree -domain polyhedra tests/example5.c 


4. Benchmarks from Table 1, "Implementation and Evaluation" section

$ ./Main.native -tree -domain boxes tests/half_2.c  	 // to perform decision tree-based lifted analysis using Interval domain
$ ./Main.native -tuple -domain boxes tests/half_2.c		 // to perform tuple-based lifted analysis using Interval domain
$ ./Main.native -bdd -domain boxes tests/BDDs/half_2.c		 // to perform bdd-based lifted analysis using Interval domain

$ ./Main.native -tree -domain octagons tests/half_2.c  	 // to perform decision tree-based lifted analysis using Octagons domain
$ ./Main.native -tuple -domain octagons tests/half_2.c   // to perform tuple-based lifted analysis using Octagons domain
$ ./Main.native -bdd -domain octagons tests/BDDs/half_2.c		 // to perform bdd-based lifted analysis using Octagons domain

$ ./Main.native -tree -domain polyhedra tests/half_2.c  // to perform decision tree-based lifted analysis using Polyhedra domain
$ ./Main.native -tuple -domain polyhedra tests/half_2.c  // to perform tuple-based lifted analysis using Polyhedra domain
$ ./Main.native -bdd -domain polyhedra tests/BDDs/half_2.c		 // to perform bdd-based lifted analysis using Polyhedra domain

the other benchmarks are: 
heapsort.c; seq.c; eq1.c; eq2.c; sum01*.c; hhk2008.c; gsv2008.c; gcnr2008.c; Toulouse*.c; Mysore.c; copyfd.c; real_parth.c

All benchmarks for which bdd-based lifted analysis is performed are preprocesed in the required form and are found in BDDs subfolder

5. Benchmarks from Table 2, "Implementation and Evaluation" section

$ ./Main.native -tree -domain polyhedra tests/test5-3.c  // to perform decision tree-based lifted analysis using Polyhedra domain of test file with 5 features and domain [0,2] 
$ ./Main.native -tuple -domain polyhedra tests/test5-3.c  // to perform tuple-based lifted analysis using Polyhedra domain of test file with 5 features and domain [0,2] 
$ ./Main.native -bdd -domain polyhedra tests/BDDs/test5.c  // to perform bdd-based lifted analysis using Polyhedra domain of test file with 5 features and any domain 

6. Example from Practical scenarios, "Implementation and Evaluation" section

$ ./Main.native -tree -domain boxes tests/scenario1.c
$ ./Main.native -tree -domain polyhedra tests/scenario1.c


7. Example from Practical scenarios, "Implementation and Evaluation" section

$ ./Main.native -tree -domain boxes tests/scenario2.c
$ ./Main.native -tree -domain polyhedra tests/scenario2.c
