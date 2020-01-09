# SPLNUM2Analyzer --- Lifted Analyses Tool for SPLs with Boolean and Numerical Features

This tool is a research prototype static analyzer designed for performing numerical static analyzes of #if-enriched C programs. 


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
  
* OUnit

	```
	opam install ounit
	```

* APRON: numerical abstract domain library

	```
	opam install apron
	```

* Zarith: arbitrary-precision integer operations

	```
	opam install zarith
	```


# Compiling lifted_analyzer

Once all required libraries are installed, 'ocamlbuild' can be used to build lifted_analyzer with the following command:

```
eval $(opam config env)                 % It will setup environment variables, that are necessary for the toolchain to work properly

ocamlbuild Main.native -use-ocamlfind -use-menhir -pkgs 'apron,gmp,oUnit,zarith' -I utils -I domains -I frontend -I main -libs boxMPQ,octD,polkaMPQ,str,zarith
```

# Usage

The analyzer performs a forward reachability analysis of programs with #ifdef-s.

The following general command-line options are recognized
(showing their default value):

	 -single 							set to perform single-program analysis
	 -tuple								set to perform tuple-based lifted analysis
	 -tree								set to perform decision tree-based lifted analysis
	 -main main                         set the analyzer entry point (defaults to main)
	 -domain boxes|octagons|polyhedra   set the abstract domain (defaults to boxes)
	 -joinfwd 2                         set the widening delay in forward analysis


# Examples from the paper:

1. SIMPLE example from "Motivating Example" section

enter the folder that contains the tool, and write

$ ./Main.native -tuple -domain boxes tests/simple.c  	// to perform tuple-based lifted analysis using Interval domain of the simple.c file in the folder tests
$ ./Main.native -tuple -domain polyhedra tests/simple.c  // to perform tuple-based lifted analysis using Polyhedra domain of the simple.c file in the folder tests
$ ./Main.native -tree -domain boxes tests/simple.c  	// to perform decision tree-based lifted analysis using Interval domain of the simple.c file in the folder tests
$ ./Main.native -tree -domain polyhedra tests/simple.c  // to perform decision tree-based lifted analysis using Polyhedra domain of the simple.c file in the folder tests


2. Example7 from "Lifted Analysis based on Decision Trees" section

$ ./Main.native -tree -domain polyhedra tests/example7.c 


3. Example8 from "Lifted Analysis based on Decision Trees" section

$ ./Main.native -tree -domain polyhedra tests/example8.c 


4. Benchmarks from Table 1, "Implementation and Evaluation" section

$ ./Main.native -tree -domain boxes tests/half_2.c  	 // to perform decision tree-based lifted analysis using Interval domain
$ ./Main.native -tuple -domain boxes tests/half_2.c		 // to perform tuple-based lifted analysis using Interval domain
$ ./Main.native -tree -domain octagons tests/half_2.c  	 // to perform decision tree-based lifted analysis using Octagons domain
$ ./Main.native -tuple -domain octagons tests/half_2.c   // to perform tuple-based lifted analysis using Octagons domain
$ ./Main.native -tree -domain polyhedra tests/half_2.c  // to perform decision tree-based lifted analysis using Polyhedra domain
$ ./Main.native -tuple -domain polyhedra tests/half_2.c  // to perform tuple-based lifted analysis using Polyhedra domain


5. Benchmarks from Table 2, "Implementation and Evaluation" section

$ ./Main.native -tree -domain polyhedra tests/feasible3-5.c  // to perform decision tree-based lifted analysis using Polyhedra domain of test file with 3 features and domain [0,4] 
$ ./Main.native -tuple -domain polyhedra tests/feasible3-5.c  // to perform tuple-based lifted analysis using Polyhedra domain of test file with 3 features and domain [0,4] 

6. Example from Practical scenarios, "Implementation and Evaluation" section

$ ./Main.native -tree -domain boxes tests/scenario1.c
$ ./Main.native -tree -domain polyhedra tests/scenario1.c


7. Example from Practical scenarios, "Implementation and Evaluation" section

$ ./Main.native -tree -domain boxes tests/scenario2.c
$ ./Main.native -tree -domain polyhedra tests/scenario2.c


7. Example from Program Synthesis by Sketching, "Implementation and Evaluation" section

$ ./Main.native -tree -domain polyhedra tests/synthesis.c